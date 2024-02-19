#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>ans){
                ans=a[i];
            }
            else{
                ans=((ans/a[i])+1) * a[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}