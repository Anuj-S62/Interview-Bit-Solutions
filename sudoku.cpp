#include<bits/stdc++.h>
using namespace std;

void show(vector<vector<char>> vec){
    // cout<<vec.size()<<endl;
    for(int i = 0;i<9;i++){
        for(int j = 0;j<9;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

int isValidSudoku(vector<vector<char>> &A,int x,int y,char c) {
    // for row check
    for(int i = 0;i<A[x].size();i++){
        if(A[x][i]==c) return 0;
    }
    // for column check
    for(int i = 0;i<A.size();i++){
        if(A[i][y]==c) return 0;
    }
    // for block check
    int row = x/3;
    row = row * 3;
    int col = y/3;
    col = col * 3;
    // cout<<row<<" "<<col<<endl;
    for(int i = row;i<row + 3;i++){
        for(int j = col;j<col+3;j++){
            if(A[i][j]==c) return 0;
        }
    }
    return 1;


}

bool solve(vector<vector<char>> &board){
    for(int i = 0;i<9;i++){
        for(int j = 0;j<9;j++){
            if(board[i][j]=='.'){
                for(int x = 1;x<=9;x++){
                    char num = x + '0';
                    if(isValidSudoku(board,i,j,num)){
                        board[i][j] = num;
                        if(solve(board)==true) return true;
                        else board[i][j] = '.';
                    }
                }
            }
            if(board[i][j]=='.'){
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    solve(A);
}


int main(){
    // vector<vector<char>> board = {
    // {'5','3','4','6','7','8','9','1','2'},
    // {'6','7','2','1','9','5','3','4','8'},
    // {'1','9','8','3','4','2','5','6','7'},
    // {'8','5','9','7','6','1','4','2','3'},
    // {'4','2','6','8','5','3','7','9','1'},
    // {'7','','.','.','2','.','.','.','6'},
    // {'.','6','.','.','.','.','2','8','.'},
    // {'.','.','.','.','8','.','.','7','9'}
    // };
    vector<vector<char>> board = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
    };
    solveSudoku(board);
    // cout<<isValidSudoku(board,0,2,'1')<<endl;
    show(board);

    return 0;
}