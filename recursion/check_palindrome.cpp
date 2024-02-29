#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string str,int i,int j){
    if(i>j) return true;

    if(str[i]!=str[j]){
        return false;
    }
    else{
        ispalindrome(str,i+1,j-1);
    }
}
int main(){
    string name="naman";
    int n=name.length();
    if(ispalindrome(name,0,n-1)) cout<<"is palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
    return 0;
}