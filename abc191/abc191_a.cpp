#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int V, T, S, D;
  cin >> V >> T >> S >> D;

  if (V * T <= D && D <= V * S)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}