#include <iostream>

using namespace std;

int arr[10], check[42];

int main(){
    int a, sum=0;

    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        check[arr[i]%42]++;
    }

    for(int i=0; i<42; i++)
        if(check[i]>0)
            sum++;

    printf("%d", sum);

    return 0;
}