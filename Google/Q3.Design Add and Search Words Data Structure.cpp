// class TrieNode {
// public:
//     char data;
//     TrieNode* children[26];
//     bool isTerminal;

//     TrieNode(char d) {
//         this->data = d;
//         for (int i = 0; i < 26; i++) {
//             children[i] = nullptr;
//         }
//         this->isTerminal = false;
//     }
// };

// class WordDictionary {
// private:
//     TrieNode* root;

//     void addWordHelper(TrieNode* node, string word) {
//         if (word.length() == 0) {
//             node->isTerminal = true;
//             return;
//         }

//         char ch = word[0];
//         int idx = ch - 'a';

//         TrieNode* child;
//         if (node->children[idx] != nullptr) {
//             child = node->children[idx];
//         } else {
//             child = new TrieNode(ch);
//             node->children[idx] = child;
//         }

//         addWordHelper(child, word.substr(1));
//     }

//     bool searchHelper(TrieNode* node, string word) {
//         if (word.length() == 0) {
//             return node->isTerminal;
//         }

//         char ch = word[0];
//         if (ch == '.') { // Handle wildcard
//             for (int i = 0; i < 26; i++) {
//                 if (node->children[i] != nullptr) {
//                     if (searchHelper(node->children[i], word.substr(1))) {
//                         return true;
//                     }
//                 }
//             }
//             return false;
//         } else {
//             int idx = ch - 'a';
//             TrieNode* child = node->children[idx];
//             if (child == nullptr) {
//                 return false;
//             }
//             return searchHelper(child, word.substr(1));
//         }
//     }

// public:
//     WordDictionary() {
//         root = new TrieNode('\0'); // Initialize root with a dummy character
//     }

//     void addWord(string word) {
//         addWordHelper(root, word);
//     }

//     bool search(string word) {
//         return searchHelper(root, word);
//     }
// };

// /**
//  * Your WordDictionary object will be instantiated and called as such:
//  * WordDictionary* obj = new WordDictionary();
//  * obj->addWord(word);
//  * bool param_2 = obj->search(word);
//  */
