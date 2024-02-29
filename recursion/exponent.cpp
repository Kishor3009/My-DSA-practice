#include<bits/stdc++.h>
using namespace std;
int powerfun(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans= powerfun(a,b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<powerfun(a,b);
    return 0;
}