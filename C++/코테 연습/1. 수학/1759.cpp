#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int l, c;
vector<char> v;

bool check(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
    else return false;
}

void dfs(int start, string s, int mo, int ja){
    if(check(v[start])) mo++;
    else ja++;

    s+=v[start];

    if(mo>=1 && ja>=2 && s.size()==l){
        cout << s << "\n";
    }

    for(int i=start+1; i<v.size(); i++){
        dfs(i, s, mo, ja);
    }
}

int main() {
    cin >> l >> c;

    for(int i=0; i<c; i++){
        char a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<=c-l; i++){
        string s="";
        int mo=0, ja=0;
        dfs(i, s, mo, ja);
    }
    
    return 0;
}