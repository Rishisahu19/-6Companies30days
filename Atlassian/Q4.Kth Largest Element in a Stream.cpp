// class KthLargest {
// public:
//     int k;
//     vector<int> nums;
//     KthLargest(int k, vector<int>& nums) {
//         this->k = k;
//         this->nums = nums;
//     }

//     int add(int val) {
//         this->nums.push_back(val);
//         sort(nums.rbegin(), nums.rend());
//         return nums[k - 1];
//     }
// };

// /**
//  * Your KthLargest object will be instantiated and called as such:
//  * KthLargest* obj = new KthLargest(k, nums);
//  * int param_1 = obj->add(val);
//  */