#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
    int a, n, m, ans;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        v.push_back(a);
    }

    scanf("%d", &m);

    sort(v.begin(), v.end());

    int s=0, e=v[n-1];
    while(s<=e){
        int sum=0, mid=(s+e)/2;
        for(int i=0; i<n; i++)
            sum+=min(v[i], mid);

        if(m>=sum) ans=mid, s=mid+1;
        else e=mid-1;
    }

    printf("%d", ans);

    return 0;
}