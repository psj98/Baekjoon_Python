#include <iostream>
#define MAX 46

using namespace std;

int A[MAX]={1};
int B[MAX]={0};

int main() {
	int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        A[i]=B[i-1];
        B[i]=A[i-1]+B[i-1];
    }

    printf("%d %d", A[n], B[n]);

	return 0;
}