#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s, a1, a2, a3, ans="";
    cin >> s;

    for(int i=1; i<s.size()-1; i++){
        for(int j=1; j<s.size()-i; j++){
            a1=s.substr(0, i);
            a2=s.substr(i, j);
            a3=s.substr(i+j);

            reverse(a1.begin(), a1.end());
            reverse(a2.begin(), a2.end());
            reverse(a3.begin(), a3.end());

            if(ans=="") ans=a1+a2+a3;
            else if(a1+a2+a3<ans) ans=a1+a2+a3;
        }
    }

    cout << ans;

	return 0;
}