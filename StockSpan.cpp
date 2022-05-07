#include <iostream>
#include<stack>
using namespace std;

int* stockSpan(int *price, int size)  {
    int*f  = new int[size];
    
    int cum = -3;
    for(int i =0 ; i<size; i++){
        if(price[i]>cum){
            cout<<"yes"<<endl;
            f[i]=i+1;
            cout<<";;"<<endl;
            cum = price[i];
        }
        else{
            cout<<"yes1"<<endl;
            f[i]= '1'-'0';
            cum = price[i];
        }
    }
        return f;
    
}
    

int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}