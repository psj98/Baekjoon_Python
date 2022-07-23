#include <iostream>

using namespace std;

int series(int a){
    int i=666, num=0;
    string t;

    while(1){
        t=to_string(i);

        for(int j=0; j<t.length()-2; j++){
            if(t[j]=='6' && t[j+1]=='6' && t[j+2]=='6'){
                num++;
                if(num==a)
                    return i;
                break;
            }
        }
        i++;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", series(n));
}