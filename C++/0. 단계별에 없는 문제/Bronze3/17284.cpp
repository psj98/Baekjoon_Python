#include <iostream>

using namespace std;

int main() {
    int ans=5000;
    while(1){
        char a;
        scanf("%c", &a);

        if(a=='\n') break;
        else if(a=='1') ans-=500;
        else if(a=='2') ans-=800;
        else if(a=='3') ans-=1000;
    }

    printf("%d", ans);

    return 0;
}