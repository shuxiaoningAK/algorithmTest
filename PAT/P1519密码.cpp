#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;
typedef pair<string, string> PII;
vector<PII> vi;
int main() {
    
    int n;
    cin >> n;
    int news = 0;
    for (int i = 0; i < n; i++) {
        string id, pass;
        cin >> id >> pass;
        bool flag = true;
        for (int i = 0; i < pass.size(); i++) {
            if (pass[i] == '1') pass[i] = '@', flag = false;
            if (pass[i] == '0') pass[i] = '%', flag = false;
            if (pass[i] == 'l') pass[i] = 'L', flag = false;
            if (pass[i] == 'O') pass[i] = 'o', flag = false;
        }
        if (!flag) {
            news++;
            vi.push_back({id, pass});
        }
        
    }
    if (news == 0) {
        if (n == 1) printf("There is 1 account and no account is modified");
        else printf("There are %d accounts and no account is modified", n);
    }
    else {
        printf("%d\n", news);
        for (int i = 0; i < vi.size(); i++) {
            cout << vi[i].first << " " << vi[i].second << endl; 
        }
    }


    return 0;
}