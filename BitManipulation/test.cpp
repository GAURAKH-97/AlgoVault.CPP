#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num;

    cout << "Enter decimal number: ";
    cin >> num;

    // Original 32-bit binary
    bitset<32> binary(num);

    // 1's complement
    bitset<32> onesComplement = ~binary;

    cout << "\nOriginal Decimal : " << num << endl;
    cout << "Binary (32-bit)  : " << binary << endl;

    cout << "\n1's Complement Binary : " << onesComplement << endl;
    cout << "1's Complement Decimal: "
         << onesComplement.to_ulong() << endl;

    return 0;
}