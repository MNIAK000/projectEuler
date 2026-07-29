cmake_minimum_required(VERSION 4.2)
project(euler)

set(CMAKE_CXX_STANDARD 20)

add_executable(euler 0-10/problemZero.cpp
        0-10/multiplesOf3Or5.cpp
        0-10/evenFibonacciNumbers.cpp
        0-10/largestPrimeFactor.cpp
        "0-10/Largest Palindrome Product.cpp"
        "0-10/Smallest Multiple.cpp"
        "0-10/Sum Square Difference.cpp"
        "0-10/10 001st Prime.cpp"
        "0-10/Largest Product in a Series.cpp"
        "0-10/Special Pythagorean Triplet.cpp"
        "0-10/Summation of Primes.cpp")
