#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"it is a prime no"<<endl;
    }
    else{
        cout<<"Not a prime no "<<endl;
    }
    return 0;
}