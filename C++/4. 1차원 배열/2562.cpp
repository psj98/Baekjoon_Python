#include <iostream>
#include <algorithm>

using namespace std;

int arr[9];

int main(){
    for(int i=0; i<9; i++)
        scanf("%d", &arr[i]);

    auto a=*max_element(arr, arr+9); // ÃÖ´ñ°ª
    printf("%d %d", a, find(arr, arr+9, a)-arr+1); // ÃÖ´ñ°ª, ÃÖ´ñ°ª¿¡ ´ëÇÑ index

    return 0;
}