#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> v;

int main() {
    int a, b, n, m, k, sum=0;
    scanf("%d %d %d", &n, &m, &k);

    for(int i=0; i<k+1; i++){
        int dis;
        scanf("%d %d", &a, &b);
        if(a==1) dis=b;
        else if(a==2) dis=n*2+m-b;
        else if(a==3) dis=(n+m)*2-b;
        else if(a==4) dis=n+b;

        v.push_back(make_pair(a, dis));
    }

    for(int i=0; i<k; i++){
        int x=abs(v[v.size()-1].second-v[i].second);
        sum+=min(x, (n+m)*2-x);
    }

    printf("%d", sum);
    
    return 0;
}