#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  cout << (1900 * M + (N - M) * 100) * pow(2, M) << endl;
  return 0;
}