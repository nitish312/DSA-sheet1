#include<iostream>
using namespace std;

// 1. compare with zero ? O(1) : O(1)
void posOrNeg(int n)
{
    if(n < 0) cout<<"Negative";
    else if(n > 0) cout<<"Positive";
    else cout<<"Zero";
}



// 2. right shift by 31 are 0/-1 ? O(1) : O(1)
void posOrNeg(int n)
{
    if(n == 0) cout<<"Zero";
    else if(n >> 31 == 0) cout<<"Positive";
    else if(n >> 31 == -1) cout<<"Negative";
}

int main(){

    int n = 254;

    posOrNeg(n);

    return 0;
}