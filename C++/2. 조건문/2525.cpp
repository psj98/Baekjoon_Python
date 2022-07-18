#include <iostream>

using namespace std;

int main(){
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);

    int a=s/60, b=s%60;
    h+=a, m+=b;

    if(m>=60) h+=1, m-=60;
    if(h>=24) h-=24;

    printf("%d %d", h, m);

    return 0;
}