#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    if(s[0]=='I') printf("E");
    else printf("I");

    if(s[1]=='S') printf("N");
    else printf("S");

    if(s[2]=='T') printf("F");
    else printf("T");

    if(s[3]=='J') printf("P");
    else printf("J");

    return 0;
}