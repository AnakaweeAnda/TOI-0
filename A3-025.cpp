#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,w,l;
    cin >> n >> w >> l;
    vector<int> holes[n+1];
    for(int i=1;i<=n;i++) {
        int k;
        cin >> k;
        holes[i].resize(k);
        for(int j=0;j<k;j++) {
            cin >> holes[i][j];
        }
    }
    for(int i=1;i<=w;i++) {
        bool can = true;
        for(int j=1;j<=n;j++) {
            auto it1 = lower_bound(all(holes[j]),i-l);
            auto it2 = upper_bound(all(holes[j]),i+l);
            if(it2 - it1 < 1) {
                can = false;
                break;
            } 
        }
        if(can) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
