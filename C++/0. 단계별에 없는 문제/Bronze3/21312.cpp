#include <iostream>

using namespace std;

int main() {
    int arr[3], ans=1;
    bool odd=false;
    for(int i=0; i<3; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2!=0){
            ans*=arr[i];
            odd=true;
        }
    }

    if(!odd) printf("%d", arr[0]*arr[1]*arr[2]);
    else printf("%d", ans);    

    return 0;
}