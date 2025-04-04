#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << "10 = " << n/10 << '\n';
    n -= 10*(n/10);
    cout << "5 = " << n/5 << '\n';
    n -= 5*(n/5);
    cout << "2 = " << n/2 << '\n';
    n -= 2*(n/2);
    cout << "1 = " << n;
}
