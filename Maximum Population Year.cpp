class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int,int> m ;
        vector<int> v;
        int n = logs.size();
        int count;
        int f;
        for(int i =0 ; i<n ; i++){
            count =0;
            for(int j =0 ; j<n ; j++){
                int k = logs[i][0];
                
                if( k>= logs[j][0] && k<logs[j][1]  ){
                    // cout<<k<<";;"<<endl;
                    
                    count++;
                }
            }
             m[logs[i][0]] =count;
        
            
        }
         
        for( auto i:m){
            v.push_back( i.second);
        // cout<<i.first<<"//"<<i.second<<endl;
        }
        int k = *max_element(v.begin(), v.end());
        // cout<<k<<"**"<<endl;
        
        
              for (auto& it : m) {
 
        // If mapped value is K,
        // then print the key value
        if (it.second == k) {
             f = it.first ;
            break;
            
        }
    }
        return f;

    }
        
};