#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while(cin >> a >> b >> c){
        printf("%d\n", max(b-a, c-b)-1);
    }

    return 0;
}