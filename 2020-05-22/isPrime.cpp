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
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}