#include<iostream>
using namespace std;

//计算a和b的最大公约数
//暴力方法
//假设 a < b
int gcd(int a, int b)
{
    int res = 1; //如果a和b互质的话，res为1
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0) res = i;
    }
    return res;
}

int main()
{
    cin>>a>>b;
    //交换一下a和b的值
    if (a > b)
    {
        int x = a;
        a = b;
        b = x;
    }
    cout<<gcd(a, b);
    return 0;
}