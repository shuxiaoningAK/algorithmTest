#include <bits/stdc++.h>

using namespace std;


vector<int> div(vector<int> &A, int b, int &r) {
    vector<int> c;

    int r = 0;
    for (int i = A.size() - 1; i >= 0; i--) {
        r = r * 10 + A[i];
        c.push_back(r / b);
        r %= b;
    }


    reverse(c.begin(), c.end());
    while (c.size() > 1 && c.back() == '0') c.pop_back();
    return c;
} 
int main() {
    string a;
    int b;
    vector<int> A;
    cin >> a >> b;

    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');

    int r;
    auto c = div(A, b, r);

    for (int i = c.size() - 1; i>= 0; i--) printf("%d", c[i]);
    cout << endl << r << endl;

    return 0;
}