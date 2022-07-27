#include <iostream>

using namespace std;

int main() {
    int w, h, x, y, p, px, py, cnt=0;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &p);

    for(int i=0; i<p; i++){
        scanf("%d %d", &px, &py);

        if((px<=x+w && px>=x && py<=y+h && py>=y) || (x-px)*(x-px)+(y+h/2-py)*(y+h/2-py)<=(h/2)*(h/2) || (x+w-px)*(x+w-px)+(y+h/2-py)*(y+h/2-py)<=(h/2)*(h/2)) cnt++;
    }

    printf("%d", cnt);

    return 0;
}