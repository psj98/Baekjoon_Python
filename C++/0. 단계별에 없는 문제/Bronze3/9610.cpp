#include <iostream>

using namespace std;

int arr[5];

int main() {
    int n, x, y;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        if(x==0 || y==0) arr[4]++;
        else if(x>0 && y>0) arr[0]++;
        else if(x<0 && y>0) arr[1]++;
        else if(x<0 && y<0) arr[2]++;
        else if(x>0 && y<0) arr[3]++;
    }

    printf("Q1: %d\n", arr[0]);
    printf("Q2: %d\n", arr[1]);
    printf("Q3: %d\n", arr[2]);
    printf("Q4: %d\n", arr[3]);
    printf("AXIS: %d", arr[4]);

    return 0;
}