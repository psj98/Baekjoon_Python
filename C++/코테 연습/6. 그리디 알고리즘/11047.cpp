#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
    int a, n, k, ans=0;
    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        scanf("%d", &a);

        if(a<=k) v.push_back(a);
    }

    int vs=v.size();
    sort(v.begin(), v.end(), greater<int>());

    for(int i=0; i<v.size(); i++){
        ans+=k/v[i];
        k=k%v[i];
    }

    printf("%d", ans);

    return 0;
}