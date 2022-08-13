// // modulus ? O(1) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int n = 341;

// 	if(n % 2 == 0) cout<<"Even";
// 	else cout<<"Odd";

// 	return 0;
// }


// // bit manip. using AND ? O(1) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int n = 232;

// 	if(n & 1) cout<<"Odd";
// 	else cout<<"Even";

// 	return 0;
// }


// // bit manip. using OR ? O(1) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int n = 21;

// 	if(n | 1 > n) cout<<"Even";
// 	else if(n ^ 1 == n - 1) cout<<"Odd";
// 	else cout<<"Zero";

// 	return 0;
// }


// bit manip. using OR ? O(1) : O(1)
#include<bits/stdc++.h>
using namespace std;

int main(){

	int n = 24;

	if(n ^ 1 == n + 1) cout<<"Even";
	else if(n ^ 1 == n - 1) cout<<"Odd";
	else cout<<"Zero";

	return 0;
}