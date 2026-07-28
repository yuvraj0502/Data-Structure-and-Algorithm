class Solution{
    public:
    vector<int>leaders(vector<int>&arr){
        int n=arr.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            int j;
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    break;
                }
            }
            if(j==n){
                result.push_back(arr[i]);
            }
        }
        return result;
    }
}

// Time Complexity: O(n^2)