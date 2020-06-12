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