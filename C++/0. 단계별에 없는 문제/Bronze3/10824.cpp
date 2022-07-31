#include <iostream>

using namespace std;

int main() {
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    s1+=s2;
    s3+=s4;

    cout << stol(s1)+stol(s3);
    
    return 0;
}