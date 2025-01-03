// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<bool> v(n, false);
//         for (int i = 0; i < n; i++) {
//             if (nums[i] % 2 != 0) {
//                 v[i] = true;
//             } else {
//                 v[i] = false;
//             }
//         }
//         vector<int> Pre(n, 0);
//         if (v[0]) {
//             Pre[0] = 1;
//         } else {
//             Pre[0] = 0;
//         }
//         for (int i = 1; i < n; i++) {
//             if (v[i]) {
//                 Pre[i] = Pre[i - 1] + 1;
//             } else {
//                 Pre[i] = Pre[i - 1];
//             }
//         }
//         int cnt = 0;
//         unordered_map<int, int> mp;
//         for (int i = 0; i < n; i++) {
//             if (Pre[i] == k) {
//                 cnt += 1;
//             }
//             if (mp.find(Pre[i] - k) != mp.end()) {
//                 cnt += mp[Pre[i] - k];
//             }
//             mp[Pre[i]]++;
//         }
//         return cnt;
//     }
// };
