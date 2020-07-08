## C++基础知识

```
#include<iostream>
using namespace std;

int main()
{
	//什么是变量
	int i = 10909090801; //integer 整数 最多表示2^32个数字
	cout<<"i = "<<i<<endl; 
	long long j = 10909090801; //整数 最多表示2^64个数字
	cout<<"j = "<<j<<endl;
	
	char c = 'b'; //character 字符 表示一个 英文字符或者标点，或者特殊字符 
	cout<<"c = "<<c<<endl;
	 
	float x = 1.5; //单精度浮点数 表示有小数点的数字 
	double y = 2.7; //双精度浮点数 表示有小数点的数字
	
	//=========
	//什么是数组 
	//如果我要表示一句话 "What's your name?"
	//字符数组 
	char abc[1024];
	cin.getline(abc, 1024);
	cout<<"abc = "<<abc<<endl;
	
	//整数型数组 array
	int array[1000];
	//输入数字存到数组里 
	for(int i = 1; i <= 5; i++){
		cin>>array[i];
	}
	cout<<"第3个数是 "<<array[3]<<endl; 
	for(int i = 1; i <= 5; i++){
		cout<<"第"<<i<<"个："<<array[i]<<endl;
	}
}

```

## 比较两个数字的大小
```
#include<iostream>
using namespace std;
int main()
{
	//比较两个数字的大小
	int x, y;
	cin>>x>>y;
	if (x > y) { // if 如果 
		cout<<"x大于y";
	} else if (x == y) {
		cout<<"x等于y";
	} else {
		cout<<"x小于y"; 
	}
} 
```

## 思考题

```
//输入一组数array，输入一个数字n，表示数组的长度
//请找出数组里最大的数字并输出
#include<iostream>
using namespace std;
int main()
{
	//输入 
	int n;
	int array[1024];
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		cin>>array[i];
	}
	//在array里找出最大数字
	
} 
```