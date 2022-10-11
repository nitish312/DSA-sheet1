#include<iostream>
using namespace std;

// 1. if-else ? O(1) : O(1)
double greatest(double a, double b, double c)
{
    if(a > b && a > c) return a;
    else if(b > c) return b;
    else return c;
}

// 2. built-in max func ? O(1) : O(1)
double greatest(double a, double b, double c)
{
    return max(a, max(b, c));
}

int main(){

    double num1 = 21.73;
    double num2 = 3.1235;
    double num3 = 2.125;

    cout<<"Greater num = "<<greatest(num1, num2, num3);

    return 0;
}