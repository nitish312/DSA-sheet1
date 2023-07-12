// 1. reverse the num ? O(log N) : O(1)
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

int main(){

    int n = 315253;

    if(isPalindrome(n)) cout<<"Yes, it is";
    else cout<<"No, its not";

    return 0;
}