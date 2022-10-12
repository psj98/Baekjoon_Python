#include <iostream>
#define MAX 21

using namespace std;

int map[MAX][MAX];

int main() {
    for(int i=1; i<MAX-1; i++)
        for(int j=1; j<MAX-1; j++)
            scanf("%d", &map[i][j]);

    for(int i=1; i<MAX-1; i++){
        for(int j=1; j<MAX-1; j++){
            int cnt=0;
            bool check=false;
            if(map[i][j]!=0){
                // 가로
                if(j+4<MAX-1){
                    for(int k=1; k<5; k++){
                        if(map[i][j]!=map[i][j+k]){
                            check=true;
                            break;
                        }
                    }

                    if(!check && map[i][j]!=map[i][j+5] && map[i][j]!=map[i][j-1]){
                        printf("%d\n%d %d", map[i][j], i, j);
                        return 0;
                    }
                }

                // 세로
                cnt=0, check=false;
                if(i+4<MAX-1){
                    for(int k=1; k<5; k++){
                        if(map[i][j]!=map[i+k][j]){
                            check=true;
                            break;
                        }
                    }

                    if(!check && map[i][j]!=map[i+5][j] && map[i][j]!=map[i-1][j]){
                        printf("%d\n%d %d", map[i][j], i, j);
                        return 0;
                    }
                }

                // 대각선
                cnt=0, check=false;
                if(i+4<MAX-1 && j+4<MAX-1){
                    for(int k=1; k<5; k++){
                        if(map[i][j]!=map[i+k][j+k]){
                            check=true;
                            break;
                        }
                    }

                    if(!check && map[i][j]!=map[i+5][j+5] && map[i][j]!=map[i-1][j-1]){
                        printf("%d\n%d %d", map[i][j], i, j);
                        return 0;
                    }
                }

                cnt=0, check=false;
                if(i+4<MAX-1 && j-4>0){
                    for(int k=1; k<5; k++){
                        if(map[i][j]!=map[i+k][j-k]){
                            check=true;
                            break;
                        }
                    }

                    if(!check && map[i][j]!=map[i+5][j-5] && map[i][j]!=map[i-1][j+1]){
                        printf("%d\n%d %d", map[i][j], i+4, j-4);
                        return 0;
                    }
                }
            }
        }
    }

    printf("0");

    return 0;
}