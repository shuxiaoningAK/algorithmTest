#include <bits/stdc++.h>

using namespace std;

vector<int> mul(vector<int> &A, int b) {

    vector<int> c;
    int t;
    for (int i = 0; i < A.size(); i++) {
        if (i < A.size()) t += A[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    return c;
}
int main() {
    string a;   
    int b;
    vector<int> A;

    cin >> a >> b;

    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');

    auto c = mul(A, b);

    for (int i = c.size() - 1; i >= 0; i--) printf("%d", c[i]);

}