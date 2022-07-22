#include <iostream>
#include <math.h>

using namespace std;

// °³¼ö, start, end
void hanoi(int n, int s, int e){
    if(n==1){
        printf("%d %d\n", s, e);
        return;
    }
    
    hanoi(n-1, s, 6-s-e); // 1->2
    printf("%d %d\n", s, e);
    hanoi(n-1, 6-s-e, e); // 2->3
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", int(pow(2, n))-1);
    hanoi(n, 1, 3);
}