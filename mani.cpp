#include <iostream>

int main() {
    // simple fixed-size array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array elements: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << (i + 1 < n ? ", " : "\n");
    }

    // compute sum and average
    int sum = 0;
    for (int i = 0; i < n; ++i) sum += arr[i];
    double avg = static_cast<double>(sum) / n;
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << avg << "\n";

    // modify an element
    arr[2] = 10; // set third element to 10
    std::cout << "After modification: ";
    for (int i = 0; i < n; ++i) std::cout << arr[i] << (i + 1 < n ? " " : "\n");

    return 0;
}