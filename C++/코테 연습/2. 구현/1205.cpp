#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
    int a, n, score, p, cnt=0, ans=1;
    scanf("%d %d %d", &n, &score, &p);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        v.push_back(a);
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]>score) ans++;
        else if(v[i]==score) ans=ans;
        else break;

        cnt++;
    }

    if(cnt==p) ans=-1;

    printf("%d", ans);

	return 0;
}