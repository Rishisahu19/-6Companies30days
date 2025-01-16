// class Solution {
// public:
//     static bool compare(pair<int, string>& a, pair<int, string>& b) {
//         if (a.first == b.first)
//             return a.second < b.second;
//         return a.first > b.first;
//     }
//     vector<string> topKFrequent(vector<string>& words, int k) {
//         map<string, int> mp;
//         for (int i = 0; i < words.size(); i++) {
//             mp[words[i]]++;
//         }

//         vector<pair<int, string>> freqWord;
//         for (auto& it : mp) {
//             freqWord.push_back({it.second, it.first});
//         }

//         sort(freqWord.begin(), freqWord.end(), compare);

//         vector<string> ans;
//         for (int i = 0; i < k; i++) {
//             ans.push_back(freqWord[i].second);
//         }

//         return ans;
//     }
// };