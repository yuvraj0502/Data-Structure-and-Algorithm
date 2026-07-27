class Solution {
	public:
	void updateArray(vector<int>& arr) {
		// code here
		int n = arr.size();
		vector<int>result(n);
		
		for (int i = 0; i<n; i++) {
			int prev = (i == 0) ? 1 : arr[i - 1];
			int next = (i == n - 1) ? 1 : arr[i + 1];
			result[i] = prev*arr[i]*next;
		}
		arr = result;
	}
};
