#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>nums(n-1);
    long long sum = 0;
    for(int i = 0; i<n-1; i++){
        long long a;
        cin>>a;
        nums[i] = a;
        sum = sum+a;
    }

    long long actual_sum = 1LL*n*(n+1)/2;    // here we have to take care of the long long we can't do this even  1LL*(n*(n+1)/2) 
    cout<<actual_sum-sum;                    // bcz it is first multiplying which go out of bound of integer range 
}