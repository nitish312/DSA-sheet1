// dummy var ? O(log N) : O(1)
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){

    int temp = n, rev = 0;
    while(temp){

        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp /= 10;
    }

    if(rev == n) return true;

    return false;
}

int main(){

    int n = 35253;

    if(isPalindrome(n)) cout<<"Yes, it is";
    else cout<<"No, its not";

    return 0;
}