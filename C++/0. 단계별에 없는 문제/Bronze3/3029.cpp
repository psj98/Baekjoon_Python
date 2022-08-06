#include <iostream>

using namespace std;

int main() {
    char s1[9], s2[9];
    scanf("%s", s1);
	scanf("%s", s2);

    int h1=(s1[0]-'0')*10+s1[1]-'0';
    int h2=(s2[0]-'0')*10+s2[1]-'0';
    int m1=(s1[3]-'0')*10+s1[4]-'0';
    int m2=(s2[3]-'0')*10+s2[4]-'0';
    int se1=(s1[6]-'0')*10+s1[7]-'0';
    int se2=(s2[6]-'0')*10+s2[7]-'0';
    
    int s=se2-se1;
    int m=m2-m1;
    int h=h2-h1;
    if(s<0) s+=60, m--;
    if(m<0) m+=60, h--;
    if(h<0) h+=24;

    if(h==0 && m==0 && s==0) printf("24:00:00");
    else printf("%02d:%02d:%02d", h, m, s);

    return 0;
}