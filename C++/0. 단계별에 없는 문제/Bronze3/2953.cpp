#include <iostream>
#include <algorithm>

using namespace std;

int arr[5];

int main() {
    int n;
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &n);
            arr[i]+=n;
        }
    }

    int a=*max_element(arr, arr+5);
    for(int i=0; i<5; i++){
        if(arr[i]==a){
            printf("%d %d", i+1, a);
            break;
        }
    }
    
    return 0;
}