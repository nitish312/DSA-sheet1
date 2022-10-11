// 1. loop n palin ? O(range*logN) : O(1)
#include<iostream>
using namespace std;

bool isPalindrome(int n)
{
    int num = n, rev = 0;
    while(num)
    {
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num /= 10;
    }
    return (rev == n);
}

void printPalindromesInRange(int mini, int maxi)
{
    for(int i=mini; i<=maxi; i++)
        if(isPalindrome(i)) 
            cout<<i<<" ";
}

int main(){

    int minRange = 100;
    int maxRange = 150;

    printPalindromesInRange(minRange, maxRange);

    return 0;
}