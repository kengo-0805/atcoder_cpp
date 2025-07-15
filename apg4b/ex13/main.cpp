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
    int N;
    cin >> N;
    vector<int> score;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        int s;
        cin >> s;
        score.push_back(s);
        sum += s;
    }
    for (int i = 0; i < N; i++) {
        cout << abs(sum / N - score.at(i))<< endl;
    }


    return 0;
}