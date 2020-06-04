<h2 style="color:blue">05-29</h2>

## 函数的递归

一个函数可以调用其他函数，也可以调用自己

递归函数必须得有结束条件(base case)，不然它不知道什么时候结束，会进入死循环

```
//运行后会进入死循环，直到内存满了，程序结束
void f1()
{
    cout<<500<<" ";
    f1();
}

```

```
//运行后不会进入死循环，count == 0 时程序就结束
void f2(int count)
{
    //结束条件 base case
    if (count == 0) return;

    cout<<500<<" ";
    f2(count - 1);
}

```

## 最大公约数的计算

### 暴力方法

```
//假设 a < b
int gcd(int a, int b)
{
    int gcd = 1; //如果a和b互质的话，gcd为1
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0) gcd = i;
    }
    return gcd;
}
```