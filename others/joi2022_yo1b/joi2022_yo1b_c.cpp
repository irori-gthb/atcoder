#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  rep(i, N - 1) if (S[i + 1] == 'J') cout << S[i] << endl;
  return 0;
}