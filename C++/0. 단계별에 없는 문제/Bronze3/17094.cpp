#include <iostream>

using namespace std;

int main() {
    int n, cnt1=0, cnt2=0;
    scanf("%d", &n);

    char s[n];
    scanf("%s", s);

    for(int i=0; i<n; i++){
        if(s[i]=='2') cnt1++;
        else cnt2++;
    }
    
    if(cnt1==cnt2) printf("yee");
    else if(cnt1>cnt2) printf("2");
    else printf("e");

    return 0;
}