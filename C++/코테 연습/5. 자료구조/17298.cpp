#include <iostream>
#include <vector>
#include <stack>

using namespace std;

stack<int> s;

int main() {
    int a, n;
    scanf("%d", &n);
    
    vector<int> v(n);
    vector<int> ans(n, -1);

    for(int i=0; i<n; i++)
        scanf("%d", &v[i]);

    for(int i=0; i<n; i++){
        while(!s.empty() && v[s.top()]<v[i]){
            ans[s.top()]=v[i];
            s.pop();
        }

        s.push(i); // À§Ä¡
    }

    for(int i=0; i<n; i++)
        printf("%d ", ans[i]);
    
    return 0;
}