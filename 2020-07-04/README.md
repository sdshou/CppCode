<h2 style="color:blue">07-04</h2>

1.统计出一个数组里有多少个数字5

2.统计出一个2维数组里有多少个数字5

3.一家水果店苹果3元一个，桔子2元一个，草莓1元一个，如果你有n块钱，请你打印出所有的买法

4.一家水果店桃子4元一个，苹果3元一个，桔子2元一个，草莓1元一个，如果你有n块钱，请你打印出所有的买法

5.一家水果店火龙果8元一个，桃子4元一个，苹果3元一个，桔子2元一个，草莓1元一个，如果你有n块钱，请你打印出所有的买法

6.一家水果店有k种水果，给你一个长度为k的数组表示每种水果的价格（都是正整数），如果你有n块钱，请你打印出所有的买法

```
#include<iostream>
using namespace std;
int g = 1;
void fruit(int a[], int b[], int money, int index, int k) {
	//结束条件
	if (money < 0) return;
	if (index >= k) { //表示成功，输出答案 
		cout<<g<<". ";
		for(int i = 0; i < k; i++) {
			cout<<b[i]<<", ";
		}
		cout<<endl;
		g++;
		return;
	}
	//递归逻辑
	int l = money/a[index];
	for(int c = 0; c <= l; c++) {
		b[index] = c;
		fruit(a, b, money - c*a[index], index+1, k);
	}
}


int main()
{
	//输入
	int k, a[100], n;
	cin>>k>>n;
	for(int i = 0; i < k; i++) {
		cin>>a[i];
	}
	//调用函数来计算 
	int b[100];
	fruit(a, b, n, 0, k);
	cout<<"total: "<<g;
	return 0;
} 
```

7.一个人从左上角出发，要走到右下角，只能往右或者往下移动，0表示不能通过，打印出所有走法（按次序打印出路径上的数字即可）

| 5 | 1 | 5 | 0 | 5 | 1 | 5 |
| :---- | :----: | :---- | :----: | :---- | :----: | :---- |
| 1 | 1 | 2 | 1 | 3 | 0 | 2 |
| 5 | 2 | 2 | 0 | 5 | 1 | 5 |

```
#include<iostream>
using namespace std;

bool dfs(int x, int y, int a[][100], int row, int col)
{
	//结束条件
	if(x == row - 1 && y == col - 1) return true;
	
	//判断往右走能否走到右下角 
	if (a[x][y + 1] != 0) {
		bool res = dfs(x, y + 1, a, row, col);
		if (res) return true;
	}
	//判断往下走能否走到右下角
	if (a[x + 1][y] != 0) {
		bool res = dfs(x + 1, y, a, row, col);
		if (res) return true;
	}
	return false;
}

int main()
{
	//输入
	int row = 3, col = 4;
	int a[row][100]; 
	for(int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin>>a[i][j];
		}
	}
    //调用递归函数计算结果
	bool res = dfs(0, 0, a, row, col);
	cout<<res<<endl;
	return 0;
} 
```

## 深度优先搜索算法(DFS)

Deapth First Search

1.设有n个整数的集合{1,2,3,...,n}，全为正整数且没有重复，请打印出所有长度为3的子集。

【输出】

{1,2,3}, {1,2,4},...,{1,2,n},

{1,3,4}, {1,3,5},...,{1,3,n},

{1,4,5}, {1,4,6},...,{1,4,n},

...,

{2,3,4}, {2,3,5},...,{2,3,n},

{2,4,5}, {2,4,6},...,{2,4,n},

{2,5,6}, {2,5,7},...,{2,5,n},



2.给一个数组以及一个数字X，这个数组里全为正整数且没有重复，在这个数组中可能存在几个数之和等于X，请打印出所有这些数的组合，用[]隔开。

- 比如数组{1, 4, 6, 2}, X = 6

    输出：[6], [4,2]
- 数组{1, 4, 6, 2}, X = 7

    输出：[1,6], [1,4,2]