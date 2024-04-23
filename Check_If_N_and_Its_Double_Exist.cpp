public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<size(arr);i++){
            for(int j=i+1;j<size(arr);j++)
                if(arr[i]==arr[j]*2 || arr[j]==arr[i]*2){
                    return true;
                }
        }
        return false;
    }
