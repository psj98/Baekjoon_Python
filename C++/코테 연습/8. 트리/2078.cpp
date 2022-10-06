#include <iostream>

using namespace std;

int main() {
    int a, b, l=0, r=0;
    scanf("%d %d", &a, &b);

    while(1){
        if(a==1){
            r+=(b-1);
            break;
        }

        else if(b==1){
            l+=(a-1);
            break;
        }

        if(a>b){
            l++;
            a-=b;
        }

        else{
            r++;
            b-=a;
        }
    }

    printf("%d %d", l, r);

    return 0;
}