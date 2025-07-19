#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())


int main() {
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++) {
      cin >> A.at(i);
    }
    for (int i = 0; i < N; i++) {
      cin >> P.at(i);
    }
   
    // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
    // ここにプログラムを追記
    int count = 0;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (A.at(i) + P.at(j) == S) {
          count++;
        }
      }
    }
    cout << count << endl;
    
    
    
    return 0;
}