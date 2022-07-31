#include <iostream>

using namespace std;

int main() {
    int a;
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            scanf("%d", &a);
            if(a==0) sum++;
        }

        if(sum==0) printf("E\n");
        else if(sum==1) printf("A\n");
        else if(sum==2) printf("B\n");
        else if(sum==3) printf("C\n");
        else if(sum==4) printf("D\n");
    }
    
    return 0;
}