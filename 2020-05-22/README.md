<h2 style="color:blue">05-22</h2>

### 1. 计算机基础介绍

#### 操作系统(OS)
- Linux, Windows, MacOs
- 国外编程主流用Linux 或 MacOs， 中国用Windows多
- 用terminal与计算机进行交互，常用系统指令：
    - `dir` : (directory) 列出当前目录所有文件及文件夹
    - `cd` : (change directory) 变更目录
        - `cd ../` : 变更至上层目录

#### 计算机的存储
- 内存(RAM): Memory 也叫记忆体, 不能永久存储，断电即没
- 硬盘: Disk
    - 机械硬盘: mechanical hard disk drive(HDD) 可以永久存储
    - 固态硬盘: solid state disk(SSD) 可以永久存储，但是写入次数超过限制后会报废

- 存储的I/O速度：RAM > SSD > HDD

- 同样大小的存储的价格：RAM > SSD > HDD


### 2. 函数

#### 自定义函数
```
//判断是否是质数，输出1表示是质数，输出0则不是
int isPrime(int num)
{
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0) return 0;
    }
    return 1;
}
```

#### 系统函数 main()

`main()`函数是个特殊的函数，在可执行的cpp文件中，程序运行时会先寻找`main()`函数，然后运行`main()`函数里的程序

可以在`main()`里调用`isPrime()`

```
int main()
{
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}
```