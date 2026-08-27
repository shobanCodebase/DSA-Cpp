class TrieNode {
public:
    TrieNode* children[26];
    bool isEndOfWord;
    
    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

class Trie {
private:
    TrieNode* root;
    
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;
        
        for (char c : word) {
            int index = c - 'a';
            if (curr->children[index] == nullptr) {
                curr->children[index] = new TrieNode();
            }
            curr = curr->children[index];
        }
        
        curr->isEndOfWord = true;
    }
    
    bool search(string word) {
        TrieNode* node = findNode(word);
        return node != nullptr && node->isEndOfWord;
    }
    
    bool startsWith(string prefix) {
        return findNode(prefix) != nullptr;
    }
    
private:
    TrieNode* findNode(const string& s) {
        TrieNode* curr = root;
        
        for (char c : s) {
            int index = c - 'a';
            if (curr->children[index] == nullptr) {
                return nullptr;
            }
            curr = curr->children[index];
        }
        
        return curr;
    }
};