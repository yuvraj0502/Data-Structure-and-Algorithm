class Solution {
	public:
	vector<int>leaders(vector<int>&arr) {
		int n = arr.size();
		vector<int>result;
		int maxRightLeader = arr[n - 1];
		result.push_back(maxRightLeader);
		
		for (int i = n - 2; i >= 0; i--) {
			if (arr[i]>=maxRightLeader) {
				maxRightLeader = arr[i];
				result.push_back(maxRightLeader);
			}
		}
        reverse(result.begin(),result.end());
		return result;
	}
};
