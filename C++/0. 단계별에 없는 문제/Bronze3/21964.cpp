#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    char s[n];
    scanf("%s", s);

    for(int i=n-5; i<n; i++)
        printf("%c", s[i]);

    return 0;
}