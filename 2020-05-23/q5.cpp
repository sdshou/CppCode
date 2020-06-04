#include<iostream>
using namespace std;

int isPrime(int num)
{
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main()
{
    for(int i = 100; i <= 500; i++)
    {
        if (isPrime(i) == 1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}