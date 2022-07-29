#include <iostream>

using namespace std;

int main() {
	int n;
    string s;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        if(s.length()>=6 && s.length()<=9) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}