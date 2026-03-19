#include <iostream>

using namespace std;

// Function prototype
int countPerfect(const int scores[], int size);

int main()
{
    int scores[20];
    int count = 0;
    int input;

    cout << "Enter up to 20 scores (0-100). Enter -1 to stop:\n"
         << endl;

    while (count < 20)
    {
        cout << "Enter the " << count + 1 << " number: ";
        cin >> input;
        cout << endl;

        while ((input < -1 || input > 100))
        {
            cout << "Re-enter the " << count + 1 << " number: ";
            cin >> input;
            cout << endl;
        }
        if (input == -1)
        {
            cout << "Stop entering number." << endl;
            break;
        }
        scores[count] = input;
        count++;
    }

    // COMPLETE THE FUNCTION BELOW
    int perfectOnes = countPerfect(scores, count-1);

    cout << "\nYou entered " << count << " scores." << endl;
    cout << "Perfect scores (100): " << perfectOnes << endl;

    return 0;
}

// Value-returning function to count scores of 100
int countPerfect(const int scores[], int size)
{
    int totalPerfect = 0;
    for (int index = 0; index <= size; index++)
    {
        if (scores[index] == 100)
        {
            totalPerfect += 1;
        }
    }
    return totalPerfect;
}
