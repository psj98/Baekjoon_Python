#include <iostream>

using namespace std;

int g[6]={1, 2, 3, 3, 4, 10};
int s[7]={1, 2, 2, 2, 3, 5, 10};

int main() {
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        int a, sum1=0, sum2=0;
        for(int j=0; j<6; j++){
            scanf("%d", &a);
            if(a!=0) sum1+=g[j]*a;
        }

        for(int j=0; j<7; j++){
            scanf("%d", &a);
            if(a!=0) sum2+=s[j]*a;
        }

        if(sum1>sum2) printf("Battle %d: Good triumphs over Evil\n", i);
        else if(sum1<sum2) printf("Battle %d: Evil eradicates all trace of Good\n", i);
        else printf("Battle %d: No victor on this battle field\n", i);
    }

    return 0;
}