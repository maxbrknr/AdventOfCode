#include <iostream>

#include "quizzes/QuizHandler.h"

int main() {

    quiz::QuizHandler quizHandler;

    std::cout << "Welcome to Max' Advent of Code App" << std::endl;
    std::cout << "##############################################" << std::endl;

    std::string input;

    std::cout << "Which day do you want to solve?" << std::endl << ">>";

    std::getline(std::cin, input);

    int day = 0;
    bool firstDailyQuizSelected = true;

    try {
        size_t posInt = 0;
        day = std::stoi(input, &posInt);

        if (posInt != input.size()) {
            try {
                int firstOrSecond = std::stoi(input.substr(posInt, input.size()));

                if (firstOrSecond == 2) {
                    firstDailyQuizSelected = false;
                }
            } catch (std::exception e) {
                std::cout << "could not read input whether first/second daily quiz: " << input << e.what();
            }
        }
    }
    catch (std::exception e) {
        std::cout << "could not read input: " << input << e.what();
        return -1;
    }

    std::cout << "Your entry as string was: " << input << " as int:" << std::stoi(input);

    std::pair<bool, int> result = quizHandler.runQuiz(day, true);

    std::cout << "+++ Daily Quiz " << day << " " << (firstDailyQuizSelected ? "a" : "b") << " +++" << std::endl;
    std::cout << "Quiz solution already implemented? " << (result.first ? "yes" : "no") << " result: " << result.second;

    return 0;
}