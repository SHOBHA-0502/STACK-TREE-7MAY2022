class Solution {
public:
    string removeDigit(string number, char digit) {
    
//        priority_queue<long long int> p;
//        long long int oc= count(number.begin(), number.end(), digit);
//         if(oc ==0 ){
//             return number;
//         }
//         if(oc ==1){
//            long long  int k = number.find(digit);
//             string s = number;
//             s.erase(s.begin() + k);
//             return s;
            
//         }
//       while(oc--){
//           for(int i =0 ; i<number.length();i++){
//               if(number[i]==digit){
//                   string s = number;
//                   s.erase(s.begin() + i);
//                  long long  k = stoi(s);
//                   p.push(k);
//               }
//           }
//       }
//     int z = p.top();
//         return  to_string(z);
     
        vector<string> ans;
        for(int i =0 ; i<number.length();i++){
            if(number[i]== digit){
                string temp = number;
                temp.erase(temp.begin()+i);
                ans.push_back(temp);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i =0 ; i<ans.size();i++){
            // cout<<ans[i]<<"//"<<endl;
        }
        string res = ans[ans.size()-1];
        return res;
        
    }
};b