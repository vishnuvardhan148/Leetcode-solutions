class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int seen=nums[0];
        for(int i=1;i<nums.size();i++){
            if(seen!=nums[i]){
                k++;
                seen=nums[i];
                nums[k]=seen;
            }
        }
        return k+1;
    }
};