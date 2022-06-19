#include<bits/stdc++.h>
using namespace std;


// Definition for an interval.
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

void show(vector<Interval> t){
    for(int i = 0;i<t.size();i++){
        cout<<"["<<t[i].start<<","<<t[i].end<<"],";
    }
    cout<<endl;
}

vector<Interval> merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(), A.end(), [](Interval l, Interval r){ return l.start<r.start; });
    
    vector<Interval> ans;
    int s1 = A[0].start;
    int s2 = A[0].end;
    for(int i = 1;i<A.size();i++){
        if(A[i].start<=s2){
            if(A[i].end > s2){
                s2 = A[i].end;
            }
        }
        else{
            Interval *temp = new Interval(s1,s2); 
            ans.push_back((*temp));
            s1 = A[i].start;
            s2 = A[i].end;
        }
    }
    Interval *temp = new Interval(s1,s2); 
    ans.push_back((*temp));


    show(ans);
    return ans;
}


int main(){
    Interval* t1 = new Interval(6,10);
    Interval* t2 = new Interval(1,6);
    Interval* t3 = new Interval(3,7);
    Interval* t4 = new Interval(5,6);
    vector<Interval> temp = {(*t1),(*t2),(*t3),(*t4)};
    // cout<<temp[0].start<<" "<<temp[0].end<<endl;
    show(temp);
    merge(temp);

    return 0;
}