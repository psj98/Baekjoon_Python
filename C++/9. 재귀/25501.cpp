#include <iostream>
#include <string.h>

using namespace std;

int cnt=0;

int recursion(const char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else{
        return recursion(s, l+1, r-1);
    } 
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main() {
    int n;
    char s[1001];
    scanf("%d", &n);

    for(int i=0; i<n ;i++){
        scanf("%s", s);
        printf("%d ", isPalindrome(s));
        printf("%d\n", cnt);
        cnt=0;
    }

    return 0;
}