#include <iostream>
#include <map>

using namespace std;

map<string, int> mpint;
map<int, string> mpstr;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    string s;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> s;
        mpint[s]=i+1;
        mpstr[i+1]=s;
    }

    for(int i=0; i<m; i++){
        cin >> s;
        if(isdigit(s[0])) cout << mpstr[stoi(s)] << "\n";
        else cout << mpint[s] << "\n";
    }

    return 0;
}