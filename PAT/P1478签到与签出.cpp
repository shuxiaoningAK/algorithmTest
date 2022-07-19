#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int m;
    string min_time = "23:59:59";
    string left_id, right_id;
    string max_time = "00:00:00";
    cin >> m;

    while (m --) {
        string id, in_time, out_time;
        cin >> id >> in_time >> out_time;

        if (in_time < min_time) {
            min_time = in_time;
            left_id = id;
        }
        if (out_time > max_time) {
            max_time = out_time;
            right_id = id;
        }
    }

    cout << left_id << " " << right_id << endl;
    return 0;
}