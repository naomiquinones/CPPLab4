#include <iostream>

using namespace std;

void getScores(double *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter score " << (i + 1) << ":" << endl;
        cin >> arr[i];
    }
}
int main() {
    int numTests = 0;
    cout << "How many test scores to process:" << endl;
    cin >> numTests;

    if (numTests > 0) {
        double *scores = new double[numTests];
        getScores(scores, numTests);
    }




    return 0;
}