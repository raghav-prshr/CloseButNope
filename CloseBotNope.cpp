#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    int low = 1, high = 100;
    int guess, lastGuess;

    cout << "🎯 Guess the number between 1 and 100\n";
    cout << "You have 6 attempts!\n\n";

    for (int attempt = 1; attempt <= 6; attempt++) {
        cout << "Attempt " << attempt << ": ";
        cin >> guess;
        lastGuess = guess;

        int lowOptionLow = guess + 1;
        int lowOptionHigh = high;

        int highOptionLow = low;
        int highOptionHigh = guess - 1;

        int lowSize = (lowOptionLow <= lowOptionHigh) 
                    ? (lowOptionHigh - lowOptionLow + 1) : 0;

        int highSize = (highOptionLow <= highOptionHigh) 
                     ? (highOptionHigh - highOptionLow + 1) : 0;

        // Choose option that keeps range >= 3 (avoid trap)
        bool canLow = (lowSize >= 3);
bool canHigh = (highSize >= 3);

if (canLow && canHigh) {
    // both safe → choose randomly
    if (rand() % 2) {
        cout << "Too low!\n";
        low = lowOptionLow;
        high = lowOptionHigh;
    } else {
        cout << "Too high!\n";
        low = highOptionLow;
        high = highOptionHigh;
    }
}
else if (canLow) {
    cout << "Too low!\n";
    low = lowOptionLow;
    high = lowOptionHigh;
}
else if (canHigh) {
    cout << "Too high!\n";
    low = highOptionLow;
    high = highOptionHigh;
}
else {
    // both risky → choose larger side
    if (lowSize > highSize) {
        cout << "Too low!\n";
        low = lowOptionLow;
        high = lowOptionHigh;
    } else {
        cout << "Too high!\n";
        low = highOptionLow;
        high = highOptionHigh;
    }
}
    }

    // 🎯 Psychological Ending
    int finalNumber;

    if (high - low + 1 == 2) {
        // Ensure opposite of last guess
        if (lastGuess == low) finalNumber = high;
        else finalNumber = low;
    } else {
        // Pick farthest from last guess
        if (abs(lastGuess - low) < abs(lastGuess - high)) {
            finalNumber = high;
        } else {
            finalNumber = low;
        }
    }

    cout << "\n💀 You lost!\n";
    cout << "The number was: " << finalNumber << endl;

    return 0;
}