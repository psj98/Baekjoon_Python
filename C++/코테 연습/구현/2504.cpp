#include <iostream>
#include <stack>

using namespace std;

stack<char> s;

int main() {
    int num=1, ans=0;
    string a;
    cin >> a;

    for(int i=0; i<a.size(); i++){
        if(a[i]=='('){
            s.push('(');
            num*=2;
        }

        else if(a[i]=='['){
            s.push('[');
            num*=3;
        }

        else if(a[i]==')'){
            if(s.empty() || s.top()!='('){
                ans=0;
                break;
            }

            if(a[i-1]=='('){
                ans+=num;
                num/=2;
            }

            else num/=2;

            s.pop();
        }

        else if(a[i]==']'){
            if(s.empty() || s.top()!='['){
                ans=0;
                break;
            }

            if(a[i-1]=='['){
                ans+=num;
                num/=3;
            }

            else num/=3;

            s.pop();
        }
    }

    if(!s.empty()) ans=0;

    cout << ans;
    
    return 0;
}