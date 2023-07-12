#include<bits/stdc++.h>
using namespace std;

// same previous soln * range
bool isPrime(int n){}

void printPrimeNumbersInRange(int mini, int maxi)
{
    for(int i=mini; i<=maxi; i++)
        if(isPrime(i)) 
            cout<<i<<" ";
}

int main(){

    int minRange = 2;
    int maxRange = 17;

    printPrimeNumbersInRange(minRange, maxRange);

    return 0;
}