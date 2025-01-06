// class Solution {
// public:
//     int firstUniqChar(string s) {
//         unordered_map<int, int> mp;
//         int n = s.size();
//         for (int i = 0; i < n; i++) {
//             mp[s[i]]++;
//         }
//         int idx = -1;
//         for (int i = 0; i < n; i++) {
//             if (mp[s[i]] == 1) {
//                 idx = i;
//                 return idx;
//             }
//         }
//         return idx;
//     }
// };