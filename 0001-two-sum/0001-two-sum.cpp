class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int newTarget = target-nums[i];
            if(m.find(newTarget) != m.end()){
                return {i,m[newTarget]};
            }else{
                m[nums[i]]=i;
            }
        }
        return {0,0};
    }
};