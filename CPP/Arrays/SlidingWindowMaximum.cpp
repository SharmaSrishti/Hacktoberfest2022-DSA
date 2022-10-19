class Solution {
public:
    
    vector<int> v; 
    priority_queue<pair<int,int>> q;
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        for(int i=0;i<k;i++)
        {
            q.push({nums[i],i});
        }
        v.push_back(q.top().first);
      
        for(int i=k;i<nums.size();i++)
        {   
                q.push({nums[i],i}); 

               while(!(q.top().second >(i-k)))
               {
                   cout<<"i";
                     q.pop();
                   
               }
                v.push_back(q.top().first);
              cout<< q.size();
               
        }
        return v;
    }
};
