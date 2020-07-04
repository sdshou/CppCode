<h2 style="color:blue">07-03</h2>

1.统计出一个数组里有多少个数字5

2.统计出一个2维数组里有多少个数字5

3.一家水果店苹果3元一个，桔子2元一个，草莓1元一个，如果你有n块钱，请你打印出所有的买法

```
#include <iostream>
using namespace std;
int main()
{
	int n, count = 0;
	cin>>n;
	int index = 1;
	for (int i = 0; i <= n / 3; i++)
	{
		int m = n - i * 3;
		for (int j = 0; j <= m / 2; j++)
		{
			int k = m - j * 2;
			count += k + 1;
			for (int z = 0; z <= k; z++){
				cout<<index<<". apple: "<<i<<", orange: "<<j<<", stawberry: "<<z<<endl;
				index++;
			}
			
		}
	}
	cout<<count;
	return 0;
}
```