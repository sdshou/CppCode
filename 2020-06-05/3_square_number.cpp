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