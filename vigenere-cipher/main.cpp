
#include <iostream>
#include <string>

using namespace std;

int main() {
    string text, key;

    cout << "Plaintext: ";
    getline(cin, text);

    cout << "Key: ";
    getline(cin, key);

    string shifts;

    for (char c : key) {
        if (c >= 'a' && c <= 'z')
            shifts += c - 'a';
        else if (c >= 'A' && c <= 'Z')
            shifts += c - 'A';
    }

    int j = 0;

    for (char &c : text) {
        if (c >= 'a' && c <= 'z') {
            c = 'a' + (c - 'a' + shifts[j % shifts.size()]) % 26;
            j++;
        }
        else if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + shifts[j % shifts.size()]) % 26;
            j++;
        }
    }

    cout << "Ciphertext: " << text << endl;
}
