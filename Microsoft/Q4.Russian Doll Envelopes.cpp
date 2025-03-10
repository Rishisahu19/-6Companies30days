
// class Solution {
// public:
//     static bool comp(vector<int>& a, vector<int>& b) {
//         if (a[0] == b[0]) {
//             return a[1] > b[1];
//         }
//         return a[0] < b[0];
//     }
//     int solve_NlogN(vector<vector<int>>& arr) {
//         sort(arr.begin(), arr.end(), comp);
//         // Run LIS on height.
//         if (arr.size() == 0) {
//             return 0;
//         }
//         vector<int> ans;
//         // Include
//         ans.push_back(arr[0][1]);
//         for (int i = 1; i < arr.size(); i++) {
//             if (arr[i][1] > ans.back()) {
//                 ans.push_back(arr[i][1]);
//             } else {
//                 // Overwrite
//                 // Find index of just Large Element
//                 int index = lower_bound(ans.begin(), ans.end(), arr[i][1]) -
//                             ans.begin();
//                 ans[index] = arr[i][1];
//             }
//         }
//         return ans.size();
//     }

//     int maxEnvelopes(vector<vector<int>>& envelopes) {

//         int ans = solve_NlogN(envelopes);
//         return ans;
//     }
// };