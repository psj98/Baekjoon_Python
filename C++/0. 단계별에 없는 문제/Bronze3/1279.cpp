#include <iostream>

using namespace std;

int arr[4];

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        for(int j=0; j<4; j++)
            scanf("%d", &arr[j]);

        for(int j=0; j<4; j++){
            int a;
            scanf("%d", &a);
            arr[j]+=a;
            if((j==0 || j==1) && arr[j]<1) arr[j]=1;
            if(j==2 && arr[j]<0) arr[j]=0;
        }

        printf("%d\n", arr[0]+arr[1]*5+(arr[2]+arr[3])*2);        
    }

    return 0;
}