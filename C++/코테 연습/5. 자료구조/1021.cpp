#include <iostream>
#include <queue>

using namespace std;

deque<int> dq;

int main() {
    int n, m, cnt=0;
    scanf("%d %d", &n, &m);

    for(int i=1; i<=n; i++)
        dq.push_back(i);

    for(int i=0; i<m; i++){
        int a, left, right;
        scanf("%d", &a);

        for(int j=0; j<dq.size(); j++){
            if(dq[j]==a){
                left=j;
                right=dq.size()-j;
                break;
            }
        }

        if(left<=right){
            while(1){
                if(dq.front()==a){
                    dq.pop_front();
                    break;
                }

                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }

        else{
            while(1){
                if(dq.back()==a){
                    cnt++;
                    dq.pop_back();
                    break;
                }

                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}