cmake_minimum_required(VERSION 3.15)
project(leetcode C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c one_question_per_day/translateNum.c one_question_per_day/isPalindrome.c)