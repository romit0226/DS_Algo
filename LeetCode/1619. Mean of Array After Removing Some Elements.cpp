class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        double sum=0;
        int length=arr.size();
        int x=length/20;
        sort(arr.begin(),arr.end());
        for(int i=x;i<arr.size()-x;i++){
            sum+=arr[i];
        }
        double size=arr.size()-2*x;
        return sum/size;
        
    }
};
