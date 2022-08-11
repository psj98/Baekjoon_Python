#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        string s;
        cin >> s;

        if(s=="anj"){
            printf("构具;");
            return 0;
        }
    }

    printf("构具?");

    return 0;
}