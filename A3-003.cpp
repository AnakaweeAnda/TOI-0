#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n+1),b(n+1);
    a[0] = 1; b[0]=1;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++) {
        cin >> b[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++) {
        int sA = a[i],tA = a[i+1],sB = b[i],tB = b[i+1];
        if(sA >= tA) swap(sA,tA);
        if(sB >= tB) swap(sB,tB);
        if(sA < sB && sB < tA && (tA < tB  || tB < sA)) {
            ans++;
        }
        else if (sA < tB && tB < tA && (tA < sB || sB < sA)) {
            ans++;
        }
        else if(sA == sB && tA == tB) {
            ans++;
        }
    }
    cout << ans;
}
