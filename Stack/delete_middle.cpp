#include <bits/stdc++.h> 
using namespace std;
void solve(stack<int>&st, int c, int size){
   if(c==size/2){
      st.pop();
      return;
   }
   int num=st.top();
   st.pop();
   solve(st,c+1,size);
   st.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int c=0;
   solve(inputStack,c,N);
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

    int n = st.size();
    deleteMiddle(st, n);

    printStack(st);
    return 0;
}