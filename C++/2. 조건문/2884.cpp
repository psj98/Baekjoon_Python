#include <iostream>

using namespace std;

int main(){
    int h, m;
    scanf("%d %d", &h, &m);

    if(m<45) h-=1;
    else m-=60;
    if(h<0) h=23;
    m+=15;

    printf("%d %d", h, m);

    return 0;
}