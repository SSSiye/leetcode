class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> c;
        int left, right, max_len;
        left=right=max_len =0;

        if(s.size()<=1) return s.size();

        while(right<s.size()){
            if(c.find(s[right])==c.end()) {
                c.insert(s[right]);
                right++;
                max_len = max(max_len,right-left);
            }
            else{
                c.erase(s[left]);
                left++;
            }
        }
        return max_len;
    }
};