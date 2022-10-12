#include <iostream>

using namespace std;

int main() {
    int cnt=0;
    string s;
    cin >> s;

    while(s.size()!=1){
        int a=0;
        for(int i=0; i<s.size(); i++)
            a+=s[i]-'0';

        s=to_string(a);
        cnt++;
    }

    if(stoi(s)%3==0) printf("%d\nYES", cnt);
    else printf("%d\nNO", cnt);
    
    return 0;
}