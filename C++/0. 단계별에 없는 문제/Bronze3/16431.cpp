#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int br, bc, dr, dc, jr, jc;
    scanf("%d %d %d %d %d %d", &br, &bc, &dr, &dc, &jr, &jc);

    int d=abs(dr-jr)+abs(dc-jc);
    int b=0;
    if(abs(br-jr)>abs(bc-jc)){
        b+=abs(bc-jc);
        b+=abs(br-jr)-abs(bc-jc);
    }
    else{
        b+=abs(br-jr);
        b+=abs(bc-jc)-abs(br-jr);
    }

    if(d<b) printf("daisy");
    else if(d>b) printf("bessie");
    else printf("tie");

    return 0;
}