class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> v;
        for(int i=0;i<arr.size()-1;i++){
            int max=-1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>max)
                    max=arr[j];
            }
            v.push_back(max);
        }
        v.push_back(-1);
        return v;
    }
};
