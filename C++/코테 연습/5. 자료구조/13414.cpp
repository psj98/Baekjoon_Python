#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<string, int> mp;
vector<pair<int, string>> v;

int main() {
    string s;
    int n, m;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        cin >> s;
        mp[s]=i;
    }

    for(auto it:mp) v.push_back(make_pair(it.second, it.first));

    sort(v.begin(), v.end());

    if(v.size()<n) n=v.size();
    
    for(int i=0; i<n; i++) cout << v[i].second << "\n";
    
    return 0;
}