#include <iostream>

using namespace std;

int main() {
    while(1){
        int sum=0;
        string s;
        cin >> s;

        if(s=="0") break;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') sum+=2;
            else if(s[i]=='0') sum+=4;
            else sum+=3;
        }

        cout << sum+s.size()+1 << "\n";
    }

    return 0;
}