#include<bits/stdc++.h>
using namespace std;

bool isPalin(string s,int x,int y){
        for(int i = x;i<y/2;i++){
            if(s[i]!=s[y-i]) return false;
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        string ans;
        int max_len = 1;
        int j = 0;
        for(int i = 1;i<s.length();i++){
            string temp;
            temp.push_back(s[i]);
            // max_len = 1;
            j = i+max_len;
            while(j<s.length()){
                    temp.push_back(s[j]);
                    // cout<<"h"<<endl;
                if((j-i)>max_len and isPalin(s,i,j)){
                    // cout<<j<<" "<<i<<endl;
                        ans = temp;
                        cout<<ans<<endl;
                    max_len = ans.length();
                }
                j++;
            }
        }
        return ans;
        
    }

int main(){
    string s = "cddb";
    cout<<longestPalindrome(s)<<endl;

    return 0;
}