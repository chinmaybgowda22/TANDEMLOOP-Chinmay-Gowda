#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 1; i <= a; i += 2) {
        cout << i;
        if (i + 2 <= a) cout << ", ";
    }

    return 0;
}
