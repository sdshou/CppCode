#include<iostream>
using namespace std;

int main()
{
    int n, a[100];
    cin>>n;
    //读取整个数组
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max1 = a[0], max2 = -1;
    for(int i = 1; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        } 
        else if (a[i] > max2)
        {
            max2 = a[i];
        }
    }
    cout<<max2;
    return 0;
}

/**
#include<iostream>
using namespace std;

int main()
{
    int n, a, max1, max2 = -1;
    cin>>n;
    cin>>max1;
    for (int i = 1; i < n; i++)
    {
        cin>>a;
        if (a > max1)
        {
            max2 = max1;
            max1 = a;
        }
        else if (a > max2)
        {
            max2 = a;
        }
    }
    cout<<max2;
    return 0;
}

*/