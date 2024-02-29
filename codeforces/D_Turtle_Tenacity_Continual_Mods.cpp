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
        int k=a[0];
        for(int i=1;i<n;i++){
            k=k%a[i];
        }
        
        if(k!=0){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0;i<n/2;i++){
                swap(a[i],a[n-1-i]);
            }
            int z=a[0];
            for(int i=1;i<n;i++){
                if(z==0){
                    break;
                }
            z=z%a[i];
            }
            if(z!=0){
                cout<<"YES"<<endl;
            }
            else  cout<<"NO"<<endl;
            }
    }
    return 0;
}
