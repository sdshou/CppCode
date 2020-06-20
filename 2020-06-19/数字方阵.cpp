#include <iostream>
using namespace std;

int main()
{
	//输入
	int n, m, k;
	cin>>n>>m>>k;
	int a[500][500];
	for(int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
			cin>>a[i][j];
		}
	}
	//取出第K行的数据到数组b 
	int b[500];
	for (int i = 0; i < m; i++) {
		b[i] = a[k - 1][i];
	}
	//验证
	cout<<"验证数组b";
	for (int i = 0; i < m; i++) {
		cout<<b[i];
	}
	cout<<endl; 
	//找最长

	//-> 先记录下所有0的位置
	int c[500], ci = 1;
	c[0] = 0;
	for (int i = 0; i < m; i++) {
		if (b[i] == 0) {
			c[ci] = i;
			ci++;
		}
	}
	c[ci] = m;
	//验证
	cout<<"验证数组c";
	for (int i = 0; i <= ci; i++) {
		cout<<c[i]<<", ";
	}
	cout<<endl; 
	//找距离
	int max = 0;
	for (int i = 1; i <= ci; i++) {
		int d = c[i] - c[i - 1] - 1;
		if (d > max) max = d;
	}
	cout<<max;
	return 0;
	
} 