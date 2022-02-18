#include<bits/stdc++.h>
using namespace std;

// this is glocal space
// you can declare global variable here like stack
stack<int> s;
stack<int> st;
MinStack::MinStack() {
    // this is constrcutor here youy initislize or clear the global variable
    // global variable have some garbage value so remove all the thing from stack while it is not emppty
    // let me do it
    s=stack<int>();
    st=stack<int>();
}

void MinStack::push(int x) {
    if(!s.empty()){
        if(x>s.top()){
            if(!st.empty()){
                if(s.top() < st.top()) st.push(s.top());
            }
            else st.push(s.top());
        }
        
    }
    else{
        st.push(x);
    }
    
    s.push(x);
}

void MinStack::pop() {
    if(!s.empty()){
        if(!st.empty() && s.top() == st.top()) st.pop();
        s.pop();
    }
}

int MinStack::top() {
    if(!s.empty()){
        return s.top();
    }
    else return -1;
}

int MinStack::getMin() {
    if(!s.empty()){
        if(!st.empty()) return min(s.top(), st.top());
        else return s.top();
    }
    else return -1;
}

int main(){
    

    return 0;
}