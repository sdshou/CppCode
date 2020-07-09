
## 找数组里第二大的数（新解法）
```
//找一个数组里的第二大的数 
#include<iostream>
using namespace std;

int main() //int => integer 整数 
{
	//输入
	int n;
	int array[1000];
	cin>>n;
	for (int i = 1; i <= n; i++) {
		cin>>array[i];
	}
	int big, big2;
	if (array[1] > array[2]) {
		big = array[1];
		big2 = array[2];
	} else {
		big = array[2];
		big2 = array[1];
	}
	for (int i = 3; i <= n; i++) {
		if (array[i] > big) {
			big2 = big;
			big = array[i]; // = 表示 替换 
		} else if (array[i] > big2) {
			big2 = array[i];
		}
	}
	cout<<"最大的数是 "<<big<<endl; 
	cout<<"第二大的数是 "<<big2<<endl; 
}
```

## 数组里是否存在2个数字之和等于 X (两个for循环)
```
//给你一个数组，都是正整数，再给你一个数 X ，
//请你找出这个数组里是否存在2个数字之和等于 X , 
//是的话打印“是”，否则打印“否”
#include<iostream>
using namespace std;

int main() //int => integer 整数 
{
	//输入
	int n, x; //数组长度 
	int array[1000];
	cin>>n>>x;
	for (int i = 1; i <= n; i++) {
		cin>>array[i];
	}
	//在数组array中找出2个数字之和 a + b等于 X 
//	1 2 3 4 5 6 | x = 12
//	        a b
	int y = 0;
	for (int a = 1; a < n; a++) {
		for( int b = a + 1; b <= n; b++) {
			if (array[b] == (x - array[a])) {
				y = 1;
				cout<<"是"<<endl;
				cout<<array[b]<<", "<<array[a]<<endl;
			}
		}
	} 
	if (y == 0) cout<<"否"<<endl;
	return 0;
}
```