#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
    int a, n, ans=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++)
        ans+=((n-i)*v[i]);

    printf("%d", ans);

    return 0;
}