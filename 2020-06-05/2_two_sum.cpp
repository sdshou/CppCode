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