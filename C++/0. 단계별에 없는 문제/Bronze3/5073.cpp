#include <iostream>
#include <algorithm>

using namespace std;

int arr[3];

int main() {
    while(1){
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

        if(arr[0]==0 && arr[1]==0 && arr[2]==0) break;

        sort(arr, arr+3);
        
        if(arr[0]+arr[1]<=arr[2]) printf("Invalid\n");
        else if(arr[0]==arr[1] && arr[1]==arr[2]) printf("Equilateral\n");
        else if((arr[0]==arr[1] && arr[1]!=arr[2]) || (arr[0]==arr[2] && arr[1]!=arr[2]) || (arr[0]!=arr[1] && arr[1]==arr[2])) printf("Isosceles\n");
        else printf("Scalene\n");
    }

    return 0;
}