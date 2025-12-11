#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> nums = {1,2,8,9,12,46,76,82,15,20,30};
    map<int,int> result;

    for (int i = 1; i <= 9; i++) {
        int count = 0;
        for (int n : nums)
            if (n % i == 0) count++;
        result[i] = count;
    }

    for (auto &p :  result)
        cout << p.first << ": " << p.second << endl;

    return 0;
}
