class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
        for(auto& it:mp){
            heap.push({it.second,it.first});
            if(heap.size()>k){
                heap.pop();
            }
        }
        for (int i = 0; i < k; ++i) {
            ans.push_back(heap.top().second);
            heap.pop();
        }
        return ans;
    }
};
