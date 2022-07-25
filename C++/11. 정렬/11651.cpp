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
        v.push_back(make_pair(y, x));
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++)
        printf("%d %d\n", v[i].second, v[i].first);

    return 0;
}   