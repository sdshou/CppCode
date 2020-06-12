#include<iostream>
using namespace std;
//用递归实现汉诺塔圆盘的移动步骤
void hanoi(int num, char start, char mid, char end)
{
    if (num == 0) return;
    hanoi(num - 1, start, end, mid);
    cout<<"move #"<<num<<": "<<start<<" -> "<<end<<endl;
    hanoi(num - 1, mid, start, end);
}

int main()
{
    //输入起始汉诺塔的圆盘个数
    int num;
    cin>>num;
    hanoi(num, 'A', 'B', 'C');
    return 0;
}