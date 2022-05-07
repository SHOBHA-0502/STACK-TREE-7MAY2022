#include<bits/stdc++.h>
using namespace std;
bool is_balanced(string s){
    
    stack<char>st;
    bool ans = true;
    int n = s.length();
    for(int i =0; i<n ; i++){

        if(s[i]=='{'||s[i]=='['|| s[i] =='('){
        
            st.push(s[i]);
        }
        else if(s[i]==']'){
            if(!st.empty() &&st.top() == '['){
                st.pop();
            
            }
            else{
                ans = false;
                 
                return ans;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() &&st.top() == '{'){
                st.pop();
                
            }
            else{
                ans = false;
                
                return ans;
            }
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
                 
            }
            else{
                ans = false;
            
                return ans;
            }
        }
       
        
    }
    
    if(st.empty()){
    ans = true;   
    }
    else{
        ans = false;
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<is_balanced(s)<<endl;
}
   stack<char>st;
        bool ans=false ;
    
        for(int i =0 ; i<s.length();i++){
        
            else if(s[i]==')'){
                
                if(st.top()=='('&& !st.empty()){
                    st.pop();
                    cout<<"yes3"<<endl;
                }
                else{
                    
                    cout<<"yes4"<<endl;
                    return ans;
        
                }
            }
             else if(s[i]=='}'){
                 
                if(st.top()=='{'&& !st.empty()){
                    st.pop();
                    cout<<"yes6"<<endl;
                }
                else{
                    cout<<"yes7"<<endl;
                    return ans;
                    break;
                }
            }
             else if(s[i]==']'){
                 
                if(st.top()=='[' && !st.empty()){
                    cout<<"yes8"<<endl;
                    st.pop();
                }
                else{
                    cout<<"yes9"<<endl;    
                    return ans;
                    break;
                }
            }
           else{
               ans = false;
               return false;
               
           }
        }
        if(st.empty()){
            
            ans  = true;
        }
        else{
            ans=false;
        }
        return ans;
        
    }