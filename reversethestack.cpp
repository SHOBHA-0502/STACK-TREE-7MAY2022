#include<bits/stdc++.h>
using namespace std ;
void insertatbottom(stack<int>&st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
 int elem = st.top();
 st.pop();
 insertatbottom(st,ele);
 st.push(elem);
}
void reverse(stack<int>&st){
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    reverse(st);
    insertatbottom(st,ele);


}
int main(){
    int n;
    cin>>n;
    stack<int>st;

    for(int i=0; i<n ; i++){
        int a;
        cin>>a;
        st.push(a);
    }
    // reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}