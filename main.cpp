#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    int m = 0;
    int value = 0;
    vector<int> A;
    vector<int> B;

    cin >> n;
    // cout << n << endl;
    cin >> m;
    // cout << m << endl;

    for (int i = 0; i < n; ++i) {
        cin >> value;
        A.push_back(value);
        // cout << A[i] << " ";
    }
    // cout << endl;

    for (int i = 0; i < m; ++i) {
        cin >> value;
        B.push_back(value);
        // cout << B[i] << " ";
    }

    return 0;
}