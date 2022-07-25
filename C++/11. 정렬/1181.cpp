#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, string>> v;

int main(){
    int n;
    string a;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(make_pair(a.length(), a));
    }

    sort(v.begin(), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i].second << "\n";

    return 0;
}   