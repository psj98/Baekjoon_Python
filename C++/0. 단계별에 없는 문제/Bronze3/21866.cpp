#include <iostream>

using namespace std;

int main() {
    int arr[9], sum=0;
    for(int i=0; i<9; i++){
        scanf("%d", &arr[i]);
        if(arr[i]>((i/2)+1)*100){
            printf("hacker");
            return 0;
        }
        sum+=arr[i];
    }

    if(sum<=900 && sum>=100) printf("draw");
    else printf("none");

    return 0;
}