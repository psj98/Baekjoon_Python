#include <iostream>

using namespace std;

int arr[5][5];

bool check(int n){
    int bingo=0, sum=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j]==n){
                arr[i][j]=0;
                break;
            }
        }
    }

    // 가로 체크
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++)
            sum+=arr[i][j];
        
        if(sum==0) bingo++;
        sum=0;
    }

    // 세로 체크
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++)
            sum+=arr[j][i];
        
        if(sum==0) bingo++;
        sum=0;
    }

    // 대각선 체크
    for(int i=0; i<5; i++)
        sum+=arr[i][i];

    if(sum==0) bingo++;

    sum=0;
    for(int i=0; i<5; i++)
        sum+=arr[i][4-i];

    if(sum==0) bingo++;

    // printf("%d\n", bingo);

    if(bingo>=3) return true;
    else return false;
}

int main() {
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            scanf("%d", &arr[i][j]);

    for(int i=0; i<25; i++){
        int n;
        scanf("%d", &n);

        bool ans=check(n);

        if(ans){
            printf("%d", i+1);
            return 0;
        }
    }
    
    return 0;
}