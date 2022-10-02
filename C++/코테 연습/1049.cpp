#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v1;
vector<int> v2;

int main() {
    int n, m, ans=0;
    scanf("%d %d", &n, &m);

    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        v1.push_back(a);
        v2.push_back(b);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    if(v1[0]>v2[0]*6) ans=v2[0]*n;
    else{
        int a=v1[0]*(n/6+1);
        int b=v1[0]*(n/6)+v2[0]*(n%6);
        if(a<b) ans=a;
        else ans=b;
    }

    printf("%d", ans);
    
    return 0;
}