// // iterative ? O(d * N) = O(N^2) : O(1)
// // d is total no. of elems in range
// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int n){

//     if(n < 2) return false;
    
//     for(int i=2; i*i<=n; i++){
//         if(n % i == 0) return false;
//     }

//     return true;
// }

// void printPrimeNumbersInRange(int mini, int maxi){

//     for(int i=mini; i<=maxi; i++){

//         if(isPrime(i)) cout<<i<<" ";
//     }
// }

// int main(){

//     int minRange = 2;
//     int maxRange = 17;

//     printPrimeNumbersInRange(minRange, maxRange);

//     return 0;
// }



// iterative ? O(d * sqrt(N)) : O(1)
// d is total no. of elems in range
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){

    if(n < 2) return false;

    for(int i=2; i*i<=n; i++){

        if(n % i == 0) return false;
    }

    return true;
}

void printPrimeNumbersInRange(int mini, int maxi){

    for(int i=mini; i<=maxi; i++){

        if(isPrime(i)) cout<<i<<" ";
    }
}

int main(){

    int minRange = 2;
    int maxRange = 17;

    printPrimeNumbersInRange(minRange, maxRange);

    return 0;
}