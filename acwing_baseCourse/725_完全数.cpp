#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n -- ) {
        int x, sum = 0;
        cin >> x;
        for (int i = 1; i * i  < x; i++) {
            if (x % i == 0) {
                if (i < x) sum += i;
                if (x / i < x) sum += (x / i);
            }
        }
        
        if (sum == x) printf("%d is perfect\n", x);
        else printf("%d is not perfect\n", x);
    }
    return 0;
    
}
 