#include <iostream>

using namespace std;

char c[4]={'A', 'C', 'G', 'T'};
int dna[4]; // A C G T
string s[1001];

int main() {
    string ans;
    int n, m, cnt=0;
    cin >> n >> m;

    for(int i=0; i<n; i++)
        cin >> s[i];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(s[j][i]=='A') dna[0]++;
            else if(s[j][i]=='C') dna[1]++;
            else if(s[j][i]=='G') dna[2]++;
            else if(s[j][i]=='T') dna[3]++;
        }

        int t=dna[0];
        char a=c[0];
        for(int j=1; j<4; j++){
            if(t<dna[j]){
                t=dna[j];
                a=c[j];
            }
        }

        ans+=a;

        for(int j=0; j<n; j++){
            if(s[j][i]!=a) cnt++;
        }

        for(int j=0; j<4; j++)
            dna[j]=0;
    }

    cout << ans << "\n" << cnt;

    return 0;
}