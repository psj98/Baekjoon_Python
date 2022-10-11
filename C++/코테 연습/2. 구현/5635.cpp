#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<pair<int, int>, pair<int, string>>> v;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string name;
        int d, m, y;
        cin >> name >> d >> m >> y;

        v.push_back(make_pair(make_pair(y, m), make_pair(d, name)));
    }

    sort(v.begin(), v.end());

    cout << v[n-1].second.second << "\n";
    cout << v[0].second.second;

    return 0;
}