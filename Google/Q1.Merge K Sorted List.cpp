// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& list) {
//         vector<int> v;
//         for (int i = 0; i < list.size(); i++) {
//             ListNode* temp = list[i];
//             while (temp != NULL) {
//                 int val = temp->val;
//                 v.push_back(val);
//                 temp = temp->next;
//             }
//         }

//         ListNode* dummy = new ListNode(-1);
//         ListNode* temp = dummy;

//         sort(v.begin(), v.end());

//         for (int i = 0; i < v.size(); i++) {
//             dummy->next = new ListNode(v[i]);
//             dummy = dummy->next;
//         }
//         return temp->next;
//     }
// };