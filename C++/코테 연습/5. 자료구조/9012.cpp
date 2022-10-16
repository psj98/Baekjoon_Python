#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        bool check=false;
        stack<char> s;
        string str;
        cin >> str;

        for(int j=0; j<str.size(); j++){
            if(str[j]=='(') s.push(str[j]);
            else if(str[j]==')'){
                if(!s.empty() && s.top()=='('){
                    s.pop();
                }

                else{
                    check=true;
                    break;
                }
            }
        }

        if(!check && s.empty()) cout << "YES\n";
        else if(check || !s.empty()) cout << "NO\n";
    }

    return 0;
}