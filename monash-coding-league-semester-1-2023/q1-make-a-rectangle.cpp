#include <bits/stdc++.h>
using namespace std;

void solve(int l1, int l2, int l3) {
    int cutStick;

    if (l1 == l2) cutStick = l3;
    else if (l1 == l3) cutStick = l2;
    else if (l2 == l3) cutStick = l1;
    else {
        cutStick = 0;
        int max = l1;
        int sum = l2 + l3;

        if (l2 > max) {
            max = l2;
            sum = l1 + l3;
        }
        if (l3 > max) {
            max = l3;
            sum = l1 + l2;
        }

        if (max == sum) cout << "YES\n";
        else cout << "NO\n";
    }

    if (cutStick) {
        if (cutStick % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;

    int l1, l2, l3;
    for (int i = 0; i < t; i++) {
        cin >> l1 >> l2 >> l3;
        solve(l1, l2, l3);
    }
}
