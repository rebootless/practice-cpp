
#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;

    cout << "Ciphertext: ";
    getline(cin, text);

    for (int k = 0; k < 26; k++) {
        string result = text;

        for (char &c : result) {
            if (c >= 'a' && c <= 'z')
                c = 'a' + (c - 'a' - k + 26) % 26;
            else if (c >= 'A' && c <= 'Z')
                c = 'A' + (c - 'A' - k + 26) % 26;
        }

        cout << "k = " << k << ": " << result << endl;
    }

    return 0;
}
