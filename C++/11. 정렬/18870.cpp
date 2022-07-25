#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int main(){
    int a, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        v.push_back(a);
    }

    vector<int> cpy(v);

    sort(cpy.begin(), cpy.end());
    cpy.erase(unique(cpy.begin(), cpy.end()), cpy.end());

    for(int i=0; i<n; i++){
        auto b=lower_bound(cpy.begin(), cpy.end(), v[i]);
        printf("%d ", b-cpy.begin());
    }

    return 0;
}   