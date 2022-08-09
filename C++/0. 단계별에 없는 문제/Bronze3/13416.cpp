#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n, sum=0;
        scanf("%d", &n);

        for(int j=0; j<n; j++){
            int arr[3];
            for(int k=0; k<3; k++)
                scanf("%d", &arr[k]);

            if(*max_element(arr, arr+3)>0) sum+=*max_element(arr, arr+3);
        }

        printf("%d\n", sum);
    }

    return 0;
}