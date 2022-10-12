#include <iostream>

using namespace std;

int main() {
    int a, n, m, k, sum=0;
    scanf("%d %d %d", &n, &m, &k);

    int s=1, e=m;

    for(int i=0; i<k; i++){
        scanf("%d", &a);

        if(a>e){
            sum+=(a-e);
            s=a-m+1;
            e=a;
        }

        else if(a<s){
            sum+=(s-a);
            s=a;
            e=a+m-1;
        }
    }

    printf("%d", sum);

	return 0;
}