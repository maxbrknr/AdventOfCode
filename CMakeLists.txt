cmake_minimum_required(VERSION 3.6)
project(AdventOfCode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp quizzes/InterfaceQuiz.h quizzes/QuizHandler.cpp quizzes/QuizHandler.h)
add_executable(AdventOfCode ${SOURCE_FILES})