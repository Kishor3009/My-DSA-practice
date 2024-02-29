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
        int c=0;
        for(int i=0;i<n;i++){
            c=c+a[i];
        }
        int m=c%3;
        if(m==0) cout<<0<<endl;
        else if(m==2) cout<<1<<endl;
        else if(m==1){
            int k=0;
            for(int i=0;i<n;i++){
                if(a[i]%3==1){
                    a[i]=0;
                    break;
                }
            }
            for(int i=0;i<n;i++) {
                k+=a[i];
            }
            if(k%3==0) cout<<1<<endl;
            else cout<<2<<endl;
        }

    }
    return 0;
}