#include <iostream>

using namespace std;

int main() {
    int numTests = 0;
    cout << "How many test scores to process:" << endl;
    cin >> numTests;

    if (numTests > 0) {
        double *scores = new double[numTests];
        for (int i = 0; i < numTests; i++) {
            cout << "Enter score " << (i + 1) << ":" << endl;
            cin >> scores[i];
        }
    }




    return 0;
}