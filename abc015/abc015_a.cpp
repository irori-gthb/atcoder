#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string A, B;
  cin >> A >> B;

  if (A.size() > B.size())
    cout << A << endl;
  else
    cout << B << endl;
  return 0;
}