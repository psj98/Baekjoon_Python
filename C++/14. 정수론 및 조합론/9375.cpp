#include <iostream>
#include <map>

using namespace std;

int main(){
    string a, b;
    int t, n;
    cin >> t;

    for(int i=0; i<t; i++){
        map<string, int> mp;
        int ans=1;

        cin >> n;
        for(int j=0; j<n; j++){
            cin >> a >> b;
            
            if(!mp[b]) mp[b]=1;
            else mp[b]++;
        }

        for(auto i:mp) ans*=(i.second+1);

        cout << ans-1 << "\n";
    }

    return 0;
}