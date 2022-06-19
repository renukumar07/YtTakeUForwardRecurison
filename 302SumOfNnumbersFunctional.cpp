#include <iostream>
using namespace std;

int sumFunction(int n) {
  if (n == 0) {
    return 0;
  }
  return n + sumFunction(n - 1);
}
int main() {
  int n;
  cin >> n;
  cout << sumFunction(n) << endl;
}