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
        for(int i=0;i<n;i++){
            if(a[i]<0) a[i]=-1*a[i];
            else continue;
        }
        int c=0;
        for(int i=0;i<n;i++){
            c=c+a[i];
        }
        cout<<c<<endl;
     }
    return 0;
}