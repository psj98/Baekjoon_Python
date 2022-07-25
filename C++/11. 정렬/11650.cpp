#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> v;

int main(){
    int n, x, y;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++)
        printf("%d %d\n", v[i].first, v[i].second);

    return 0;
}   