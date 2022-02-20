class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        long long target_sum = 0;
        bool flag = true;
        vector<int> vect;
        
        for (int i = 0; i < nums.size()-1; ++i) {
            for (int x = i+1; x < nums.size(); ++x) {
                target_sum += nums[i] + nums[x];
                if (target_sum == target) {
                    vect.push_back(i);
                    vect.push_back(x);
                    x = nums.size();   
                    i = nums.size()-1;
                }
                if (target_sum != target) {
                    target_sum = 0;
                    continue;
                }
            }
        }
        
        return vect;
        
    }
};