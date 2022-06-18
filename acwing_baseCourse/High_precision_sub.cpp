#include <bits/stdc++.h>

using namespace std;


bool cmp(vector<int> &A, vector<int> &B) {
    if (A.size() != B.size()) return A.size() > B.size();
    else {
        for (int i = A.size() - 1; i >= 0; i--)
            if (A[i] != B[i]) return A[i] > B[i];
    }
}

vector<int> sub(vector<int> &A, vector<int> &B) {
    vector<int> c;

    for (int i = 0, t = 0; i < A.size(); i++) {
        t = A[i] - t;
        if (i < B.size()) t -= B[i];
        c.push_back((t + 10) % 10);
        if (t < 0) t = 1;
        else t = 0;
    }
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    return c;
}
int main() {
    string a, b;
    vector<int> A, B;

    cin >> a >> b;

    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
    for (int i = a.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');

    if (cmp(A, B)){
        auto c = sub(A, B);
        for (int i = c.size() - 1; i >= 0; i--) printf("%d", c[i]);
    } else {
        auto c = sub(A, B);
        printf("-");
        for (int i = c.size() - 1; i >= 0; i--) printf("%d", c[i]);
    }
}