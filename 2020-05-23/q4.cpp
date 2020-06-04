#include<iostream>
using namespace std;

void reverse(int[] a, n)
{
    int left = 0, right = n - 1, temp;
    while (left < right)
    {
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;
    }
}

int main()
{
    int n, a[100];
    cin>>n;
    //读取整个数组
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    reverse(a);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}