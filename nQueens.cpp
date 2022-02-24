#include<bits/stdc++.h>
using namespace std;

void show(vector<vector<string>> res){
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<endl;
        }
        cout<<"---------------------"<<endl;
    }
}

bool isSafe(vector<string> &board,int row,int col){
    int n = board.size()-1;
    // check for row
    for(int i=0;i<board[0].size();i++){
        if(board[row][i]!='.') return false;
    }

    // check for column
    for(int i=0;i<board.size();i++){
        if(board[i][col]!='.') return false;
    }

    // check for first diagonal
    int x = row;
    int y = col;
    
    while(x>=0 && y>=0){
        if(board[x][y]!='.') return false;
        x--;
        y--;
    }
    x = row;
    y = col;
    while(x<=n && y<=n){
        if(board[x][y]!='.') return false;
        x++;
        y++;
    }

    //  check for second diagonal
    x = row;
    y = col;
    
    while(x>=0 && y<=n){
        if(board[x][y]!='.') return false;
        x--;
        y++;
    }
    x = row;
    y = col;
    while(x<=n && y>=0){
        if(board[x][y]!='.') return false;
        x++;
        y--;
    }
    return true;
}

void position(vector<string> &board,int row,int n,vector<vector<string>> &res,int queen){
    if(row == n)return;

    for(int col=0;col<n;col++){
        if(isSafe(board,row,col)){
            board[row][col]='Q';
            queen++;
            // cout<<row<<" "<<col<<endl;
            position(board,row+1,n,res,queen);
            if(queen==n)res.push_back(board);
            board[row][col]='.';
            queen--;
        }
    }
    return ;
}

vector<vector<string> > solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<string>> sol;
    vector<string> board;
    string s="";
    for(int i=0;i<A;i++){
        s=s+'.';
    }
    for(int i=0;i<A;i++){
        board.push_back(s);
    }
    position(board,0,A,sol,0);
    return sol;
}


int main(){
    vector<vector<string>> res = solveNQueens(4);
    show(res);

    return 0;
}