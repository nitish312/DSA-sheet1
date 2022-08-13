// iterative ? O(N) : O(1)
#include<bits/stdc++.h>
using namespace std;

float AP_Sum(float a, int d, int n){

	float sum = 0;
	while(n--){

		cout<<a<<" ";
		sum += a;
		a += d;
	}
	cout<<endl;

	cout<<"Sum = ";
	return sum;
}

int main(){

	float a = 1.5;
	int d = 3;
	int n = 5;

	cout<<AP_Sum(a, d, n);
}


// by formula ? O(1) : O(1)
#include<bits/stdc++.h>
using namespace std;

float AP_Sum(float a, int d, int n){

	float formula = (n/2.0) * (2.0*a + (n-1)*d);

	return formula;
}

int main(){

	float a = 1.5;
	int d = 3;
	int n = 5;

	cout<<AP_Sum(a, d, n);
}