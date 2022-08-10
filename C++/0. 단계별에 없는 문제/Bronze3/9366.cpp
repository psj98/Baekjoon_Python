#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int arr[3];
        for(int j=0; j<3; j++)
            scanf("%d", &arr[j]);

        sort(arr, arr+3);

        printf("Case #%d: ", i+1);
        if(arr[2]>=arr[0]+arr[1]) printf("invalid!\n");
        else if(arr[0]==arr[1] && arr[1]==arr[2]) printf("equilateral\n");
        else if(arr[0]==arr[1] && arr[1]!=arr[2] || arr[0]==arr[2] && arr[1]!=arr[2] || arr[0]!=arr[1] && arr[1]==arr[2]) printf("isosceles\n");
        else printf("scalene\n");
    }

    return 0;
}