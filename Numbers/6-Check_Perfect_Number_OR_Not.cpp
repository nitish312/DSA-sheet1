// Perfect number is a num which equal to sum of its proper divisors
// eg. 6 = 1 + 2 + 3
// perfect no. are 6, 28, 496
#include<iostream>
using namespace std;

// 1. brute ? O(N) : O(1)
bool isPerfectNumber(int n)
{
    int sum = 1;
    for(int i=2; i<n; i++)
        if(n % i == 0) 
            sum += i;

    return (sum == n);  
}

int main(){

    int n = 28;

    if(isPerfectNumber(n)) cout<<"Yes, it is";
    else cout<<"No, its not";

    return 0;
}