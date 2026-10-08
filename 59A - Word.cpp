#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int32_t main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string name;
    cin>>name;
    int up=0;
    int down=0;
    int length=name.length();
    for(int i=0;i<length;i++){
        if(isupper(name[i]))
            up++;
        else
            down++;
    }
    if(up>down){
        for(char &c:name){
            c=toupper(c);
       }
    }else{
        for(char &c:name){
            c=tolower(c);
        }
    }
    cout<<name<<'\n';
}
