#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr1[3], arr2[2];
    for(int i=0; i<3; i++)
        scanf("%d", &arr1[i]);

    for(int i=0; i<2; i++)
        scanf("%d", &arr2[i]);
    
    int a=*min_element(arr1, arr1+3);
    int b=*min_element(arr2, arr2+2);

    printf("%d", a+b-50);

    return 0;
}