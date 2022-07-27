#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<int, bool> aset;
map<int, bool> bset;
vector<int> avec;
vector<int> bvec;
vector<int> v;

int main(){
    int a, b, n;
    scanf("%d %d", &a, &b);

    for(int i=0; i<a; i++){
        scanf("%d", &n);
        aset[n]=true;
        avec.push_back(n);
    }

    for(int i=0; i<b; i++){
        scanf("%d", &n);
        bset[n]=true;
        bvec.push_back(n);
    }

    for(int i=0; i<avec.size(); i++)
        if(!bset[avec[i]]) v.push_back(avec[i]);

    for(int i=0; i<bvec.size(); i++)
        if(!aset[bvec[i]]) v.push_back(bvec[i]);

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    printf("%d", v.size());

    return 0;
}