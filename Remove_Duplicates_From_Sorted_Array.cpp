public:
    int removeDuplicates(vector<int>& nums) {
        int n=size(nums);
        int k=n;
        int l=0;
        for(int i=1;i<k;i++){
            if(nums[i-1]==nums[i]){
                removeElement(nums, i, k);
                k--;
                i--;
            }
        }
        return k;
    }
    void removeElement(vector<int>& nums, int i, int n){
        for(int j=i+1;j<n;j++){
            nums[j-1]=nums[j];
        }
    }
