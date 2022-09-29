#include<iostream>
using namespace std;

int getLength(int n)
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
    int len = getLength(n);
    int num = n, sum = 0;
    while(num)
    {
        int lastDigit = num % 10;
        int digit = 1;
        for(int i=0; i<len; i++)
        {
        	digit *= lastDigit;
        }
        sum += digit;
        num /= 10;
    }
    
    return sum == n;
}

int main()
{
    int n = 371;
    if(isArmstrong(n))
        cout<<n<<"is armstrong no.";
    else
        cout<<n<<"is not armstrong no.";
    return 0;
}