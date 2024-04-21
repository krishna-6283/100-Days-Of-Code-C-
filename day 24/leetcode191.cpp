#include<iostream>
#include <cstdint>  // Include for uint32_t
using namespace std;

int hammingWeight(uint32_t n) {
    int count = 0;
    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main() {
    uint32_t n;
    cin >> n;
    int count = hammingWeight(n);
    cout << "Number of 1 bits: " << count << endl;

    return 0;
}
