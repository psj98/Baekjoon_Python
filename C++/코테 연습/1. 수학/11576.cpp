#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

stack<int> s;

int main() {
    int a, b, n, m, sum=0;
    scanf("%d %d %d", &a, &b, &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &m);

        if(i==n) sum+=m;
        else sum+=((int)pow(a, n-i)*m);
    }

    while(sum!=0){
        s.push(sum%b);
        sum/=b;
    }

    while(!s.empty()){
        printf("%d ", s.top());
        s.pop();
    }

    return 0;
}