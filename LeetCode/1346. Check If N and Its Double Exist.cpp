class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool x=false;
        for(int i=0;i<arr.size();i++){
            int z=2*arr[i];
            for(int j=0;j<arr.size();j++){
                if(arr[j]==z && i!=j){
                     x=true;
                    break;
                }
            }
            if(x==true){
                break;
            }
        }
        return x;
    }
};
