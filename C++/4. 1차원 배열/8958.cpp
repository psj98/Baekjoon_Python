#include <iostream>

using namespace std;

char arr[81];

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int sum=0, cnt=1;
        scanf("%s", arr);

        string s=arr; // char to string
        
        for(int j=0; j<s.size(); j++){
            if(s[j]=='O'){
                sum+=cnt;
                cnt++;
            }
            else cnt=1;
        }

        printf("%d\n", sum);
    }

    return 0;
}