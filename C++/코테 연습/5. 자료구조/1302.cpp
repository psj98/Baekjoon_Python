#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> v;

int main() {
    int n, m, cnt=1;
    string a, ans;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    ans=v[0], m=1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) cnt++;
        else cnt=1;

        if(cnt>m){
            ans=v[i];
            m=cnt;
        }
    }

    cout << ans;

    return 0;
}