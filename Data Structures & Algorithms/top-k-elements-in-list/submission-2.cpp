class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;

        vector<pair<int,int>> y;

        for(int x : nums){
            cnt[x]++;
        }

        for(auto x : cnt){
            y.push_back({x.second, x.first});
        }

        sort(y.rbegin(), y.rend());

        vector<int> ans;

        for(int i = 0; i < k; i++){
            ans.push_back(y[i].second);
        }

        return ans;
    }
};