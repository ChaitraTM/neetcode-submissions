class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> x(nums.begin(), nums.end());

        int longest = 0;

        for (int num : x) {

            if (x.find(num - 1) == x.end()) {

                int cnt = 1;

                while (x.find(num + cnt) != x.end()) {
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};