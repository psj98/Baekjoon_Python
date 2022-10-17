#include <iostream>

using namespace std;

int arr[5];

int main() {
    int a, n, ans=-1, num=-1;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++) scanf("%d", &arr[j]);

        int m=0;
        for(int j=0; j<3; j++){
            for(int k=j+1; k<4; k++){
                for(int l=k+1; l<5; l++){
                    int sum=(arr[j]+arr[k]+arr[l])%10;
                    if(m<sum) m=sum;
                }
            }
        }

        if(num<=m){
            num=m;
            ans=i+1;
        }
    }

    printf("%d", ans);

    return 0;
}