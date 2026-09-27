class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int real = 0;
        int k=1;
        for(int comparisonPointer=1;comparisonPointer<nums.size();comparisonPointer++){
            if(nums[real]!=nums[comparisonPointer]){
                nums[real+1]=nums[comparisonPointer];
                real++;
                k++;
            }
        }
        return k;

    }
};