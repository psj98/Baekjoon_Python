#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, cnt=0;
    cin >> n;

    for(int i=0; i<n; i++){
        stack<char> s;
        string str;
        cin >> str;

        for(int j=0; j<str.size(); j++){
            if(s.empty()) s.push(str[j]);
            else{
                if(s.top()==str[j]) s.pop();
                else s.push(str[j]);
            }
        }

        if(s.empty()) cnt++;
    }

    cout << cnt;

    return 0;
}