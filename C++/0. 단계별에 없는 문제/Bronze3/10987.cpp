#include <iostream>

using namespace std;

int main() {
    int sum=0;
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++)
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            sum++;
    
    printf("%d", sum);

    return 0;
}