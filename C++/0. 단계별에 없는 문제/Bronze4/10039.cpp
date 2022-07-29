#include <iostream>

using namespace std;

int main() {
	int a, sum=0;
    for(int i=0; i<5; i++){
        scanf("%d", &a);
        if(a>=40) sum+=a;
        else sum+=40;
    }

    printf("%d", sum/5);

    return 0;
}