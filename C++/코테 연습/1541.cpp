#include <iostream>

using namespace std;

int main() {
    string s, num="";
    int ans=0;
    bool check=false;
    getline(cin, s);

    for(int i=0; i<=s.size(); i++){
        if(s[i]=='-' || s[i]=='+' || i==s.size()){
            if(check) ans-=stoi(num);
            else ans+=stoi(num);

            num="";
        }
        
        else num+=s[i];

        if(s[i]=='-') check=true;
    }

    printf("%d", ans);

    return 0;
}