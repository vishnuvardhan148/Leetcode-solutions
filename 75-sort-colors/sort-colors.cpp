class Solution {
public:
    void sortColors(vector<int>& nums) {
    int a=0;
    int b=0;
    int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                a++;
            }else if(nums[i]==1){
                b++;
            }else if(nums[i]==2){
                c++;
            }
        }
        int d=0;
        for(int i=0;i<a;i++){
            nums[d]=0;
            d++;
        }
        for(int i=0;i<b;i++){
            nums[d]=1;
            d++;
        }
        for(int i=0;i<c;i++){
            nums[d]=2;
            d++;
        }
    }
};