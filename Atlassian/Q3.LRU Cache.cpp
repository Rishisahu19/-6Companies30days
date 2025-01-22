// class LRUCache {
// public:
//     vector<pair<int, int>> Cache;
//     int n;
//     LRUCache(int capacity) {
//         // Cache-->[Old(Least Recently Used),New(Most Recently Used)]
//         this->n = capacity;
//     }

//     int get(int key) {
//         int val = 0;
//         for (int i = 0; i < Cache.size(); i++) {
//             if (Cache[i].first == key) {
//                 val = Cache[i].second;
//                 Cache.erase(Cache.begin() + i);
//                 Cache.push_back({key, val});
//                 return val;
//             }
//         }

//         return -1;
//     }

//     void put(int key, int value) {
//         int size = Cache.size();
//         for (int i = 0; i < Cache.size(); i++) {
//             if (Cache[i].first == key) {
//                 Cache.erase(Cache.begin() + i);
//                 Cache.push_back({key, value});
//                 return;
//             }
//         }
//         if (Cache.size() == n) {
//             Cache.erase(Cache.begin());
//             Cache.push_back({key, value});
//         } else {
//             Cache.push_back({key, value});
//         }
//     }
// };

// /**
//  * Your LRUCache object will be instantiated and called as such:
//  * LRUCache* obj = new LRUCache(capacity);
//  * int param_1 = obj->get(key);
//  * obj->put(key,value);
//  */