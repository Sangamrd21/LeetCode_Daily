public:
    int removeDuplicates(vector<int>& nums) {
        int writePointer=1;
        for(int readPointer=1;readPointer<size(nums);readPointer++){
            if(nums[readPointer-1]!=nums[readPointer]){
                nums[writePointer]=nums[readPointer];
                writePointer++;
            }
        }
        return writePointer;
    }
