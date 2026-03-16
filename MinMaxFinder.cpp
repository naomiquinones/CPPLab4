#include <iostream>
using namespace std;

void findMinAndMax(const int arr[], int size, int* min, int* max) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}
int main() {
    int SIZE = 11;
    int numbers[] = {45,-4,-84,67,19,-23,8,92,51,-129,73};
    int min = numbers[0];
    int max = numbers[0];

    findMinAndMax(numbers, SIZE, &min, &max);

    cout << "The minimum value is " << min << endl;
    cout << "The maximum value is " << max << endl;

    return 0;
}