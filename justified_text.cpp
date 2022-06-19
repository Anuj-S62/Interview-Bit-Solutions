#include<bits/stdc++.h>
using namespace std;

void show(vector<string> vec){
    for(auto i:vec){
        cout<<i<<endl;
        cout<<i.length()<<endl;
    }
}

string change(vector<string> vec,int b){
    string ans;
    if(vec.size()-1){int count = 0;
    for(int i = 0;i<vec.size();i++){
        count += vec[i].length();
    }
    int x = b-count;
    int rem = 0;
    rem = x%(vec.size()-1);
    x = x/(vec.size()-1);
    int y = vec.size()-1;
    for(auto i : vec){
        ans = ans + i;
        if(rem){
            ans.push_back(' ');
            rem--;
        }
        if(y){
            for(int j = 0;j<x;j++){
                ans.push_back(' ');
            }
            y--;
        }
    }
    }
    else{
        ans = ans + vec[0];
        for(int i = 0;i<(b-vec[0].size());i++){
            ans.push_back(' ');
        }
    }
    return ans;
}

string last_line(vector<string> vec,int b){
    string res;
    for(auto i:vec){
        res = res + i;
        res = res + ' ';

    }
    res.pop_back();
    int x = res.size();
    for (int i = 0;i<b-x;i++){
        res.push_back(' ');
    }
    return res;
}

vector<string> fullJustify2(vector<string> &A, int B) {
    vector<string> result;
    short int k = 0, ls = 0;
    for (short int i = 0; i<A.size(); i+=k)
    {
        /*string line = "";
        short int start = i;
        bool flag = false;*/
        
        k = ls = 0;
        while (i+k<A.size() && ls + k + A[i+k].size() <= B)
        {
            ls += A[i+k].size();
            ++k;
        }
        string tmp = A[i];
        for (int j = 0; j < k - 1; j++) {
            if (i + k >= A.size()) tmp += " ";
            else tmp += string((B - ls) / (k - 1) + (j < (B - ls) % (k - 1)), ' ');
            tmp += A[i+j+1];
        }
        tmp += string(B - tmp.size(), ' ');

        result.emplace_back(tmp);
    }
    return result;
}

vector<string> fullJustify(vector<string> &A, int B) {
    vector<string> ans;
    vector<string> temp;
    if(A.size()==1 && A[0]==""){
        cout<<" helo "<<endl;
        vector<string> ans2 = fullJustify2(A,B);
        return ans2;
    }
    
    int count = 0;
    for(int i = 0;i<A.size();i++){
        if(count==0){
            temp.push_back(A[i]);
            count += A[i].length();
        }
        else if(count!=0){
            if(count+A[i].length()+1<=B){
                temp.push_back(A[i]);
                count+= A[i].length()+1;
            }
            else{
                ans.push_back(change(temp,B));
                temp.clear();
                count = 0;
                temp.push_back(A[i]);
                count += A[i].length();
            }
        }
    }
    ans.push_back(last_line(temp,B));
    return ans;
}



int main(){
    // vector<string> vec1 = {"aaaa"};
    // vector<string> vec2 = {"aaaga","bfbb","cd"};
    // cout<<change(vec1,9)<<endl;
    // cout<<change(vec2,14)<<endl;
    // vector<string> vec = { "Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do" };
    vector<string> vec = {""};
    // cout<<change(vec,10)<<endl;
    // vector<string> vec = {"This", "is", "an", "example", "of", "text", "justification."};
    vector<string> ans = fullJustify(vec,10);
    show(ans);


    return 0;
}