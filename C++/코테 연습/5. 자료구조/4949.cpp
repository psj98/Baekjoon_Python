#include <iostream>
#include <stack>

using namespace std;

int main() {
    while(1){
        bool check=false;
        stack<char> s;
        string str;
        getline(cin, str);

        if(str==".") break;

        for(int i=0; i<str.size(); i++){
            if(str[i]=='(' || str[i]=='[') s.push(str[i]);
            else if(str[i]==')'){
                if(!s.empty() && s.top()=='(') s.pop();
                else{
                    check=true;
                    break;
                }
            }

            else if(str[i]==']'){
                if(!s.empty() && s.top()=='[') s.pop();
                else{
                    check=true;
                    break;
                }
            }
        }

        if(!check && s.empty()) cout << "yes\n";
        else if(check || !s.empty()) cout << "no\n";
    }

    return 0;
}