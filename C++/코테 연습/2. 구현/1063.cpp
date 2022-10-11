#include <iostream>

using namespace std;

int chess[8][8];
int dx[8]={1, -1, 0, 0, 1, -1, 1, -1};
int dy[8]={0, 0, -1, 1, 1, 1, -1, -1};

int main() {
    int n;
    string king, rock, s;
    cin >> king >> rock >> n;

    int kx, ky, rx, ry;
    kx=king[0]-'A';
    ky=king[1]-'0'-1;
    rx=rock[0]-'A';
    ry=rock[1]-'0'-1;

    for(int i=0; i<n; i++){
        int cnt=0;
        cin >> s;

        if(s=="R") cnt=0;
        else if(s=="L") cnt=1;
        else if(s=="B") cnt=2;
        else if(s=="T") cnt=3;
        else if(s=="RT") cnt=4;
        else if(s=="LT") cnt=5;
        else if(s=="RB") cnt=6;
        else if(s=="LB") cnt=7;

        int nx=kx+dx[cnt];
        int ny=ky+dy[cnt];

        if(nx<0 || nx>7 || ny<0 || ny>7) continue;

        if(nx==rx && ny==ry){
            int nrx=rx+dx[cnt];
            int nry=ry+dy[cnt];

            if(nrx<0 || nrx>7 || nry<0 || nry>7) continue;
            else rx=nrx, ry=nry;
        }

        kx=nx, ky=ny;
    }

    cout << char(kx+'A') << ky+1 << "\n";
    cout << char(rx+'A') << ry+1;

    return 0;
}