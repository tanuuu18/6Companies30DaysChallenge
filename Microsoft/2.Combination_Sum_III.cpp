class Solution {
public:
      void findComb(int ind,int k,int sumTillNow,int target , vector<vector<int>>&ans, vector<int>&ds){
        if(sumTillNow>target)
            return;
        if(k==0){
            if(sumTillNow==target)
                ans.push_back(ds);
            return;
        }
        if(ind == 10)
            return;
        //pick up the element
        ds.push_back(ind);
        findComb(ind+1,k-1,sumTillNow + ind,target,ans,ds);
        ds.pop_back();
        findComb(ind+1,k,sumTillNow,target,ans,ds);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        findComb(1,k,0,n,ans,ds);
        return ans;
    }
};
