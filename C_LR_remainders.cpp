#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string s;
        cin>>s;
        
        long long sl=0, bi=0, ai=0, al=n-1;
        while (s.length()!=sl)
        {   
            int k=1;
            for(int i=0;i<n;i++){
                k=(k*a[i])%m;
            }
            cout<<k<<" ";
            if(s[sl]=='L'){
                a[ai]=1;
                ai++;
                sl++;
            }
            else{
                a[al]=1;
                al--;
                sl++;
                n--; // Update the length of the array a
            }
        }
        cout<<endl;  

    }
    
    return 0;
}
