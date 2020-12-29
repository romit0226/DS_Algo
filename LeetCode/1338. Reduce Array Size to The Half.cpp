class Solution {
public:
    int minSetSize(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        vector<int > v;
        int temp=arr[0];
        int count=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=temp){
                v.push_back(count);
                count=1;
                temp=arr[i];
            }else{
                
                count++;
                if(i==arr.size()-1){
                    v.push_back(count);
                }
            }
        }
        
        
        int ans=0;
        sort(v.begin(),v.end());
        int index=0;
        for(int i=v.size()-1;i>=0;i--){
            index+=v[i];
            ans++;
            if(index>=arr.size()/2){
                break;
            }
        }     
        
        return ans;
        
        
    }
};
