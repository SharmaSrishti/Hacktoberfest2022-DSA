class Solution {
public:
    vector<vector<int>> v;
     
    void backtrack(vector<int>& nums,int s,int l)
    {
       if(s==l)
       {   
           v.push_back(nums); 
       }
        else
        {
            for(int i=s;i<=l;i++)
            {
                swap(nums[i],nums[s]);
               
                backtrack(nums,s+1,l);
                
                swap(nums[i],nums[s]);
           
            }
        }
      
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        
        backtrack(nums,0,n-1);
        sort(v.begin(),v.end());
        return v;
    }
};
