public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]==1){
                if(count>max){
                    max=count;
                }
            }
            else{
                count=0;
            }
        }
        return max;
    }
