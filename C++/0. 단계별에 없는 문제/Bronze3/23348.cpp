#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, n, m;
    scanf("%d %d %d %d", &a, &b, &c, &n);

    int ans[n]={0};

    for(int i=0; i<n; i++){
        int arr[3]={0};
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                scanf("%d", &m);
                arr[k]+=m;
            }
        }

        ans[i]=a*arr[0]+b*arr[1]+c*arr[2];
    }

    printf("%d", *max_element(ans, ans+n));

    return 0;
}