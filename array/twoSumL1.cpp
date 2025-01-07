class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map.count(target - nums[i]) == 1){
                return {i , map[target - nums[i]]};
            }
            else map[nums[i]] = i;
        }
        return {};
    }
};
