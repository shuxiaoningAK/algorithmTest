#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = a + b;

    string s = to_string(sum);

    string res;

    for (int i = s.size() - 1, j = 0; i >= 0; i--) {
        res = s[i] + res;
        j++;
        if (j % 3 == 0 && s[i - 1] != '-' && i) {
            res = ',' + res;
        }
    }


    cout << res << endl;


    return 0;
}