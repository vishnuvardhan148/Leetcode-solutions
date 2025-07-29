class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int num=nums[i];
            int more=target-num;
            if(mp.find(more)!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[more]);
                return ans;
            }
            mp[num]=i;
        }
        return ans;
    }
};