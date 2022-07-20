#include <iostream>

using namespace std;

int main(){
    char a[102];
    int n, sum=0;
    scanf("%d", &n);
    scanf("%s", a);

    for(int i=0; i<n; i++)
        sum+=a[i]-'0';

    printf("%d", sum);

    return 0;
}