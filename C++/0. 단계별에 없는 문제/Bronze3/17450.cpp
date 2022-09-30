#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    double arr[3];
    for(int i=0; i<3; i++){
        scanf("%d %d", &a, &b);
        double m=a*10;
        double w=b*10;
        if(m>=5000) m-=500;

        arr[i]=w/m;
    }

    double c=*max_element(arr, arr+3);
    for(int i=0; i<3; i++){
        if(arr[i]==c){
            if(i==0) printf("S");
            else if(i==1) printf("N");
            else if(i==2) printf("U");
            break;
        }
    }

    return 0;
}