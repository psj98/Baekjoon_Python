#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> v;

int main() {
    int n, a, b, w=0, h=0, widx, hidx;
    scanf("%d", &n);

    for(int i=0; i<6; i++){
        scanf("%d %d", &a, &b);

        if(a==1 || a==2){
            if(w<b) w=b, widx=i;
        }
        else if(a==3 || a==4){
            if(h<b) h=b, hidx=i;
        }
        
        v.push_back(make_pair(a, b));
    }

    widx+=3, hidx+=3;

    printf("%d", n*(w*h-v[widx%6].second*v[hidx%6].second));

    return 0;
}