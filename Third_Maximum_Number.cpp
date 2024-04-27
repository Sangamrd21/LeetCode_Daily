public:
    void mergeSort(vector<int>& arr, int n){
        mrgSort(arr, 0, n-1);
    }
    void mrgSort(vector<int>& arr, int s, int e){
        if(s>=e){
            return;
        }
        int m=(s+e)/2;
        mrgSort(arr, s, m);
        mrgSort(arr, m+1, e);
        combine(arr, s, m, e);
    }
    void combine(vector<int>& arr, int s, int m, int e){
        int* buffer = new int [e+1];
        
        int k=s;
        while(k<=e){
            buffer[k]=arr[k];
            k=k+1;
        }
        int i=s;
        int j=m+1;
        k=s;
        while(i<=m && j<=e){
            if(buffer[i]>=buffer[j]){
                arr[k]=buffer[i];
                i++;
            }
            else{
                arr[k]=buffer[j];
                j++;
            }
            k++;
        }
        
        while(i<=m){
            arr[k]=buffer[i];
            i++;
            k++;
        }
        while(j<=e){
            arr[k]=buffer[j];
            j++;
            k++;
        }
        delete[] buffer;
    }
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
    int thirdMax(vector<int>& nums) {
        mergeSort(nums, size(nums));
        int n=removeDuplicates(nums);
        if(n<3){
            return nums[0];
        }
        return nums[2];
    }
