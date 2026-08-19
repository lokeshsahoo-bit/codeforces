#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    int cnt=1;
    int m=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            cnt+=1;
            if(cnt>m) m=cnt;
        }
        else cnt=1;
    }
    cout<<m;
    
    return 0;
}