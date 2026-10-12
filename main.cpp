#include <iostream>

// Lab 7 — Mason Ayala
// CIS 5 Week 07 · Two arrays

int main() {
    const int N = 5;
    int quiz[N] = { 88, 92, 71, 98, 86 };
    int lab[N] = { 72, 81, 94, 82, 100 };
    int quizSum = 0;
    int quizHi = quiz[0];
    int labSum = 0;
    int labHi = lab[0];

    std::cout << "Quiz\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "[" << i << "] " << quiz[i] << "\n";
        quizSum = quizSum + quiz[i];
        if (quiz[i] > quizHi) {
            quizHi = quiz[i];
        }
    }

    std::cout << "Sum: " << quizSum << "\n";
    std::cout << "High: " << quizHi << "\n";

    std::cout << "Lab\n";
    // the point of "[" << i << "] " is to create a format for the number representing i which is [2] plus the number that prints beside it "94" making: "[2] 94"
    // ++i moves to the next index.
    for (int i = 0; i < N; ++i) {
        std::cout << "[" << i << "] " << lab[i] << "\n";
        labSum = labSum + lab[i];
        if (lab[i] > labHi) {
            labHi = lab[i];
        }
    }

    std::cout << "Sum: " << labSum << "\n";
    std::cout << "High: " << labHi << "\n";

    return 0;
}
//Expected results:
// - Quiz sum : 435
// - Quiz high : 98
// - Lab sum : 429
// - Lab high : 100