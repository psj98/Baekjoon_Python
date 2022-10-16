#include <iostream>
#include <map>

using namespace std;

map<string, string> mp;

int main() {
    string ad, pw;
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> ad >> pw;
        mp.insert(make_pair(ad, pw));
    }

    for(int i=0; i<m; i++){
        cin >> ad;
        cout << mp[ad] << "\n";
    }

    return 0;
}