<h2 style="color:blue">06-05, 06-06</h2>

## 考试


1.给一个数组，打印出他们的平均数

```
#include<iostream>
using namespace std;
int main()
{
    int n, array[100];
    // 输入
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    // 算和
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    // 算平均数
    double avg = sum / n;
    cout<<avg;
    
    return 0;
}
       

```

----

2.给一个数组和一个数X，在这个数组中可能存在2个数之和等于X，如果存在请打印出所有符合条件的2个数，用[]隔开；否则打印"No"。
- 比如数组{1, 4, 6, 2}, X = 6

    输出：[4, 2]
- 数组{1, 4, 6, 3}, X = 7

    输出：[1, 6], [3, 4]

- 数组{1, 4, 6, 3}, X = 8

    输出：No

```
#include<iostream>
using namespace std;
int main()
{
    //输入
    int n, sum, arr[100];
    cin>>n;
    cin>>sum;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //2个循环搜索
    bool hasResult = false;
    for (int i = 0; i < n; i++) {
        int target = sum - arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == target) {
                hasResult = true;
                cout<<"["<<arr[i]<<", "<<arr[j]<<"] ";
            }
        }
    }
    if (!hasResult) cout<<"No";
    return 0;
}
```

------

3.给一个数判断其是否为平方数，如果是平方数，打印出"Yes"， 否则打印"No"。255968001,15999

- 什么是平方数：

    比如16是4的平方，则16是平方数；

    25 = 5 * 5，则25是平方数；

    36, 49, 64 也都是平方数

```
#include<iostream>
using namespace std;
bool isSquare(int num)
{
    if (num == 0 || num == 1) return true;
    for (int seed = 2; seed <= num / 2; seed++)
    {
        if (seed * seed == num) return true;
    }
    return false;
}
int main()
{
    //输入
    int num;
    cin>>num;
    
    if (isSquare(num)) cout<<"Yes";
    else cout<<"No";
    return 0;
}
```

----

4.斐波那契数列是一种特殊的数列，它的第一个数是0，第二个数是1， 之后每一个数都是前面2个数之和。求问第 5000 个数字是多少？请打印出来

- 斐波那契数列：0, 1, 1, 2, 3, 5, 8, 13, 21, ...

```
#include<iostream>
using namespace std;
// 为什么用long long型？
// 因为long型跟int型都是32bit，而long long是64bit能表示的数字更大
long long fib(int count)
{
    if (count == 1) return 0;
    if (count == 2) return 1;
    long long a = 0, b = 1, c;
    // i 表示计算第 i 个斐波那契数字，答案在c上面
    for (int i = 3; i <= count; i++)
    {
        c = a + b;
        a = b; b = c;
    }
    return c;
}

// 也可以用递归实现
long long fib_recursion(int count)
{
    if (count == 1) return 0;
    if (count == 2) return 1;
    return fib_recursion(count - 1) + fib_recursion(count - 2);
}

int main()
{
    //输入
    int count;
    cin>>count;
    //调用fib()函数计算斐波那契数列
    cout<<fib(count);
    return 0;
}
```

----

5.汉诺塔數學问题：

有三根杆子A，B，C。A杆上有 N 个 (N>1) 穿孔圆盘，盘的尺寸由下到上依次变小。要求按下列规则将所有圆盘移至 C 杆：

每次只能移动一个圆盘；
大盘不能叠在小盘上面。
提示：可将圆盘临时置于 B 杆，也可将从 A 杆移出的圆盘重新移回 A 杆，但都必须遵循上述两条规则。

问：要使得移动的次数最小，该如何移？请打印出最少要移动多少次，以及所有的移动过程。

- 移动的过程可以这么表示：

    A -> B;

    B -> C;

```
#include<iostream>
using namespace std;
//用递归实现汉诺塔圆盘的移动步骤
void hanoi(int num, char start, char mid, char end)
{
    if (num == 0) return;
    hanoi(num - 1, start, end, mid);
    cout<<"move #"<<num<<": "<<start<<" -> "<<end<<endl;
    hanoi(num - 1, mid, start, end);
}

int main()
{
    //输入起始汉诺塔的圆盘个数
    int num;
    cin>>num;
    hanoi(num, 'A', 'B', 'C');
    return 0;
}
```
----

6.给一个数组，打印出他们的中位数
- 中位数（Median）又称中值，是按顺序排列的一组数据中居于中间位置的数
- 比如{4, 1, 8, 15, 2}，中位数是 4
- 比如{4, 1, 8, 2}，中位数则是 (2 + 4) / 2 = 3

```
#include<iostream>
using namespace std;
//找到一个数组中最大的数的下标
int findMax(int arr[], int start, int n)
{
    int max = start;
    for (int i = start + 1; i < n; i++)
    {
        if (arr[i] > arr[max]) max = i;
    }
    return max;
}
//要得到中位数，得先排序
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int max = findMax(arr, i, n);
        // 把最大数跟 arr[i] 交换
        int temp = arr[max];
        arr[max] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    //输入
    int n, arr[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //排序
    sort(arr, n);
    //算中位数
    if (n % 2 == 1) {
        cout<<arr[n / 2];
    } else {
        double mid = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
        cout<<mid;
    }
    return 0;
}
```

----

7.给一个数组以及一个数字X，这个数组里全为正整数且没有重复，在这个数组中可能存在几个数之和等于X，请打印出所有这些数的组合，用[]隔开。

- 比如数组{1, 4, 6, 2}, X = 6

    输出：[6], [4,2]
- 数组{1, 4, 6, 2}, X = 7

    输出：[1,6], [1,4,2]

```
#include<iostream>
using namespace std;
//深度搜索
void dfs(int arr[], int n, int sum, int start, int temp[], int index)
{
    //结束条件 base case
    //成功找到一个的情况结束
    if (sum == 0) {
        cout<<"["<<temp[0];
        for (int i = 1; i < index; i++) {
            cout<<", "<<temp[i];
        }
        cout<<"]"<<endl;
    }
    //找不到的情况结束
    if (start == n || sum < 0) return;

    for (int i = start; i < n; i++)
    {
        temp[index] = arr[i];
        dfs(arr, n, sum - arr[i], i + 1, temp, index + 1);
    }
}

int main()
{
    //输入
    int n, x, arr[100], temp[100];
    cin>>n;
    cin>>x;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    //深度搜索算法遍历所有可能性
    dfs(arr, n, x, 0, temp, 0);
}
```