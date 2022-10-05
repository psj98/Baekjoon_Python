#include <iostream>
#include <stack>

using namespace std;

stack<char> s;

int main() {
    string str;
    getline(cin, str);

    for(int i=0; i<str.size(); i++){
        if(str[i]=='<' && s.empty()){
            cout << str[i++];
            while(str[i]!='>'){
                cout << str[i++];
            }

            cout << str[i];
        }

        else if(str[i]=='<' && !s.empty()){
            while(!s.empty()){
                cout << s.top();
                s.pop();
            }
            i--;
        }

        else if(str[i]==' ' && s.empty())
            cout << str[i];

        else if(str[i]==' ' && !s.empty()){
            while(!s.empty()){
                cout << s.top();
                s.pop();
            }

            cout << ' ';
        }

        else{
            s.push(str[i]);
        }

        if(i==str.size()-1){
            while(!s.empty()){
                cout << s.top();
                s.pop();
            }
        }
    }
    
    return 0;
}