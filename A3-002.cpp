#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int dp[100005];
    dp[1] = 0;
    for(int i=2;i<=317;i++) {
        for(int j=i*i - 2*i + 2 ; j <= i*i && j<=100005 ; j++) {
            if((i+j)%2 == 0) {
                dp[j] = dp[j-1]+1;
            }
            else {
                dp[j] = dp[j-2*i+2]+1;
            }
        }
        dp[i*i-2*i+2] = dp[i*i-2*i+3]+1;
    }
    cout << dp[n];
}
