class Solution {
public:
    bool isPalindrome(string s) {
        string palindrome;
        for( char c : s ){
            if(isalnum(c)) palindrome += tolower(c);
        }
        for(int i=0; i< palindrome.size()-1/2; i++){
            if(palindrome[i] != palindrome[palindrome.size()-1-i]) {
                return false;
            }
        }
        return true;
    }
};