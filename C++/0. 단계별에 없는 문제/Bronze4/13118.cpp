#include <iostream>

using namespace std;

int main() {
    int arr[4], x, y, r, ans=0;
    scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &x, &y, &r);

    for(int i=0; i<4; i++)
        if(x==arr[i])
            ans=i+1;
    
    printf("%d", ans);
    
    return 0;
}