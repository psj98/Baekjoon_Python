#include <iostream>
#define MAX 1004000

using namespace std;

int arr[MAX]={1, 1, 0, 0};

int main() {
    int n;
    scanf("%d", &n);

    for(int i=2; i<=MAX; i++){
        for(int j=2; i*j<=MAX; j++){
            if(arr[i*j]==0) arr[i*j]=1;
        }
    }

    for(int i=n; i<=MAX; i++){
        bool check=false;
        if(!arr[i]){
            string s=to_string(i);
            for(int j=0; j<s.size()/2; j++){
                if(s[j]!=s[s.size()-j-1]){
                    check=true;
                    break;
                }
            }

            if(!check){
                printf("%d", i);
                return 0;
            }
        }
    }

    return 0;
}