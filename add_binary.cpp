#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
           string ans = "";
    int carry = 0, sum;
    int i = a.length() - 1, j = b.length() - 1;
    while (i >= 0 || j >= 0 || carry) {
        sum = carry;
        if (i >= 0) sum += (a[i] - 48);
        if (j >= 0) sum += (b[j] - 48);
        char x=(48 + sum % 2);
        ans.push_back(x);
        carry = sum / 2;
        i--; 
        j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }

int main(){
    cout<<addBinary("1","1")<<endl;

    return 0;
}