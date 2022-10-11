#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, n, k;
    scanf("%d", &k);

    for(int i=1; i<=k; i++){
        vector<int> v;
        vector<int> diff;

        scanf("%d", &n);

        for(int j=0; j<n; j++){
            scanf("%d", &a);
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        for(int j=1; j<n; j++)
            diff.push_back(v[j]-v[j-1]);

        printf("Class %d\nMax %d, Min %d, Largest gap %d\n", i, v[v.size()-1], v[0], *max_element(diff.begin(), diff.end()));
    }

    return 0;
}