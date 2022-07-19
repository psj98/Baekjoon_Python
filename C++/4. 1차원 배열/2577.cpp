// string으로 해결
#include <iostream>

using namespace std;

char arr[11];
int check[10];

int main(){
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);

    sum=a*b*c;
    string s=to_string(sum);
    
    for(int i=0; i<s.size(); i++)
        check[s[i]-'0']++;

    for(int i=0; i<10; i++)
        printf("%d\n", check[i]);

    return 0;
}