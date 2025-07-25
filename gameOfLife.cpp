class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();

        vector<pair<int,int>> directions = {
            {-1,-1}, {-1,0}, {-1, 1},{0,-1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}
        };

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int liveNeighbours = 0;

                for(auto [dx, dy]: directions){
                    int ni = i + dx, nj = j + dy;
                    if(ni >=0 && ni<m && nj>=0 && nj < n){
                        if(board[ni][nj]==1 || board[ni][nj]==-1){
                            ++liveNeighbours;
                        }
                    }
                }

                if(board[i][j]==1){
                    if(liveNeighbours<2 || liveNeighbours>3){
                        board[i][j] = -1;
                    }
                }
                else if(board[i][j]==0){
                    if(liveNeighbours==3){
                        board[i][j] = 2;
                    }
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]==-1) board[i][j] = 0;
                else if(board[i][j]==2) board[i][j]=1;
            }
        }

    }
};