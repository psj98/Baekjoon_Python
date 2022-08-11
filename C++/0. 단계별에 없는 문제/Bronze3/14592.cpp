#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, pair<int, pair<int, int>>>> v;

int main() {
    int n;
    scanf("%d", &n);

    int arr[n][4]={0};

    for(int i=0; i<n; i++){
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
        v.push_back(make_pair(arr[i][0], make_pair(-arr[i][1], make_pair(-arr[i][2], i+1))));
    }

    sort(v.begin(), v.end());

    printf("%d", v[n-1].second.second.second);

    return 0;
}