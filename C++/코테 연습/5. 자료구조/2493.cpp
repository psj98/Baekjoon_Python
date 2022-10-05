#include <iostream>
#include <vector>
#include <stack>

using namespace std;

stack<int> s;

int main() {
    int a, n;
    scanf("%d", &n);
    
    vector<int> v(n);
    vector<int> ans(n, 0);

    for(int i=0; i<n; i++)
        scanf("%d", &v[i]);

    for(int i=n-1; i>=0; i--){
        while(!s.empty() && v[s.top()]<v[i]){
            ans[s.top()]=i+1;
            s.pop();
        }

        s.push(i); // À§Ä¡
    }

    for(int i=0; i<n; i++)
        printf("%d ", ans[i]);
    
    return 0;
}