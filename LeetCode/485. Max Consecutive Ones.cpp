class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       vector<int> v;
        int count=0; 
        int max=0;
        if(nums.size()==1 && nums[0]==1){
            max=1;
        }else{
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
               
                if(count>max){
                    max=count;
                }
                count=0;
               
            }else{
                count++;
                
                 if(i==nums.size()-1 && count>max){
                max=count;
                     continue;
            }
            }
            
         
            
        }
        }
       
        return max;
        
        
    }
};
