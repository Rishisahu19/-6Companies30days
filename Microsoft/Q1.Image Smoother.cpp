// class Solution {
// public:
//     int solve(vector<vector<int>>& img, int i, int j) {
//         int row = img.size();
//         int col = img[i].size();
//         int c = 1;
//         int top = 0, bottom = 0, left = 0, right = 0, top_left = 0,
//             top_right = 0, bottom_left = 0, bottom_right = 0;

//         if (i - 1 >= 0 && j >= 0) {
//             top = img[i - 1][j];
//             c++;
//         }
//         if (i + 1 < row && j >= 0) {
//             bottom = img[i + 1][j];
//             c++;
//         }
//         if (i >= 0 && j - 1 >= 0) {
//             left = img[i][j - 1];
//             c++;
//         }
//         if (i >= 0 && j + 1 < col) {
//             right = img[i][j + 1];
//             c++;
//         }
//         if (i - 1 >= 0 && j - 1 >= 0) {
//             top_left = img[i - 1][j - 1];
//             c++;
//         }
//         if (i - 1 >= 0 && j + 1 < col) {
//             top_right = img[i - 1][j + 1];
//             c++;
//         }
//         if (i + 1 < row && j - 1 >= 0) {
//             bottom_left = img[i + 1][j - 1];
//             c++;
//         }
//         if (i + 1 < row && j + 1 < col) {
//             bottom_right = img[i + 1][j + 1];
//             c++;
//         }

//         int center = img[i][j];

//         int ans = floor((top + bottom + left + right + top_left + top_right +
//                          bottom_left + bottom_right + center) /
//                         c);
//         return ans;
//     }

//     vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
//         vector<int> v;
//         vector<vector<int>> ans;
//         for (int i = 0; i < img.size(); i++) {
//             for (int j = 0; j < img[i].size(); j++) {
//                 int x = solve(img, i, j);

//                 v.push_back(x);
//             }
//             ans.push_back(v);
//             v.clear();
//         }
//         return ans;
//     }
// };