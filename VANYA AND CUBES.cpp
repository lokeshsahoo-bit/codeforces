#include<bits/stdc++.h>
using namespace std;
int sum(int n){
        return n*(n+1)/2;
    }
int main(){
    
    int n;
    cin>>n;
    int lev=0;
    while(true){
        n-=sum(lev+1);
        if(n>=0) lev++;
        else break;
    }
    cout<<lev;
    
    
    return 0;
}