#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  cout << S.replace(S.find("HAGIYA"), 6, "HAGIXILE") << endl;
  return 0;
}