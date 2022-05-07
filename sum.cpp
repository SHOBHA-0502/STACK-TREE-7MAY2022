#include <bits/stdc++.h>
using namespace std;

 bool subArrayExists(int arr[], int n)
    {
        bool t = true;
        int i =0;
        int j = n-1;
        sort(arr, arr + n);
        while(i<=j){
            if(arr[i]+arr[j]==0){
                cout<<arr[i]<<"/"<<arr[j]<<endl;
                return true ;
                
            }
            else if(arr[i]+arr[j]>0){
                j--;
            }
              else if(arr[i]+arr[j]<0){
                i++;
            }
        }
        
        return false;
    }
int main()
{
    int arr[] = { -1,-2,3,4,5,-6};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (subArrayExists(arr, n))
        cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    return 0;
}