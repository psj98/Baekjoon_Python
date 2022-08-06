#include <iostream>
#include <vector>

using namespace std;

vector<string> s;

int main() {
    string ss;
    int n, k;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> ss;
        s.push_back(ss);
    }

    cin >> k;

    if(k==1)
        for(int i=0; i<n; i++)
            cout << s[i] << "\n";

    else if(k==2){
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=0; j--){
                cout << s[i][j];
            }
            cout << "\n";
        }
    }

    else if(k==3)
        for(int i=n-1; i>=0; i--)
            cout << s[i] << "\n";

    return 0;
}