
## 简单问答机器人
```
#include<iostream>
using namespace std;

int main() //integer 整数 main 主要的 
{
	char a[1000]; //character 字符 
	char c;
	while((c = getchar()) == '\n') {} //等待输入 
	cin.getline(a, 1024); //存储输入 
	cout<<c<<a<<endl; 
	cout<<"-> My name is lilei"<<endl; // end + line
	while((getchar()) == '\n') {} //等待输入 
	cin.getline(a, 1024); //存储输入
	cout<<"-> I'm 7 years old."<<endl;
	return 0;
}
```

## 简单计算实现

计算1+2+...+100

计算1+2+...+1997

计算1*2*...*10

```
#include<iostream>
using namespace std;
int main() //integer 整数 
{
	cout<<((1+100)*100/2)<<endl; //计算1+2+...+100 
	cout<<((1+1997)*1997/2)<<endl; //计算1+2+...+1997
	cout<<(1*2*3*4*5*6*7*8*9*10)<<endl; //计算1*2*...*10
	//循环 for, while
	int num = 1; //定义一个变量 number
	//num = 2;
	for(int i = 1; i <= 3; i++) {
		num = num * i; //赋值，覆盖，替换 
	}
	cout<<"num = "<<num<<endl;
}
```