//
// Created by Max B on 25.12.16.
//

#include <iostream>

#include "QuizHandler.h"

quiz::QuizHandler::QuizHandler() {
    std::cout << "quiz handler created";
}

void quiz::QuizHandler::registerQuiz(const InterfaceQuiz &quiz, unsigned int day, bool isDailyFirst) {
    std::cout << "register stuff";

    std::pair<unsigned int, bool> quizKey = std::make_pair(day, isDailyFirst);

    registeredQuizzes[quizKey] = quiz;
}

std::pair<bool, int> quiz::QuizHandler::runQuiz(unsigned int day, bool isDailyFirst) {
    bool quizFound = false;

    auto iterator = registeredQuizzes.find(std::make_pair(day, isDailyFirst));

    if (iterator != registeredQuizzes.end()) {
        quizFound = true;
        return std::make_pair(quizFound, iterator->second.run());
    } else {
        return std::make_pair(quizFound, -1);
    }
}