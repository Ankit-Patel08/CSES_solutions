/*
link -> https://cses.fi/problemset/task/1068/

My mistake -> the input i was taken was the int but that can go beyond the int so we have to take the long l
                for this question 
*/



#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long>ans;         // instead of storing the value we can also print it directly to save the memory usage
    ans.push_back(n); 
    while(n != 1){
        if((n&1) == 0){          // bits to check the even or odd 
            n = n/2;
            ans.push_back(n);
        }else{
            n = (n*3)+1;
            ans.push_back(n);
        }
    }
    for(auto x : ans){
        cout<<x<<" ";
    }
}