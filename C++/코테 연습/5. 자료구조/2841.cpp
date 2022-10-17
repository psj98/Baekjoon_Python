#include <iostream>
#include <stack>

using namespace std;

stack<int> s[7];

int main() {
    int a, b, n, p, ans=0;
    scanf("%d %d", &n, &p);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);

        while(!s[a].empty()){
            if(s[a].top()>b){
                ans++;
                s[a].pop();
            }

            else break;
        }

        if(!s[a].empty() && s[a].top()==b) continue;

        s[a].push(b);
        ans++;
    }

    printf("%d", ans);
    
    return 0;
}