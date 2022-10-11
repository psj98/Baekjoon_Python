#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main() {
    int a, k, sum=0;
    scanf("%d", &k);

    for(int i=0; i<k; i++){
        scanf("%d", &a);

        if(a==0 && !s.empty()){
            s.pop();
        }

        else if(a!=0){
            s.push(a);
        }
    }    

    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }

    printf("%d", sum);

    return 0;
}