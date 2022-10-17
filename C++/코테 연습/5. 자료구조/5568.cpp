#include <iostream>
#include <vector>
#include <set>

using namespace std;

int n, k;
set<int> st;
vector<int> v;
bool visited[10];

void dfs(int cnt, string s){
    if(cnt==k){
        st.insert(stoi(s));
        return;
    }

    for(int i=0; i<n; i++){
        if(visited[i]) continue;

        visited[i]=true;

        string num=s;
        num+=to_string(v[i]);
        dfs(cnt+1, num);
        
        visited[i]=false;
    }
}

int main() {
    int a;
    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        v.push_back(a);
    }

    dfs(0, "");

    printf("%d", st.size());
    
    return 0;
}