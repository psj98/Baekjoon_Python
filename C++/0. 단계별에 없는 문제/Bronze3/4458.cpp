#include <iostream>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; i++){
        getline(cin, s);
        
        if(s[0]>=97 && s[0]<=122) s[0]-=32;

        cout << s << "\n";
    }

    return 0;
}