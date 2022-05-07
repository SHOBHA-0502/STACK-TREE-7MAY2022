#include <iostream>
#include <string>
using namespace std;
#include<stack>
bool checkRedundantBrackets(string expression) {
    int count =0;
    bool ans = false;
    int n = expression.length();
    stack<char>st;
    for(int i =0 ; i<n ; i++){
        if(expression[i]==')'){
            while(st.top()!='('){
                cout<<st.top()<<"//"<<endl;
                st.pop();
                
                count++;
            }
            if(count >1){
                cout<<st.top()<<"||"<<endl;
                st.pop();
                count=0;
            }
            else{
                ans = true;
            }
    
        }
        else{
            st.push(expression[i]);
            cout<<st.top()<<">>"<<endl;
        }
    }
    return ans;
	
}

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}