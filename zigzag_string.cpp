#include<bits/stdc++.h>
using namespace std;

// string convert(string s, int numRows) {
//             if(numRows==1){
//             return s;
//         }
//         vector<string> arr;
//         int strCount=0;
//         int idx=0;
//         while(idx<s.length()){
//             if(strCount%(numRows-1)==0){
//                 string temp;
//                 for(int i=0;i<numRows;i++){
//                     temp.push_back(s[idx]);
//                     idx++;
//                 }
//                 arr.push_back(temp);
//                 strCount++;
//                 continue;
//             }
//             else{
//                 string temp;
//                 for(int i=0;i<numRows;i++){
//                     temp.push_back(' ');
//                 }
//                 temp[numRows-strCount%(numRows-1)-1]=s[idx];
//                 arr.push_back(temp);
//                 idx++;
//                 strCount++;
//             }
//         }
//         strCount--;
//         if(arr[arr.size()-1][numRows-1]!=s[s.length()-1]){
//         int k=0;
//         while(arr[arr.size()-1][k]!=s[s.length()-1]){
//             k++;
//         }
//             k++;
//             for(int i=k;i<numRows;i++){
//                 arr[arr.size()-1][i]=' '; 
//             }
//         }
//         for(int i=0;i<arr.size();i++){
//             for(int j=0;j<numRows;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }  
//            string res;
//             for(int i=0;i<numRows;i++){
//                 for(int j=0;j<arr.size();j++)
//                     if((arr[j][i]>=64 && arr[j][i]<=90) || (arr[j][i]>=97 && arr[j][i]<=122) || (arr[j][i]>=48 && arr[j][i]<=57)){
//                         res.push_back(arr[j][i]);
//                     }
//                 }
//     return res;
// }

void disp(vector<string> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}

string convert(string s, int numRows){
    vector<string> arr;
    int x = numRows;
    while(x){
        arr.push_back("");
        x--;
    }
    x = 0;
    for(int i=0;i<s.length();i++){
        if(x<numRows){
            arr[x].push_back(s[i]);
            x++;
        }
        else{
            int j = i;
            x--;
            x--;
            while(x){
                arr[x].push_back(s[j]);
                x--;
                j++;
            }
            i = j-1;
        }
    }
    string res;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].length();j++){
            int p = arr[i][j];
            if(p) res.push_back(arr[i][j]);
        }
    }
    return res;
}

int main(){
    // convert("7Ukbzsp1OUghqmcSNiq4t9bAdPTkRNkX5kRcAaoGwUoVfx8lZRF6vObqv5X6IP65NT6G9KTBg1BXLW7ASDofQphRnUTse5pzkexZG56CSq5EFrPUjh6",10);
    // convert("abcdefghijklmnop",5);
    string a = convert("ABCDEFGHIJKLMNOPQRS",6);
    cout<<a.length()<<endl;
    cout<<p<<endl;
    cout<<a<<endl;

    return 0;
}