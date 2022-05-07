class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        bool t= true;
        stack<int>st;
     int n = s.length();
     if (n%2==0){
         for(int i=0 ; i<n;i++){
             if(i<n/2){
             st.push(s[i]);
             }
             else{
                 
                 if(st.top()!=s[i]){
                     cout<<s[i]<<endl;
                     t = false;
                 }
                 st.pop();
             }
         }
         
     }else{
          for(int i=0 ; i<n;i++){
             if(i<(n+1)/2){
             st.push(s[i]);
             }
             else{
                  st.pop();
                 
                 if(st.top()!=s[i]){
                     cout<<s[i]<<endl;
                     t = false;
                 }
                
             }
         }
     }
        return t;
    }
};