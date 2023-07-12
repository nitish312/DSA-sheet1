#include<bits/stdc++.h>
using namespace std;

// 1. brute ? O(log N * log(log N)) ? O(1)
// where N is no. of digits in a given numbers
// to calculate power -> log b
// to calculatee power for N elements -> log(log b)
int getDigits(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n /= 10;
    }
    return count;
}

bool isArmstrong(int n)
{
    int totalDigits = getDigits(n);
    
    int num = n, sum = 0;
    while(num)
    {
        int digit = num % 10, product = 1;
        for(int i=0; i<totalDigits; i++)
            product *= digit;
        sum += product;
        num /= 10;
    }
    return (sum == n);
}

int main()
{
    int n = 371;
    if(isArmstrong(n)) cout<<n<<" is armstrong number";
    else cout<<n<<" is not armstrong number";

    return 0;
}