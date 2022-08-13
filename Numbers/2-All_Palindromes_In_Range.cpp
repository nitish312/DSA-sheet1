// iterative ? O(d log N) : O(1)
// d is total no. of elems in range
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n){

    int temp = n, rev = 0;
    while(temp){

        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp /= 10;
    }

    if(rev == n) return true;

    return false;
}

void printPalindromesInRange(int mini, int maxi){

    for(int i=mini; i<=maxi; i++){

        if(checkPalindrome(i)){

            cout<<i<<" ";
        }
    }
}

int main(){

    int minRange = 100;
    int maxRange = 150;

    printPalindromesInRange(minRange, maxRange);

    return 0;
}