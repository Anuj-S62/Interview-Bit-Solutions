#include<bits/stdc++.h>
using namespace std;

void show(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void stemp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

string con(int n){
    string res;
    while(n){
        char x = n%10 + '0';
        res.push_back(x);
        n = n/10;
    }
    reverse(res.begin(),res.end());
    return res;
}

string convert(vector<int> arr){
    string res;
    for(int i=0;i<arr.size();i++){
        res += con(arr[i]);
    }
    return res;
}

void comb(int x,vector<int> &arr, vector<vector<int>> &res,int sum,int t,vector<int> &temp,unordered_set<string> &st){
    for(int i=x;i<arr.size();i++){
        // if(count>0 && arr[i-1]==arr[i]) continue;
        sum += arr[i];
        if(sum < t){
            temp.push_back(arr[i]);
            comb(i+1,arr,res,sum,t,temp,st);
        }
        else if(sum==t){
            temp.push_back(arr[i]);
            string s = convert(temp);
            if(st.find(s)==st.end()) res.push_back(temp);
            st.insert(s);
            // show(res);
            temp.pop_back();
            return ;
        }
        else return;
        sum -= arr[i];
        temp.pop_back();
        // if(!temp.size()) count++;
    }
    return;
}

vector<vector<int>> temp(vector<vector<int>> arr){
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j = 0;j<arr[i].size();j++){

        }
    }
}

int main(){
    vector<int> arr = { 10, 14, 4, 8, 19, 10, 5, 7, 20, 11};
    // vector<int> arr = {15, 8, 15, 10, 19, 18, 10, 3, 11, 7, 17 };
    // vector<int> arr = {10,1,2,7,6,1,5};
    // vector<int> arr = {1,3,1,6};
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> temp;
    unordered_set<string> st;
    comb(0,arr,ans,0,31,temp,st);
    show(ans);

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// void show(vector<vector<int>> arr){
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// void stemp(vector<int> arr){
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// string assign(vector<int> arr){
//     string s;
//     for(int i = 0;i<arr.size();i++){
//         s.push_back(char(arr[i]));
//     }
//     return s;
// }

// void comb(int x,vector<int> &arr, vector<vector<int>> &res,int sum,int t,vector<int> &temp,int count,unordered_set<string> &st){
//     for(int i=x;i<arr.size();i++){
//         // if(st.find(arr[i])!=st.end()) continue;
//         sum += arr[i];
//         if(sum < t){
//             temp.push_back(arr[i]);
//             comb(i+1,arr,res,sum,t,temp,count,st);
//         }
//         else if(sum==t){
//             temp.push_back(arr[i]);
//             if(st.find(assign(temp))==st.end()) res.push_back(temp);
//             st.insert(assign(temp));
//             temp.pop_back();
//             return ;
//         }
//         else return;
//         sum -= arr[i];
//         temp.pop_back();
//         // if(!temp.size()){
//         //     st.insert(arr[i]);
//         // }
//     }
//     return;
// }

// int main(){
//     vector<int> arr = { 15, 8, 15, 10, 19, 18, 10, 3, 11, 7, 17 };
//     // vector<int> arr = {10,1,2,7,6,1,5};
//     // vector<int> arr = {1,3,1,6};
//     sort(arr.begin(),arr.end());
//     vector<vector<int>> ans;
//     vector<int> temp;
//     unordered_set<string> st;
//     comb(0,arr,ans,0,33,temp,0,st);
//     show(ans);

//     return 0;
// }