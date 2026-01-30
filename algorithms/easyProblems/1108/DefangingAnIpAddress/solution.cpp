class Solution {
public:
    string defangIPaddr(string address) {
        string ret;

        for(int i = 0; i < address.length(); i++){
            if(address[i] == '.') ret.append("[.]");
            else ret.push_back(address[i]);
        }
        return ret;
    }
};
