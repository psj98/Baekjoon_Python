#include <iostream>

using namespace std;

int main() {
    int one=0, zero=0;
    string s;
    cin >> s;

    if(s[0]=='1') one++;
    else zero++;

    for(int i=1; i<s.size(); i++){
        if(s[i-1]=='1' && s[i]=='0') zero++;
        else if(s[i-1]=='0' && s[i]=='1') one++;
    }

    cout << min(zero, one);

    return 0;
}