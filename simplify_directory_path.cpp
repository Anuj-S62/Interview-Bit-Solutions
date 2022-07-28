#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
string simplifyPath(string A) {
    A.push_back('/');
    vector<string> stk;
    int i = 0;
    while(i<A.length()){
        if(A[i]!='/' && A[i]!='.'){
            string s;
            while(A[i]!='/' && A[i]!='.'){
                s.push_back(A[i]);
                i++;
            }
            stk.push_back(s);
            continue;
        }
        else if(A[i]=='.'){
            if(stk.size() && A[i+1]=='.') stk.pop_back();
        }
        i++;
    }
    if(!stk.size()){
        string temp = "/";
        return temp;
    }
    string ans;
    for(auto i:stk){
        ans.push_back('/');
        ans+=i;
    }
    return ans;
}


 
int main(){
    // cout<<simplifyPath("/cbj/vfb/dyj/../../hjq/./unc/./cmv/./axj/../pzg/svs/oja/./rlc/vyr/cqq/../omk/viy/kyb/../ygr/mbx/nom/yvh/./../././lyg/qjv/./lwm/.././.././xga/krs/../xkl/wtj/nml/dal/hat/alw/jvo/./../xts/nul/yfe/upg/zhy/nzo/dtp/nqt/hqk/./../ref/gms/zhp/./bpp/jis/ccc/bmn/iip/nfv/../vbk/ugr/gpd/uez/./bqt/zqy/../vuf/ltg/mxm/../lvr/vef/../wpp/./rbc/xii/pkf/jsx/././xwo")<<endl;
    // cout<<simplifyPath("/a/./b/../../c/")<<endl;    // cout<<"hello"<<endl;
    cout<<simplifyPath("/../")<<endl;    // cout<<"hello"<<endl;
    return 0;
}