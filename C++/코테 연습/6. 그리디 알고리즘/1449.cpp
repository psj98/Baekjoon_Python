#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int main() {
    int n, l, start, cnt=1;
    scanf("%d %d", &n, &l);

    for(int i=0; i<n; i++){
        int a;
        scanf("%d", &a);
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    start=v[0];

    for(int i=1; i<v.size(); i++){
        if(v[i]-start+1>l){
            cnt++;
            start=v[i];
        }
    }

    printf("%d", cnt);

    return 0;
}