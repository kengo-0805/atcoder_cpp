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
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
      cin >> A.at(i) >> B.at(i);
    }
   
    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> result(N, vector<char>(N, '-'));
    for (int i = 0; i < M; i++) {
      result.at(A.at(i) - 1).at(B.at(i) - 1) = 'o';
      result.at(B.at(i) - 1).at(A.at(i) - 1) = 'x';
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        cout << result.at(i).at(j);
        if (j != N){
            cout << " ";
        }
      }
      cout << endl;
    }
    return 0;
}