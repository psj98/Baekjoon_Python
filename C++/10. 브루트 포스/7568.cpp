#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> v;

int main(){
    int n, a, b;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        v.push_back(make_pair(a, b));
    }

    for(int i=0; i<n; i++){
        int r=0;
        for(int j=0; j<n; j++){
            if(v[i].first<v[j].first && v[i].second<v[j].second)
                r++;
        }
        printf("%d\n", r+1);
    }

    return 0;
}