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
    int A, B, C;
    cin >> A >> B >> C;
    int N_min = min(A, min(B, C));
    int N_max = max(A, max(B, C));
    cout << N_max - N_min << endl;
    
    return 0;
}