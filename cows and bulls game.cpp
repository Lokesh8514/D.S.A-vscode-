// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <random>
// #include <ctime>
#include<bits/stdc++.h>

using namespace std;

// Function to calculate cows and bulls
void getCowsAndBulls(const string& secret, const string& guess, int& cows, int& bulls) {
    cows = bulls = 0;
    vector<bool> guessed(secret.length(), false);
    vector<bool> matched(secret.length(), false);

    // First pass: check for bulls
    for (int i = 0; i < secret.length(); ++i) {
        if (guess[i] == secret[i]) {
            bulls++;
            guessed[i] = true;
            matched[i] = true;
        }
    }

    // Second pass: check for cows
    for (int i = 0; i < secret.length(); ++i) {
        if (!guessed[i]) {
            for (int j = 0; j < secret.length(); ++j) {
                if (!matched[j] && guess[i] == secret[j]) {
                    cows++;
                    matched[j] = true;
                    break;
                }
            }
        }
    }
}

// Function to generate a random 4-digit number without repeated digits
string generateSecretCode() {
    string digits = "0123456789";
    string secretCode = "";

    // Use std::random_device and std::shuffle to shuffle digits
    random_device rd;
    mt19937 g(rd());
    shuffle(digits.begin(), digits.end(), g);
    
    // Take the first 4 shuffled digits as the secret code
    secretCode = digits.substr(0, 4);

    return secretCode;
}

// Function to generate all possible 4-digit combinations without repeated digits
vector<string> generateAllPossibleGuesses() {
    vector<string> possibilities;
    string digits = "0123456789";

    // Generate all 4-digit numbers (without repeated digits)
    do {
        possibilities.push_back(digits.substr(0, 4));
    } while (next_permutation(digits.begin(), digits.end()));

    return possibilities;
}

// Function to filter guesses based on cows and bulls feedback
vector<string> filterGuesses(const vector<string>& possibleGuesses, const string& lastGuess, int cows, int bulls) {
    vector<string> filteredGuesses;

    for (const string& guess : possibleGuesses) {
        int tempCows, tempBulls;
        getCowsAndBulls(guess, lastGuess, tempCows, tempBulls);

        if (tempCows == cows && tempBulls == bulls) {
            filteredGuesses.push_back(guess);
        }
    }

    return filteredGuesses;
}

// Mode 1: Computer guesses and user provides feedback
void computerGuessesMode() {
    vector<string> possibleGuesses = generateAllPossibleGuesses();
    int cows = 0, bulls = 0, guessCount = 0;

    cout << "You need to think of a 4-digit secret code (no repeated digits)!" << endl;
    string lastGuess;

    while (bulls < 4 && !possibleGuesses.empty()) {
        guessCount++;

        // Randomly select a guess from the remaining possibilities
        int randomIndex = rand() % possibleGuesses.size();
        lastGuess = possibleGuesses[randomIndex];
        cout << "Computer's guess #" << guessCount << ": " << lastGuess << endl;

        // User provides feedback on bulls and cows
        cout << "Enter number of bulls (correct digits in correct place): ";
        cin >> bulls;

        if (bulls == 4) {
            cout << "The computer guessed your number correctly: " << lastGuess << endl;
            break;
        }

        cout << "Enter number of cows (correct digits in wrong place): ";
        cin >> cows;

        // Filter out impossible guesses based on user feedback
        possibleGuesses = filterGuesses(possibleGuesses, lastGuess, cows, bulls);

        if (possibleGuesses.empty()) {
            cout << "Error: No possible guesses left based on the clues. Check the feedback for consistency." << endl;
            break;
        }
    }
}

// Mode 2: User guesses and computer provides feedback
void userGuessesMode() {
    string secretCode = generateSecretCode();
    int cows = 0, bulls = 0, guessCount = 0;
    string userGuess;

    cout << "The computer has generated a 4-digit secret code (without repeated digits)." << endl;

    // User keeps guessing until they get 4 bulls
    do {
        guessCount++;
        cout << "\nAttempt #" << guessCount << ": Enter your 4-digit guess: ";
        cin >> userGuess;

        if (userGuess.length() != 4) {
            cout << "Invalid input! Please enter a 4-digit number." << endl;
            continue;
        }

        // Check for cows and bulls
        getCowsAndBulls(secretCode, userGuess, cows, bulls);

        // Provide feedback to the user
        cout << "Bulls: " << bulls << ", Cows: " << cows << endl;

    } while (bulls < 4);  // Loop until the user guesses the secret code

    cout << "\nCongratulations! You've guessed the secret code: " << secretCode << " in " << guessCount << " attempts!" << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator

    int mode;
    cout << "Welcome to the Cows and Bulls Game!" << endl;
    cout << "Choose a mode:\n1. Computer guesses your code\n2. You guess the computer's code" << endl;
    cout << "Enter 1 or 2: ";
    cin >> mode;

    if (mode == 1) {
        computerGuessesMode();
    } else if (mode == 2) {
        userGuessesMode();
    } else {
        cout << "Invalid input. Please enter 1 or 2." << endl;
    }

    return 0;
}
