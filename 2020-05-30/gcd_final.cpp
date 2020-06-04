#include<iostream>
using namespace std;

//计算a和b的最大公约数
//终极算法（只用减法）
//利用递归
int gcd(int a, int b)
{
	if (a == b) return a;
	if (a > b) {
		int x = a;
		a = b;
		b = x;
	}
	return gcd(a, b - a);
}

int main()
{
    cin>>a>>b;
    cout<<gcd(a, b);
    return 0;
}