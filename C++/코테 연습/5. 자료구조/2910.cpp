#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<int, int> idx;
map<int, int> cnt;
vector<pair<int, int>> v;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.first==b.first) return idx[a.second] < idx[b.second];
    return a.first>b.first;
}

int main() {
    int a, n, c;
    scanf("%d %d", &n, &c);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        cnt[a]++;

        if(idx[a]==0) idx[a]=i+1;
    }

    for(auto it:cnt) v.push_back(make_pair(it.second, it.first));

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<v.size(); i++)
        for(int j=0; j<v[i].first; j++)
            printf("%d ", v[i].second);
    
    return 0;
}