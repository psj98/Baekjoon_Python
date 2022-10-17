#include <iostream>
#include <queue>

typedef long long ll;
using namespace std;

priority_queue<ll, vector<ll>, greater<>> pq;

int main() {
    int n, m;
    ll a, sum=0;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        scanf("%lld", &a);
        pq.push(a);
    }

    for(int i=0; i<m; i++){
        ll num1=pq.top();
        pq.pop();

        ll num2=pq.top();
        pq.pop();

        pq.push(num1+num2);
        pq.push(num1+num2);
    }

    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
    }

    printf("%lld", sum);

    return 0;
}