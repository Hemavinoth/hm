class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = INT_MAX;
        if (strs.size() <= 0) {
            return "";
        }
        if (strs.size() == 1) {
            return strs[0];
        }
        // get the min length
        for (int i = 0; i < strs.size(); i ++) {
            n = strs[i].length() < n ? strs[i].length() : n ;
        }
        for (int i = 0; i < n; i ++) { // check each character
            for (int j = 1; j < strs.size(); j ++) {
                if (strs[j][i] != strs[j - 1][i]) { // we find a mis-match
                    return strs[0].substr(0, i);
                }
            }
        }
        // prefix is n-length
        return strs[0].substr(0, n);
    }
};
