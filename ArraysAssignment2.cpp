#include <iostream>

using namespace std;

// Function prototype
int countPerfect(const int scores[], int size);

int main() {
    int scores[20];
    int count = 0;
    int input;

    cout << "Enter up to 20 scores (0-100). Enter -1 to stop:\n";

    // Store scores and keep track of how many are entered
    // Report perfect scores using the helper function
  // COMPLETE THE FUNCTION BELOW
  int perfectOnes = countPerfect(scores, count);
    
    cout << "\nYou entered " << count << " scores." << endl;
    cout << "Perfect scores (100): " << perfectOnes << endl;

    return 0;
}

// Value-returning function to count scores of 100
int countPerfect(const int scores[], int size) {
    int totalPerfect = 0;
    //COMPLETE THE CODE 
    return totalPerfect;
}
