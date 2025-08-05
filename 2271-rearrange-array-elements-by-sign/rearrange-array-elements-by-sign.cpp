class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>temp=nums;
        int n=nums.size();
        int p1=0;
        int n1=1;
        for(int i=0;i<n;i++){
            if(temp[i]>=0){
                nums[p1]=temp[i];
                p1+=2;
            }else{
                nums[n1]=temp[i];
                n1+=2;
            }

        }
       
        return nums;
    }
};