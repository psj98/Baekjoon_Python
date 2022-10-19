#include <iostream>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    string s;
    int a, n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        s.erase(0, s.find('.')+1);
        mp[s]++;
    }

    for(auto it:mp)
        cout << it.first << " " << it.second << "\n";
    
    return 0;
}