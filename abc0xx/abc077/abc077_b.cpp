#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = 1;
  while (ans * ans <= N) ans++;
  cout << (ans - 1) * (ans - 1) << endl;
  return 0;
}