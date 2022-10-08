#include <iostream>

using namespace std;

int main() {
    int n, l, start=-1, end;
    scanf("%d %d", &n, &l);

    for(int i=l; i<=100; i++){
        int a=i*(i-1)/2;
        if((n-a)%i==0 && (n-a)/i>=0){
            start=(n-a)/i;
            end=i;
            break;
        }
    }
    
    if(start<0) printf("-1");
    else{
        for(int i=start; i<start+end; i++)
            printf("%d ", i);
    }

    return 0;
}