#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;// 3+2+1 want to reverse this in increasing order 
    cin>>s;
    vector<char>ss;
    for(int i=0;i<s.size();){
        ss.push_back(s[i]);
        i=i+2;
    }
    sort(ss.begin(),ss.end());
    for(int i=0;i<ss.size();i++){
        if(i==ss.size()-1) cout<<ss[i];
        else cout<<ss[i]<<"+";
    }
   
    return 0;
}
