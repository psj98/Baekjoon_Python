#include <iostream>

using namespace std;

int main() {
    char a[2];
    int b, n;
    scanf("%d", &b);
    while(1){
        scanf("%s", a);
        if(a[0]=='=') break;
        
        scanf("%d", &n);

        if(a[0]=='+') b+=n;
        else if(a[0]=='-') b-=n;
        else if(a[0]=='*') b*=n;
        else if(a[0]=='/') b/=n;
    }

    printf("%d", b);

    return 0;
}