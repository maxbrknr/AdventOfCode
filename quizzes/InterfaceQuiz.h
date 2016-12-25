//
// Created by Max B on 25.12.16.
//

#ifndef ADVENTOFCODE_INTERFACEQUIZ_H
#define ADVENTOFCODE_INTERFACEQUIZ_H

#include <string>

namespace quiz {
    class InterfaceQuiz {
    public:
        InterfaceQuiz(const std::string &name, unsigned int day, bool isDailyFirst) {
            this->name = name;
            this->day = day;
            this->isDailyFirst = isDailyFirst;
        }

        InterfaceQuiz() {
            this->name = "default";
            this->day = 0;
            this->isDailyFirst = false;
        }

        virtual ~InterfaceQuiz() {}

        const std::string &getName() const {
            return name;
        }

        unsigned int getDay() const {
            return day;
        }

        bool getIsDailyFirst() const {
            return isDailyFirst;
        }

        virtual int run() { return -1; }

    private:
        std::string name = "";
        unsigned int day = 0;
        bool isDailyFirst = true;
    };
}


#endif //ADVENTOFCODE_INTERFACEQUIZ_H
