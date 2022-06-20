#include<bits/stdc++.h>
using namespace std;

int isValidSudoku(const vector<string> &A) {
    unordered_set<char> st;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(A[i][j]=='.') continue;
            if(st.find(A[i][j])!=st.end()) return 0;
            st.insert(A[i][j]);
        }
    }
    st.clear();
    for(int i=0;i<3;i++){
        for(int j=3;j<6;j++){
            if(A[i][j]=='.') continue;
            if(st.find(A[i][j])!=st.end()) return 0;
            st.insert(A[i][j]);
        }
    }
    st.clear();
    for(int i=0;i<3;i++){
        for(int j=6;j<9;j++){
            if(A[i][j]=='.') continue;
            if(st.find(A[i][j])!=st.end()) return 0;
            st.insert(A[i][j]);
        }
    }
    st.clear();
    for(int i=3;i<6;i++){
        for(int j=0;j<3;j++){
            if(A[i][j]=='.') continue;
            if(st.find(A[i][j])!=st.end()) return 0;
            st.insert(A[i][j]);
        }
    }
    st.clear();
    for(int i=3;i<6;i++){
        for(int j=3;j<6;j++){
            if(A[i][j]=='.') continue;
            if(st.find(A[i][j])!=st.end()) return 0;
            st.insert(A[i][j]);
        }
    }
    st.clear();
    for(int i=3;i<6;i++){
        for(int j=6;j<9;j++){
            if(A[i][j]=='.') continue;
            if(st.find(A[i][j])!=st.end()) return 0;
            st.insert(A[i][j]);
        }
    }
    st.clear();
    for(int i=6;i<9;i++){
        for(int j=0;j<3;j++){
            if(A[i][j]=='.') continue;
            if(st.find(A[i][j])!=st.end()) return 0;
            st.insert(A[i][j]);
        }
    }
    st.clear();
    for(int i=6;i<9;i++){
        for(int j=3;j<6;j++){
            if(A[i][j]=='.') continue;
            if(st.find(A[i][j])!=st.end()) return 0;
            st.insert(A[i][j]);
        }
    }
    st.clear();
    for(int i=6;i<9;i++){
        for(int j=6;j<9;j++){
            if(A[i][j]=='.') continue;
            if(st.find(A[i][j])!=st.end()) return 0;
            st.insert(A[i][j]);
        }
    }
    st.clear();
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(st.find(A[j][i])!=st.end()) return 0;
            if(A[j][i]!='.') st.insert(A[j][i]);
        }
        st.clear();
    }
    st.clear();
     for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(st.find(A[i][j])!=st.end()) return 0;
            if(A[i][j]!='.')  st.insert(A[i][j]);
        }
        st.clear();
    }
    return 1;

}


int main(){
    vector<string> st = { "..5.....6", "....14...", ".........", ".....92..", "5....2...", ".......3.", "...54....", "3.....42.", "...27.6.." };
    cout<<isValidSudoku(st)<<endl;


    return 0;
}