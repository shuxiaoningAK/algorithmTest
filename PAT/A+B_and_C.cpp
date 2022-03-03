#include <bits/stdc++.h>

using namespace std;


int n;
long long a, b, c;
int main() {
    cin >> n;
    int i = 0;
    while (n--) {
        cin >> a >> b >> c;
        if(a + b > c)
            printf("Case #%d: true", i++);
        else printf("Case #%d: false", i++);
    }

    return 0;
}