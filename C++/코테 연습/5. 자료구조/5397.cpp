#include <iostream>
#include <list>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        list<char> l;
        list<char>::iterator iter=l.end();
        string s;
        cin >> s;

        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i]) || isalpha(s[i])) l.insert(iter, s[i]);
            else if(s[i]=='<' && iter!=l.begin()) iter--;
            else if(s[i]=='>' && iter!=l.end()) iter++;
            else if(s[i]=='-' && iter!=l.begin()) iter=l.erase(--iter);
        }

        for(auto c:l) cout << c;
        cout << "\n";
    }

    return 0;
}