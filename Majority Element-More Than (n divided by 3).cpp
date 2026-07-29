class Solution{
    public:
    vector<int>findMajority(vector<int>&arr){
        int n=arr.size();
        vector<int>result;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(if.second>n/3){
                result.push_back(it.first);
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};