#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    ll sum=0;
    string s;
    cin >> s;

    sort(s.begin(), s.end(), greater<>());

    for(int i=0; i<s.size(); i++)
        sum+=(s[i]-'0');

    if(sum%3==0 && s[s.size()-1]=='0'){
        for(int i=0; i<s.size(); i++)
            cout << s[i];
    }

    else cout << -1;

    return 0;
}