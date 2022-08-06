#include <iostream>

using namespace std;

int main() {
	int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n, p1=0, p2=0;
        cin >> n;

        for(int j=0; j<n; j++){
            char a, b;
            cin >> a >> b;

            if((a=='R' && b=='P') || (a=='P' && b=='S') || (a=='S' && b=='R')) p2++;
            else if((b=='R' && a=='P') || (b=='P' && a=='S') || (b=='S' && a=='R')) p1++;
        }

        if(p1>p2) printf("Player 1\n");
        else if(p1<p2) printf("Player 2\n");
        else printf("TIE\n");
    }

    return 0;
}