#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
vector<int> ans;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a;
        scanf("%d", &a);
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++)
        ans.push_back(v[i]*(n-i));

    printf("%d", *max_element(ans.begin(), ans.end()));
    
    return 0;
}