#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        string s;
        cin >> s;

        if(s=="anj"){
            printf("����;");
            return 0;
        }
    }

    printf("����?");

    return 0;
}