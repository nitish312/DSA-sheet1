#include<iostream>
using namespace std;

void numberToDigit(int value){
  
    string initialDigits[20] = {"Zero", "One", "Two", "Three","Four","Five","Six","Seven","Eight","Nine","Ten",
    "Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
  
    string tensPower[10] = {"", "Ten", "Twenty", "Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    if(value<0)
    {
        cout<<" ";
        numberToDigit(-value);
    }
    else if(value>=1000)
    {
        numberToDigit(value/1000);
        cout<<" Thousand";
        if(value % 1000)
        {
            if(value % 1000 < 100)
            {
                cout << " and";
            }
            cout << " " ;
            numberToDigit(value % 1000);
        }
    }
    else if(value >= 100)
    {
        numberToDigit(value / 100);
        cout<<" Hundred";
        if(value % 100)
        {
            cout << " and ";
            numberToDigit (value % 100);
        }
    }
    else if(value >= 20)
    {
        cout << tensPower[value / 10];
        if(value % 10)
        {
            cout << " ";
            numberToDigit(value % 10);
        }
    }
    else
    {
        cout<<initialDigits[value];
    }
    return;
    
}

int main(){

    int n = 3421;

    numberToDigit(n);
    
    return 0;
}