// #include<bits/stdc++.h>
// using namespace std;

// int redundant(string s){
//     stack<char> stk;
//     for(int i = 0;i<s.length();i++){
//         if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/') stk.push(s[i]);
//         else if(s[i]==')'){
//             if(stk.top()=='(') return 1;
//             if(stk.top()!='('){
//                 while(stk.size() && stk.top()!='(') stk.pop();
//             }
//             stk.pop();
//             // cout<<stk.top()<<endl;
//             if(stk.size() && stk.top()=='(') return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     cout<<redundant("(a+((b*c)+c))")<<endl;
//     // cout<<redundant("(a+(b))")<<endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
// Function to check redundant brackets in a
// balanced expression
bool checkRedundancy(string& str)
{
    // create a stack of characters
    stack<char> st;
 
    // Iterate through the given expression
    for (auto& ch : str) {
 
        // if current character is close parenthesis ')'
        if (ch == ')') {
            char top = st.top();
            st.pop();
 
            // If immediate pop have open parenthesis '('
            // duplicate brackets found
            bool flag = true;
 
            while (!st.empty() and top != '(') {
 
                // Check for operators in expression
                if (top == '+' || top == '-' ||
                    top == '*' || top == '/')
                    flag = false;
 
                // Fetch top element of stack
                top = st.top();
                st.pop();
            }
 
            // If operators not found
            if (flag == true)
                return true;
        }
 
        else
            st.push(ch); // push open parenthesis '(',
                  // operators and operands to stack
        cout<<st.top()<<endl;
    }
    return false;
}
 
// Function to check redundant brackets
void findRedundant(string& str)
{
    bool ans = checkRedundancy(str);
    if (ans == true)
        cout << "Yes\n";
    else
        cout << "No\n";
}
 
// Driver code
int main()
{
    string str = "((a+b))";
    findRedundant(str);
 
    str = "(a+(b))";
    findRedundant(str);
 
    str = "(a+b*(c-d))";
    findRedundant(str);
 
    return 0;
}