#include <iostream>

using namespace std;

int arr[1000];

void check(string num, int strike, int ball){
    for(int i=123; i<=987; i++){
        int st_check=0, ball_check=0;
        if(arr[i]==1) continue;
        
        // ÀÚ¸´¼ö ºñ±³
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(num[j]==to_string(i)[k]){
                    if(j==k) st_check++;
                    else ball_check++;
                }
            }
        }

        if(strike!=st_check || ball!=ball_check) arr[i]=1;
    }
}

int main() {
    int n, ans=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int num, a, b;
        scanf("%d %d %d", &num, &a, &b);

        string s=to_string(num);
        check(s, a, b);
    }
    
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            for(int k=1; k<=9; k++){
                if(i!=j && j!=k && k!=i && arr[i*100+j*10+k]==0) ans++;
            }   
        }
    }

    printf("%d", ans);

    return 0;
}