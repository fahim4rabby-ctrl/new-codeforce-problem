#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;
int32_t main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,count=0,test=0;
        cin>>n;
        string name;
        cin>>name;
        if(n!=5)
            cout<<"NO"<<'\n';
        else{
            sort(name.begin(),name.end());
            if(name=="Timru")
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<'\n';
        }
    }
}
