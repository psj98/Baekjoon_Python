#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        string s;
        cin >> s;

        for(int j=0; j<s.size(); j++){
            if(s[j]>=65 && s[j]<=90)
                s[j]+=32;
            cout << s[j];
        }
        cout << "\n";
    }

    return 0;
}