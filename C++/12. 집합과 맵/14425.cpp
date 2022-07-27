#include <iostream>
#include <map>

using namespace std;

map<string, bool> mp;

int main(){
    string s;
    int n, m, cnt=0;
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<n; i++){
        cin >> s;
        mp[s]=true;
    }

    for(int i=0; i<m; i++){
        cin >> s;
        if(mp[s]) cnt++;
    }

    printf("%d", cnt);

    return 0;
}   