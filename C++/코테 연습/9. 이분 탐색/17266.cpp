#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
vector<int> ans;

int main() {
    int a, n, m;
    scanf("%d %d", &n, &m);

    v.push_back(0);
    for(int i=0; i<m; i++){
        scanf("%d", &a);
        v.push_back(a);
    }
    v.push_back(n);

    for(int i=0; i<v.size()-1; i++){
        if(i==0 || i==m) ans.push_back(v[i+1]-v[i]);
        else{
            if((v[i+1]-v[i])%2==1) ans.push_back(((v[i+1]-v[i])/2)+1);
            else ans.push_back((v[i+1]-v[i])/2);
        }
    }

    printf("%d", *max_element(ans.begin(), ans.end()));

    return 0;
}