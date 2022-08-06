#include <iostream>
#include <algorithm>

using namespace std;

int arr[4];

int main() {
    int a, b, c, d, cnt=0, ans=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    arr[0]=a/c+b/d;
    arr[1]=c/d+a/b;
    arr[2]=d/b+c/a;
    arr[3]=b/a+d/c;

    double m=double(*max_element(arr, arr+4));
    for(int i=0; i<4; i++)
        if(m==arr[i])
            ans=i;

    printf("%d", ans);

    return 0;
}