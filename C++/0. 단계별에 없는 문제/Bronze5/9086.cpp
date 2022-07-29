#include <iostream>

using namespace std;

int main(){
    string s;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        cout << s[0] << s[s.length()-1] << "\n";
    }
    
    return 0;
}