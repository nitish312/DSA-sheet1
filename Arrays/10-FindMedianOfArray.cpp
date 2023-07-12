// sort & logic ? O(NlogN) : O(1)
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec, int n){

    for(int i=0; i<n; i++) cout<<vec[i]<<" ";
    cout<<endl;
}

double getMedian(vector<int> vec, int n){

    sort(vec.begin(), vec.end());

    if(!(n&1)){ // even no. of elems
        int ind1 = n/2;
        int ind2 = ind1 - 1;
        double avg = (double) (vec[ind1] + vec[ind2]) / 2;
        return avg;
    }
    else{ // odd no. of elems
        return vec[n/2];
    }
}

int main(){

    vector<int> vec = {1, 2, 3, 4};
    // {1,3,0,0,2,0,3,0}; {10,20,30,40,50,60,70,80}
    // {65,23,7,43,123,657,45,12}; 

    int n = vec.size();

    printVec(vec, n);

    cout<<"Median = "<<getMedian(vec, n);

    return 0;
}
