#include<iosteam>
using namespace std;
int main()
{
    int n, array[100];
    // 输入
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    // 算和
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    // 算平均数
    double avg = sum / n;
    cout<<avg;
    
    return 0;
}
       
