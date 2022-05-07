class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum=0;
        stack<int> a;
        a.push(stoi(ops[0]));
        for(int i=1;i<ops.size();i++)
        {
            sum=0;
            if(ops[i]=="C")
            {
                a.pop();
            }
         else if(ops[i]=="D")
            {
                sum=2*a.top();
                a.push(sum);
            }
          else if(ops[i]=="+")
          {
              int t=a.top();
              sum=sum+t;
              a.pop();
              sum=sum+a.top();
              a.push(t);
              a.push(sum);
              
          }
            else
                a.push(stoi(ops[i]));
        }
        sum=0;
        while(!a.empty())
        {
            sum=sum+a.top();
            a.pop();
        }
        return sum;
        
    }
};