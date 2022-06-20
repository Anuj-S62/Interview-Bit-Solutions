#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
        if(!needle.length()) return 0;
        int x = 0;
        bool flag = true;
        for(int i = 0;i<haystack.length();i++){
            int j = i;
            if(haystack[i]==needle[x]){
                j++;
                x++;
                while(x<needle.length() ){
                    if(needle[x]!=haystack[j]){
                        cout<<"Hello"<<" "<<i<<endl;
                        flag = false;
                        break;
                    } 
                    x++;
                    j++;
                }
                if(flag) return i;
                x = 0;
                flag = true;
            }   
        }
        return -1;
        
    }

int main(){
    cout<<strStr("mississippi","issipi")<<endl;

    return 0;
}