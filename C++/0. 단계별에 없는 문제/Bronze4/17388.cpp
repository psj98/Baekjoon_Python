#include <iostream>
#include <algorithm>

using namespace std;

int arr[3];

int main() {
    int sum=0;
	for(int i=0; i<3; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }

    if(sum>=100) printf("OK");
    else if(*min_element(arr, arr+3)==arr[0]) printf("Soongsil");
    else if(*min_element(arr, arr+3)==arr[1]) printf("Korea");
    else if(*min_element(arr, arr+3)==arr[2]) printf("Hanyang");

    return 0;
}