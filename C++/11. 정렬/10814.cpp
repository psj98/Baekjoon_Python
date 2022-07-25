#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, string>> v;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}

int main(){
    int b, n;
    string a;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &b);
        cin >> a;
        v.push_back(make_pair(b, a));
    }

    stable_sort(v.begin(), v.end(), compare);

    for(int i=0; i<v.size(); i++)
        cout << v[i].first << " " << v[i].second << "\n";

    return 0;
}   