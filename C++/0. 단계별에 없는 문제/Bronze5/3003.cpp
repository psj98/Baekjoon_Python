#include <iostream>

using namespace std;

int arr[6]={1, 1, 2, 2, 2, 8};

int main(){
    int n;
    for(int i=0; i<6; i++){
        scanf("%d", &n);
        printf("%d ", arr[i]-n);
    }    

    return 0;
}