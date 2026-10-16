#include <iostream>
using namespace std;

int main() {
    int a[] = {
        3, 7, 12, 18, 24, 29, 34, 41, 47, 52,
        58, 63, 69, 74, 81, 86, 92, 97, 103, 108,
        114, 119, 125, 131, 137, 142, 148, 153, 159, 164,
        170, 176, 181, 187, 193, 198, 204, 209, 215, 221,
        226, 232, 238, 243, 249, 255, 261, 267, 272, 278,
        283, 289, 295, 301, 306, 312, 318, 324, 329, 335,
        341, 346, 352, 358, 364, 370, 375, 381, 387, 393,
        398, 404, 410, 416, 421, 427, 433, 439, 444, 450,
        456, 462, 467, 473, 479, 485, 491, 496, 502, 508,
        514, 520, 525, 531, 537, 543, 549, 554, 560, 566
    };
    int n = 100;
    int x;

    cout << "Enter number: ";
    cin >> x;

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int middle = (left + right) / 2;

        cout << "Checking: " << a[middle] << endl;

        if (a[middle] == x) {
            cout << "Number found!" << endl;
            return 0;
        }

        if (x > a[middle])
            left = middle + 1;
        else
            right = middle - 1;
    }

    cout << "Number not found." << endl;

    return 0;
}
