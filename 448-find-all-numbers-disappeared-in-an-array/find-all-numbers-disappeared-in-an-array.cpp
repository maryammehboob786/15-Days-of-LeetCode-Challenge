class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> arr(n, false);
        vector<int> missnum;

        for (int i = 0; i < n; i++) {
            int currn = nums[i] - 1;
            arr[currn] = true;
        }

        for (int i = 0; i < n; i++) {
            if (!arr[i]) {
                missnum.push_back(i + 1);
            }
        }

        return missnum;
    }
};
