#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<string, bool> mp;
vector<string> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    string s;
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> s;
        mp[s]=true;
    }

    for(int i=0; i<m; i++){
        cin >> s;
        if(mp[s]) v.push_back(s);
    }

    cout << v.size() << "\n";

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i] << "\n";

    return 0;
}