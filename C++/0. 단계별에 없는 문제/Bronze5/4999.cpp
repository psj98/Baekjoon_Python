#include <iostream>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.length()>=s2.length()) printf("go");
    else printf("no");
    
    return 0;
}