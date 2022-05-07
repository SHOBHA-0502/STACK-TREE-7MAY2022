#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>v;
    int n = 5;
    for(int i=0 ; i<n ; i++){
        string a;
        cin>>a;
        v.push_back(a);
    }

    cout<<endl;
    sort(v.begin(),v.end());
    for(int i =0 ; i<n ; i++){
        cout<<v[i]<<endl;
    }
}