#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='@'){
                c++;
            }
            if(s[i]=='*' && s[i+1]=='*'){
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}