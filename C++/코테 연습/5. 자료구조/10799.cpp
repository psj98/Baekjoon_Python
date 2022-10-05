#include <iostream>
#include <stack>

using namespace std;

stack<char> s;

int main() {
    int sum=0;
    string str;
    cin >> str;

    for(int i=0; i<str.size(); i++){
        if(str[i]=='(') s.push(str[i]);
        else if(str[i]==')' && str[i-1]=='('){
            s.pop();
            sum+=s.size();
        }

        else{
            s.pop();
            sum++;
        }
    }

    printf("%d", sum);
    
    return 0;
}