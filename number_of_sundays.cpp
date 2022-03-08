#include<bits/stdc++.h>
using namespace std;

int solve(string A, int B) {
    if(A=="Sunday"){
        if(B%7>0) return B/7 + 1;
        return B/7;
    }
    else if(A=="Saturday"){
        if(B%7>1) return B/7 + 1;
        return B/7;
    }
    else if(A=="Friday"){
        if(B%7>2) return B/7 + 1;
        return B/7;
    }
    else if(A=="Thursday"){
        if(B%7>3) return B/7 + 1;
        return B/7;
    }
    else if(A=="Wednesday"){
        if(B%7>4) return B/7 + 1;
        return B/7;
    }
    else if(A=="Tuesday"){
        if(B%7>5) return B/7 + 1;
        return B/7;
    }
    else if(A=="Monday"){
        if(B%7>6) return B/7 + 1;
        return B/7;
    }
    return 0;
}


int main(){
    

    return 0;
}