//
// Created by Max B on 25.12.16.
//

#ifndef ADVENTOFCODE_QUIZHANDLER_H
#define ADVENTOFCODE_QUIZHANDLER_H

#include <map>

#include "InterfaceQuiz.h"

namespace quiz {
    class QuizHandler {
    public:
        QuizHandler();

        void registerQuiz(const InterfaceQuiz &quiz, unsigned int day, bool isDailyFirst);

        std::pair<bool, int> runQuiz(unsigned int day, bool isDailyFirst);

    private:
        std::map<std::pair<unsigned int, bool>, InterfaceQuiz &> registeredQuizzes;
    };
}

#endif //ADVENTOFCODE_QUIZHANDLER_H
