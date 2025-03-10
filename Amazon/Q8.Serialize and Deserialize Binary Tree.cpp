// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Codec {
// public:
//     // Encodes a tree to a single string.
//     string serialize(TreeNode* root) {
//         if (root == NULL) {
//             return "";
//         }
//         string s = "";
//         queue<TreeNode*> q;
//         q.push(root);
//         while (!q.empty()) {
//             auto f = q.front();
//             q.pop();
//             if (f == NULL) {
//                 s = s + "#,";
//             } else {
//                 s += to_string(f->val);
//                 s += ',';
//                 q.push(f->left);
//                 q.push(f->right);
//             }
//         }
//         cout << s;
//         return s;
//     }

//     // Decodes your encoded data to tree.
//     TreeNode* deserialize(string data) {
//         if (data.size() == 0) {
//             return NULL;
//         }
//         stringstream s(data);
//         string str;
//         getline(s, str, ',');
//         queue<TreeNode*> q;
//         TreeNode* root = new TreeNode(stoi(str));
//         q.push(root);
//         while (!q.empty()) {
//             auto f = q.front();
//             q.pop();
//             getline(s, str, ',');
//             if (str == "#") {
//                 f->left = NULL;
//             } else {
//                 TreeNode* leftNode = new TreeNode(stoi(str));
//                 f->left = leftNode;
//                 q.push(leftNode);
//             }

//             getline(s, str, ',');
//             if (str == "#") {
//                 f->right = NULL;
//             } else {
//                 TreeNode* rightNode = new TreeNode(stoi(str));
//                 f->right = rightNode;
//                 q.push(rightNode);
//             }
//         }
//         return root;
//     }
// };

// // Your Codec object will be instantiated and called as such:
// // Codec ser, deser;
// // TreeNode* ans = deser.deserialize(ser.serialize(root));
