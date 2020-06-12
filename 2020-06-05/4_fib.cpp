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

// 用递归实现
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