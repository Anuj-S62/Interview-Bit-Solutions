#include<bits/stdc++.h>
using namespace std;

void show(vector<string> vec){
    for(auto i : vec){
        cout<<i<<endl;
    }
}
vector<string> prettyJSON(string A) {
    string idn = "";
    vector<string> res;
    for(int i = 0; i < A.size(); ++ i) {
        if(A[i] == '{' || A[i] == '[' || A[i] == '}' || A[i] == ']') {
            if(A[i] == '{' || A[i] == '[') {
                res.push_back(idn + string(1, A[i]));
                idn += "\t";
            }
            else {
                string temp = string(1, A[i]);
                if(i + 1 < A.size() && A[i + 1] == ',') {
                    temp += A[i + 1];
                    i ++;
                }
                idn.erase(0, 1);
                res.push_back(idn + temp);
            }
            continue;
        }
        string s = "";
        while(A[i] != ',' && A[i] != '[' && A[i] != ']' && A[i] != '{' && A[i] != '}') {
            s += A[i ++];
        }
        if(A[i] == ',') s += A[i ++];
        i --;
        res.push_back(idn + s);
    }
    return res;
}

int main(){
    string x = "{id:100,firstName:Jack,lastName:Jones,age:12}";
    // string x = "{A:B,C:{D:E,F:{G:H,I:J}}}";
    // vector<string> vec = solve(x);
    vector<string> vec = prettyJSON(x);
    show(vec);

    return 0;
}