#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  rep(i, (N - 1) / 9 + 1) cout << (N - 1) % 9 + 1;
  cout << endl;
  return 0;
}