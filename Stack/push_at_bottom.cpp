#include <bits/stdc++.h> 
using namespace std;
void solve(stack<int>& st, int x){
    if(st.empty()){
      st.push(x);
      return;
   }
   int num=st.top();
   st.pop();
   solve(st,x);
   st.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    stack<int> st;
    st.push(2);
    st.push(5);
    st.push(7);
    st.push(8);
    st.push(9);

    
    stack<int>pt=pushAtBottom(st, 99);

    printStack(pt);
    return 0;
}
