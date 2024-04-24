public:
    vector<int> replaceElements(vector<int>& arr) {
        if(size(arr)==1){
            arr[0]=-1;
            return arr;
        }
        int ele;
        for(int i=0;i<size(arr)-1;i++){
            ele=arr[i+1];
            for(int j=i+2;j<size(arr);j++){
                if(arr[j]>ele){
                    ele=arr[j];
                }
            }
            arr[i]=ele;
        }
        arr[size(arr)-1]=-1;
        return arr;
    }
