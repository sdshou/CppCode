#include<iostream>
using namespace std;

int main()
{
    int n, a[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if (a[i] > max) max = a[i];
    }
    cout<<max;
    return 0;
}

//解法2
/**
int main()
{
    int n, a, max;
    cin>>n;
    cin>>max;//把数组第一个数赋给max
    for (int i = 1; i < n; i++)
    {
        cin>>a;
        if (a > max) max = a;
    }
    return 0;
}
*/