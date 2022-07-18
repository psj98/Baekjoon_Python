#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[3];
    for(int i=0; i<3; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr+3);

    if((arr[0]==arr[1]) && (arr[1]==arr[2])) printf("%d", 10000+arr[0]*1000);
    else if(((arr[0]==arr[1]) && (arr[1]!=arr[2])) || ((arr[0]!=arr[1]) && (arr[1]==arr[2]))) printf("%d", 1000+arr[1]*100);
    else printf("%d", arr[2]*100);

    return 0;
}