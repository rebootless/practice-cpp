
#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    int k;

    cout << "Plaintext: ";
    getline(cin, text);

    cout << "Key: ";
    cin >> k;

    k = (k % 26 + 26) % 26;

    for (char &c : text) {
        if (c >= 'a' && c <= 'z')
            c = 'a' + (c - 'a' + k) % 26;
        else if (c >= 'A' && c <= 'Z')
            c = 'A' + (c - 'A' + k) % 26;
    }

    cout << "Ciphertext: " << text << endl;

    return 0;
}
