class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int pos[n/2];
        int neg[n/2];
        int p1=0;
        int n1=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                pos[p1]=nums[i];
                p1++;
            }else{
                neg[n1]=nums[i];
                n1++;
            }
        }
        for(int i=0;i<n/2;i++){
            nums[i*2]=pos[i];
            nums[i*2+1]=neg[i];
        }
        return nums;
    }
};