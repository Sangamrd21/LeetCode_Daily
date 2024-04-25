public:
    void moveZeroes(vector<int>& nums) {
        if(size(nums)<2){
            return;
        }
        int j=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        while(j<size(nums)){
            nums[j]=0;
            j++;
        }
    }
