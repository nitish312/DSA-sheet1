#include<iostream>
using namespace std;

// 1. Iterative ? O(N) : O(1)
bool isPrime(int n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    for(int i=2; i<n; i++)
        if(n % i == 0) 
            return false;

    return true;
}



// 2. till sqrt ? O(sqrt(N)) : O(1)
bool isPrime(int n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    for(int i=2; i*i<=n; i++)
        if(n % i == 0) 
            return false;

    return true;
}



// 3. Recursive ? O(N) : O(N)
bool isPrime(int i, int n)
{
    if(n < 2) return false;
    if(i == n) return true;
    if(n % i == 0) return false;

    return isPrime(i+1, n);
} // if(isPrime(2, n))

int main()
{
    int n = 2;
    if(isPrime(n)) cout<<n<<" is prime number";
    else cout<<n<<" is not prime number";

    return 0;
}