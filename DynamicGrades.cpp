#include <iostream>
#include <iomanip>

using namespace std;

void getScores(double *arr, int size) {
    if (size <= 0) {
        cout << "Invalid size for scores array." << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        cout << "Enter score " << (i + 1) << ":" << endl;
        cin >> arr[i];
    }
}
void sortScores(double *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printScores(double *arr, int size) {
    cout << "Printing Scores:" << endl;
    cout << fixed << setprecision(2);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
double calculateAverage(const double* arr, int size) {
    if (size <= 0) {
        cout << "Invalid size for scores array." << endl;
        return 0.0;
    }
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}
int main() {
    int numTests = 0;
    cout << "How many test scores to process:" << endl;
    cin >> numTests;

    if (numTests > 0) {
        double *scores = new double[numTests];
        getScores(scores, numTests);
        printScores(scores, numTests);
        sortScores(scores, numTests);
        printScores(scores, numTests);
        double average = calculateAverage(scores, numTests);
        cout << "Average Score: " << fixed << setprecision(2) << average << endl;
        delete[] scores;
        scores = nullptr;
    }




    return 0;
}