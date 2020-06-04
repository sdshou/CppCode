<h2 style="color:blue">05-30</h2>

## 最大公约数的计算

### 优化后的暴力方法

利用递归
```
//计算a和b的最大公约数，暴力方法
//假设 a < b
int gcd(int a, int b)
{
    int res = 1; //如果a和b互质的话，res为1
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            res = i * gcd(a / i, b / i);
        }
    }
    return res;
}
```

另一种写法，不用递归

```
//计算a和b的最大公约数，暴力方法
//假设 a < b
int gcd(int a, int b)
{
    int res = 1; //如果a和b互质的话，res为1
    int i = 2;
    int flag = 1; //flag如果是0 表示 a 和 b 互质， 1 表示 a 和 b 不为互质
    while (flag == 1)
    {
        int flag = 0; //0 表示 a 和 b 互质
        for (int i = 2; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                flag = 1; //此时a 和 b 不互质，所以flag设为1
                res = i * res; //累乘目前为止所有的除数
                a = a / i;
                b = b / i;
                break;
            }
        }
    }
    return res;
}
```


### 最大公约数的终极算法（只用减法）

#### 利用递归
```
int gcd(int a, int b)
{
    //如果a == b，则说明最大公约数是他们本身
	if (a == b) return a;
    //如果a > b，则把 a 和 b 的值交换
	if (a > b) {
		int x = a;
		a = b;
		b = x;
	}
	return gcd(a, b - a);
}
```


#### 不用递归
```
//先交换，再计算
int gcd(int a, int b)
{
	while(a != b)
	{
        //如果a > b，则把 a 和 b 的值交换
		if (a > b)
        {
			int x = a;
			a = b;
			b = x;
		}
		b = b - a;
	}
	return a;
}
```

```
//先计算，再交换（假设一开始a < b）
int gcd(int a, int b)
{
	while(a != b)
	{
		b = b - a;
		if (a > b)
        {
            int x = a;
            a = b;
			b = x;
		}
	}
	return a;
}
```

同学们的版本
```
int gcd(int a, int b)
{
	while(a != b)
	{
		int c = b - a;
		if (c < a){
			b = a;
			a = c;
		} else {
			b = c;
		}
	}
	return a;
}
```