#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        string s;
        cin >> s;

        printf("String #%d\n", i+1);

        for(int j=0; j<s.size(); j++){
            if(s[j]=='Z') s[j]='A';
            else s[j]+=1;
            printf("%c", s[j]);
        }
        printf("\n\n");
    }

    return 0;
}