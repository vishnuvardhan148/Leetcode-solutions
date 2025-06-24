class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(val!=nums[i]){
                ans.push_back(nums[i]);
                k++;
            }
            
        }
        nums=ans;
        return k;
    }
};