
## 数组里找最大和第二大

```
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
	//在array里找出最大数字对应的位置 
	int bigi = 1;
	for (int i = 2; i <= n; i++)
	{
		if (array[i] > array[bigi]) {
			bigi = i;
		}
	}
	cout<<"最大的数是第"<<bigi<<"个"<<endl;
	//交换最大的数跟数组第一个数的值
	int t = array[1];
	array[1] = array[bigi];
	array[bigi] = t;
	// [6,87,2,99,124] -> [124,87,2,99,6]
	//从第二个数开始找最大
	int big2 = array[2];
	for (int i = 3; i <= n; i++)
	{
		if (array[i] > big2) {
			big2 = array[i];
		}
	}
	cout<<"第二大的数字是 "<<big2<<endl;
} 
```

## 利用函数来找最大和第二大

```
#include<iostream>
using namespace std;

int findMax(int start, int end, int a[]) {
	int bigi = start;
	for (int i = start + 1; i <= end; i++)
	{
		if (a[i] > a[bigi]) {
			bigi = i;
		}
	}
	return bigi;
}
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
	//在array里找出最大数字对应的位置 
	int bigi = findMax(1, n, array);
	cout<<"最大的数是第"<<bigi<<"个"<<endl;
	//交换最大的数跟数组第一个数的值
	int t = array[1];
	array[1] = array[bigi];
	array[bigi] = t;
	// [6,87,2,99,124] -> [124,87,2,99,6]
	//从第二个数开始找最大
	int bigi2 = findMax(2, n, array);
	cout<<"第二大的数字是 "<<array[bigi2]<<endl;
} 
```

## 判断质数的函数

```
//打印出100-500内所有的质数 prime number 
#include<iostream>
using namespace std;
int isPrime(int num){
	//返回0 表示不是质数
	//返回1 表示是质数 
	for (int i = 2; i <= num - 1; i++) { //i作为除数 
		int y = num % i;
		if (y == 0) //整除了
		{
			return 0;
		} 
	}
	return 1;
}

int main()
{
//	cout<<(5/2)<<endl;
//	cout<<(5%2)<<endl; //求余数 
	for (int i = 100; i <= 500; i++){
		if (isPrime(i)) cout<<i<<endl;
	}
}
```