#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        vector<float> v;
        int stu, cnt=0;
        float sum=0, a;
        scanf("%d", &stu);
        
        for(int j=0; j<stu; j++){
            scanf("%f", &a);
            sum+=a;
            v.push_back(a);
        }

        sum/=v.size();
        
        for(int j=0; j<v.size(); j++)
            if(sum<v[j])
                cnt++;

        printf("%.3f%%\n", float(cnt)/float(v.size())*100);
    }

    return 0;
}