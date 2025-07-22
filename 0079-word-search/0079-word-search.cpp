class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        unordered_set<char> b_alpha;
        unordered_set<char> w_alpha;

        for(const auto& row : board){
            for(int x: row){
                b_alpha.insert(x);
            }
        }
        for(char x : word){
            w_alpha.insert(x);
        }

        for(int w: word){
            if(b_alpha.find(w)==b_alpha.end()) return false;
        }

        int w =0;

        for(int m=0; m<board.size(); m++){
            for(int n=0; n<board[m].size(); n++){
                if(board[m][n] == word[0]) {
                    if(search(board, word, m, n, w)) return true;
                }
            }
        }
        return false;
    }
    bool search(vector<vector<char>>& board, string word, int m ,int n, int w){
        if(w==word.size()) return true;
        if(m<0 || m>=board.size() || n>=board[0].size()|| board[m][n]!= word[w]) return false;

            char temp = board[m][n];
            board[m][n] = '$';

            bool found = search(board, word, m+1, n, w+1)||
            search(board, word, m-1, n, w+1)||
            search(board, word, m, n+1, w+1)||
            search(board, word, m, n-1, w+1);
            board[m][n] = temp;
            return found;
    }
};