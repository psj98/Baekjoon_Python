#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n, cnt=1;
        vector<pair<int, int>> v;
        scanf("%d", &n);

        for(int j=0; j<n; j++){
            int a, b;
            scanf("%d %d", &a, &b);
            v.push_back(make_pair(a, b));
        }

        sort(v.begin(), v.end());

        int rank=v[0].second;
        for(int j=1; j<v.size(); j++){
            if(v[j].second < rank){
                cnt++;
                rank=v[j].second;
            }
        }

        printf("%d\n",  cnt);
    }

    return 0;
}