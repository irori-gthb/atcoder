#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int P, Q, R;
  cin >> P >> Q >> R;

  cout << min({P + Q, Q + R, R + P}) << endl;
  return 0;
}