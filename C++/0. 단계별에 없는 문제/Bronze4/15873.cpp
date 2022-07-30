#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int A=stoi(s.length()>=3 && s[1]=='0' ? s.substr(0,2):s.substr(0,1));
    int B=stoi(A==10 ? s.substr(2):s.substr(1));
    int result=A+B;
    
    cout << result;
    
    return 0;
}