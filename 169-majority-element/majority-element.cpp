class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
      int el=0;
      for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            el=nums[i];
        }else if(nums[i]==el){
            count++;
        }else{
            count--;
        }
      }
        int c1=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==el){
                c1++;
            }
        }
        if(c1>n/2){
            return el;
        }
        return 0;
      }  
    
};