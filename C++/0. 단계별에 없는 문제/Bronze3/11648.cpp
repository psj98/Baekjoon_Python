#include <iostream>

using namespace std;

int main() {
    int cnt=0;
    string s;
    cin >> s;

    while(1){
        if(s.size()==1) break;
        int n=1;
        for(int i=0; i<s.size(); i++)
            n*=(s[i]-'0');
        
        s=to_string(n);
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}