//  vector<int> findTwoElement(vector<int>& arr) {
//         // code here
//         sort(arr.begin(),arr.end());
//         vector<int>v;
//         unordered_map<int,int>mp;
//         int n=arr.size();
//         for(int i=0;i<n;i++)
//         {
//             mp[arr[i]]++;
//         }
//         int x=0;
//         int y=0;
//         for(auto i:mp)
//         {
//             if(i.second>=2)
//             {
//                 x=i.first;
//                 break;
//             }
//         }
//         for(int i=1;i<=n;i++)
//         {
//             if(mp.find(i)==mp.end())
//             {
//                 y=i;
//                 break;
//             }
//         }
//         v.push_back(x);
//         v.push_back(y);
//         return v;
//     }