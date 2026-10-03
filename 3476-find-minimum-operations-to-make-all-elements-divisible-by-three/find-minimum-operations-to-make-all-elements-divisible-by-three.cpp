class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int i:nums){
            count += i % 3;
            if(i % 3 == 2){
                count -= 1;
            }
        }
        return count;
    }
};