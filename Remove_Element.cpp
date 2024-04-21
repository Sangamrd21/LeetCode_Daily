public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int i=0;
        int l=0;
        int n=size(nums);
        while(i<n-l){
            if(nums[i]==val){
                for(int j=i+1;j<n;j++){
                    nums[j-1]=nums[j];
                }
                l++;
            }
            else{
                k++; i++;
            }
        }
        return k;
    }
