#include<bits/stdc++.h>
using namespace std;



int main(){
    
    string s;
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    // int q;
    // cin>>q;

    // while(q--){
    //     char c;
    //     cin>>c;
    //     cout<<hash[c-'a']<<endl;
    // }
    for(int i=0;i<26;i++){
        if(hash[i]!=0){
        cout<<char(97+i)<<" occurs: "<<hash[i]<<" times"<<endl;
        }
    }
   return 0;
}