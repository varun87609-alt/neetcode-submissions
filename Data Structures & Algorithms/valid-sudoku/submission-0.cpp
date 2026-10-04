class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Rows
        for(int i = 0; i < 9; i++){
            unordered_set<char> hashrow;

            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;

                if(hashrow.find(board[i][j]) != hashrow.end()){
                    return false;
                }

                hashrow.insert(board[i][j]);
            }
        }

        // Columns
        for(int i = 0; i < 9; i++){
            unordered_set<char> hashcol;

            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.') continue;

                if(hashcol.find(board[j][i]) != hashcol.end()){
                    return false;
                }

                hashcol.insert(board[j][i]);
            }
        }

        // 3x3 grids
        for(int row = 0; row < 9; row += 3){
            for(int col = 0; col < 9; col += 3){

                unordered_set<char> hash;

                for(int i = row; i < row + 3; i++){
                    for(int j = col; j < col + 3; j++){

                        if(board[i][j] == '.') continue;

                        if(hash.find(board[i][j]) != hash.end()){
                            return false;
                        }

                        hash.insert(board[i][j]);
                    }
                }
            }
        }

        return true;
    }
};