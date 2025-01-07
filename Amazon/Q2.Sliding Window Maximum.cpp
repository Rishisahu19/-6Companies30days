// class Solution {
//   public:
//     // Function to find maximum of each subarray of size k.
//     vector<int> maxOfSubarrays(vector<int>& arr, int k) {
//         // code here
//         list<int> L;
//         int i = 0, j = 0;
//         vector<int> ans;
//         int n = arr.size();
//         while (j < n) {
//             while (!L.empty() && L.back() < arr[j]) {
//                 L.pop_back();
//             }
//             L.push_back(arr[j]);
//             if (j - i + 1 < k) {
//                 j++;
//             } else if (j - i + 1 == k) {
//                 {
//                     ans.push_back(L.front());
//                 }
//                 if (L.front() == arr[i]) {
//                     L.pop_front();
//                 }
//                 i++;
//                 j++;
//             }
//         }
//         return ans;
        
//     }
// };