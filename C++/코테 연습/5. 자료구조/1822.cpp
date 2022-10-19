#include <iostream>
#include <set>

using namespace std;

set<int> s;
set<int>::iterator it;

int main() {
    int a, n, m;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        s.insert(a);
    }

    for(int i=0; i<m; i++){
        scanf("%d", &a);

        auto cnt=s.find(a);
        if(cnt==s.end()) continue;
        else s.erase(cnt);
    }

    printf("%d\n", s.size());
    
    for(it=s.begin(); it!=s.end(); it++) printf("%d ", *it);
    
    return 0;
}