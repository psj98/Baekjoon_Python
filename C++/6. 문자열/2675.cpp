#include <iostream>

using namespace std;

int main(){
    int n, m;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        string s;
        scanf("%d", &m);
        cin >> s;

        for(int j=0; j<s.length(); j++)
            for(int k=0; k<m; k++)
                printf("%c", s[j]);
        printf("\n");
    }

    return 0;
}