#include <iostream>

using namespace std;

int map[400][400];

int main() {
    int n, m;
    scanf("%d", &n);

	m=4*n-3;
    
	int s=0, e=m-1;

	for(int i=0; i<n; i++){
		for(int j=s; j<=e; j++){
			map[s][j]=map[e][j]=map[j][s]=map[j][e]=1;
        }

		s+=2;
		e-=2;
	}

	for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(map[i][j]==1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

	return 0;
}