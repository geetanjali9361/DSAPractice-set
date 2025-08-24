class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num=1;
        int missingCount=0;
        int n=arr.size();
        int i=0;
        while(true){
            if(i<n && arr[i]==num){
                i++;
            }else{
                missingCount++;
                if(missingCount==k){
                    return num;
                }
            }
            num++;
        }
    }
};
