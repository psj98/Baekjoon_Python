#include <iostream>
#include <algorithm>

using namespace std;

string s[101][101];

string memo(string n1, string n2) {
    int sum=0;
    string ans;
    
    while(!n1.empty() || !n2.empty() || sum!=0) {
        if (!n1.empty()) {
            sum+=n1.back()-'0';
            n1.pop_back();
        }
        
        if (!n2.empty()) {
            sum+=n2.back()-'0';
            n2.pop_back();
        }
        
        ans.push_back((sum%10)+'0');
        sum/=10;
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}

string cal(int n, int m) {
    string &ans = s[n][m];

    if (n==m || m==0) return "1";

    if (ans!="") return ans;
    
    ans=memo(cal(n-1, m-1), cal(n-1, m));
    
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << cal(n, m);
    
    return 0;
}