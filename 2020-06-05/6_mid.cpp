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