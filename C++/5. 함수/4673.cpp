#include <iostream>
#define MAX 10001

using namespace std;

bool check[10001]={false};

void d(){
    for(int i=1; i<MAX; i++){
        int a=i%10+(i/10)%10+(i/100)%10+i/1000;
        int sum=i+a;
        check[sum]=true;
    }
}

int main(){
    d();
    for(int i=1; i<MAX; i++)
        if(!check[i])
            printf("%d\n", i);

    return 0;
}