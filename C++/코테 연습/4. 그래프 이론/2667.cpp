#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 26

using namespace std;

int n, cnt=0;
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, -1, 1};
int map[MAX][MAX];
string coord[MAX];
vector<int> v;

void dfs(int x, int y){
    map[x][y]=1;
    cnt++;

    for(int i=0; i<4; i++){
        int tx=dx[i]+x;
        int ty=dy[i]+y;
        if(tx>=0 && tx<n && ty>=0 && ty<n && coord[tx][ty]=='1' && map[tx][ty]==0)
            dfs(tx, ty);
    }
}

int main() {
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> coord[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cnt=0;
            if(map[i][j]==0 && coord[i][j]=='1')
                dfs(i, j);

            if(cnt!=0)
                v.push_back(cnt);
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << "\n";
    
    for(int i=0; i<v.size(); i++)
        cout << v[i] << "\n";

    return 0;
}