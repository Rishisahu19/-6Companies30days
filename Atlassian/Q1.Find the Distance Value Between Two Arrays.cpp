// class Solution {
// public:
//     int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
//         int c = 0;
//         int ans = 0;
//         int n = arr1.size();
//         int m = arr2.size();
//         for (int i = 0; i < n; i++) {
//             c = 0;
//             for (int j = 0; j < m; j++) {
//                 if (abs(arr1[i] - arr2[j]) > d) {
//                     c += 1;
//                     if (c == m) {
//                         ans += 1;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };