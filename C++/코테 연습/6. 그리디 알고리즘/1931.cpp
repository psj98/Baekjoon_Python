#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> v;

int main() {
    int n, ans=1;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        v.push_back(make_pair(b, a));
    }

    sort(v.begin(), v.end()); // 끝나는 시간 순으로

    int et=v[0].first;
    for(int i=1; i<n; i++){
        if(et<=v[i].second){
            ans++;
            et=v[i].first;
        }
    }

    printf("%d", ans);

    return 0;
}