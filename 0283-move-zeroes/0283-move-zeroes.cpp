class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int writer = 0;
        int scanner = 0;
        while(scanner<n){
            if(nums[scanner]!=0){
                if(scanner==writer){
                    scanner++;
                    writer++;
                    continue;
                }
                nums[writer]=nums[scanner];
                writer++;
                scanner++;
            }else{
                scanner++;
            }
        }
        while(writer<n){
            nums[writer]=0;
            writer++;
        }
        
    }
};