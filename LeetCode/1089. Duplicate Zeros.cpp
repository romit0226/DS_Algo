class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp;
        
        for(int i=0;i<arr.size();i++){
            if(temp.size()>arr.size()){
                break;
            }else if(arr[i]==0){temp.push_back(0);
                                temp.push_back(0);
                
            }else{
                temp.push_back(arr[i]);
            }
        }for(int i=0;i<arr.size();i++){arr[i]=temp[i];
            
        }
        
    }
};
