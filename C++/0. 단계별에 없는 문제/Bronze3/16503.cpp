#include <iostream>

using namespace std;

int cal(int a, int b, char op){
    int n;

    if(op=='+') n=a+b;
    else if(op=='-') n=a-b;
    else if(op=='*') n=a*b;
    else if(op=='/') n=a/b;

    return n;
}

int main() {
    int a, b, c;
    char s1, s2;
    scanf("%d %c %d %c %d", &a, &s1, &b, &s2, &c);

    int res1=cal(a, b, s1);
    res1=cal(res1, c, s2);

    int res2=cal(b, c, s2);
    res2=cal(a, res2, s1);

    if(res1<res2) printf("%d\n%d", res1, res2);
    else printf("%d\n%d", res2, res1);

    return 0;
}