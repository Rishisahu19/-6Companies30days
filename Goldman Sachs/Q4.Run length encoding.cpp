// class Solution {
//   public:
//     string encode(string s) {
//         // code here
//         int n=s.size();
//         string st="";
//         int cnt=1;
//         for(int i=0;i<n;i++){
//             if(s[i]==s[i+1]){
//                 cnt+=1;
//             }
//             else{
//                 st+=s[i];
//                 st+=to_string(cnt);
//                 cnt=1;
//             }
//         }
//         return st;
//     }
// };