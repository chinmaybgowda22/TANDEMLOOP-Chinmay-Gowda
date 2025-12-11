#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;

    for (int i = 1; i <= A; i += 2) {
        cout << i;
        if (i + 2 <= A) cout << ", ";
    }

    return 0;
}
