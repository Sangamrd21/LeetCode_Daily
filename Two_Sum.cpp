public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        for(int i=0;i<size(nums);i++){
            for(int j=i+1;j<size(nums);j++){
                if(nums[i]+nums[j]==target){
                    arr={i, j};
                    return arr;
                }
            }
        }
    return arr;
    }
