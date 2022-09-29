
// #include<bits/stdc++.h>
// using namespace std;



// int main(){

//     int n = 2;

//     if(isPrime(n)) cout<<"Yes, it is";
//     else cout<<"No, its not";

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

// 1. iterative ? O(N) : O(1)
bool isPrime(int n){

    if(n < 2) return false;
    for(int i=2; i<n; i++){

        if(n % i == 0) return false;
    }

    return true;
}



// 2. till sqrt ? O(sqrt(N)) : O(1)
bool isPrime(int n){

    if(n < 2) return false;
    
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return false;
    }

    return true;
}



// 3. by recursion ? O(N) : O(N)
bool isPrime(int i, int n){

	if(i == n) return true;

	if(n < 2 || n % i == 0) return false;

	return isPrime(i+1, n);
}

int main(){

    int n = 99971;

// isPrime(2, n)
    if(isPrime(n)) cout<<"Yes, it is";
    else cout<<"No, its not";

    return 0;
}



// func call stack space
// #include<bits/stdc++.h>
// using namespace std;



// int main(){

// 	int n = 31;

// 	if(isPrime(2, n)) cout<<"YES";
// 	else cout<<"NO";

// 	return 0;
// }