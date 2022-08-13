// loop ? O(log N * log(log b)) ? O(1)
// where N is no. of digits in a given numbers and
// count variable -> log b and power function -> log(log b)
#include<bits/stdc++.h>
using namespace std;
// Armstrong Numbers are the numbers having the sum of digits 
// raised to power no. of digits is equal to a given number
// eg - 0 1 153 370 371 407 1634

int getDigitsCount(int n){
    int count = 0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}

int power(int n, int pow){

    if(pow == 0) return 1;

    if(pow % 2 == 0)
        return power(n, pow/2) * power(n, pow/2);
    else
        return n * power(n, pow/2) * power(n, pow/2);
}

bool isArmstrong(int n){

    int temp = n, digit, sum = 0;
    int count = getDigitsCount(temp);

    while(temp){
        digit = temp % 10;
        sum += power(digit, count); 
        temp /= 10;
    }

    return (sum == n);
}

int main(){

    int n = 1634;

    if(isArmstrong(n)) cout<<"Yes, it is";
    else cout<<"No, its not";

    return 0;
}