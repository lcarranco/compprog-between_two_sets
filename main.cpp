#include <iostream>
#include <set>

using namespace std;

int main() {
    int n = 0;
    int m = 0;
    int value = 0;
    set<int> A;
    set<int> B;

    cin >> n;
    // cout << n << endl;
    cin >> m;
    // cout << m << endl;

    for (int i = 0; i < n; ++i) {
        cin >> value;
        // cout << value << endl;
        A.insert(value);
    }
    cout << endl;

    for (int i = 0; i < m; ++i) {
        cin >> value;
        // cout << value << endl;
        B.insert(value);
    }

    for (set<int>::iterator it = A.begin(); it != A.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    for (set<int>::iterator it = B.begin(); it != B.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}