class Solution {
	public:
	void rearrange(vector<int>&arr) {
		vector<int>positiveArr, negativeArr;
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] >= 0) {
				positiveArr.push_back(arr[i]);
			} else {
				negativeArr.push_back(arr[i]);
			}
		}
		int positiveIndex = 0, negativeIndex = 0, index = 0;
		while (positiveIndex<positiveArr.size() && negativeIndex<negativeArr.size()) {
			if (index%2 == 0) {
				arr[index] = positiveArr[positiveIndex];
				index++;
				positiveIndex++;
			} else {
				arr[index] = negativeArr[negativeIndex];
				index++;
				negativeIndex++;
			}
		}
		while (positiveIndex<positiveArr.size()) {
			arr[index] = positiveArr[positiveIndex];
			index++;
			positiveIndex++;
		}
		while (negativeIndex<negativeArr.size()) {
			arr[index] = negativeArr[negativeIndex];
			index++;
			negativeIndex++;
		}
	}
};
