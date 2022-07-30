#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i=0; i<a; i++){
        string s;
        cin >> s;

        for(int i=s.size()-1; i>=0; i--)
            cout << s[i];
        cout << "\n";
    }

    return 0;
}