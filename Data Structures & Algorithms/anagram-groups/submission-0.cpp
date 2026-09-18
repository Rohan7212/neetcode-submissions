class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(const auto& s: strs){
            string sor=s;
            sort(sor.begin(),sor.end());
            mp[sor].push_back(s);
        }
        for(auto& it: mp){
            ans.push_back(it.second);
        }
        return ans; 
    }
};
