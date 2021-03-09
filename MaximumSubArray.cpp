#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0;i<n;i++){
        int current = 0;
        for (int j = i;j<n;j++){
            current += arr[j];
            cout<<current<<" ";
        }
        
    }
    return 0;
}