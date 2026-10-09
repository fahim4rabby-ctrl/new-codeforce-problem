#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int32_t main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=0,b=0,a_indx,b_indx;
        for(int i=0;i<n;i++){
            if(arr[0]==arr[i]){
                a++;
                a_indx=i;
            }else{
                b++;
                b_indx=i;
            }
        }
        if(a<b)
            cout<<a_indx+1<<'\n';
        else
            cout<<b_indx+1<<'\n';
    }
}
