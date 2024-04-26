public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j=0;
        int temp;
        for(int i=0;i<size(nums);i++){
            if(nums[i]%2==0 && j<size(nums)){
                temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
            }
        }
        return nums;
    }
