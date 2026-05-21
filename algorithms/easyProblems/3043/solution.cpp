class TrieNode {
public:
    bool endofWord;
    TrieNode* children[10];

    TrieNode()
    {
        endofWord = false;
        for (int i = 0; i < 10; i++) {
            children[i] = nullptr;
        }
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() { root = new TrieNode(); }

    void insert(string word)
    {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - '0';
            if (!node->children[index]) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->endofWord = true;
    }

    int findPre(string word){
        TrieNode * node = root;
        
        int len = 0;
        for(char c : word){
            int tmp = c - '0';
            if(node->children[tmp] == NULL) return len;
            node = node->children[tmp];
            len++;
        }
        return len;
    }
};




class Solution {
public:

    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie trie;

        for(int i = 0; i < arr1.size(); i++){
            trie.insert(to_string(arr1[i]));
        }

        int ret = 0;

        for(int i = 0; i < arr2.size(); i++){
            ret = max(ret, trie.findPre(to_string(arr2[i])));
        }

        return ret;
    }
};
