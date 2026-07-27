class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        multimap<int, char> r;
        string ss = "";

for (char ch : s) {
    mp[ch]++;
}

for (auto x : mp) {
    r.insert({x.second, x.first});
}

for (auto it = r.rbegin(); it != r.rend(); it++) {

    for (int i = 0; i < it->first; i++) {
        ss += it->second;
    }
}

return ss;


    }
};