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
        "0-10/Summation of Primes.cpp"
        "11-20/Largest Product in a Grid.cpp"
        "11-20/Highly Divisible Triangular Number.cpp"
        "11-20/Large Sum.cpp"
        "11-20/Longest Collatz Sequence.cpp"
        "11-20/Lattice Paths.cpp"
        "11-20/Power Digit Sum.cpp"
        "11-20/Number Letter Counts.cpp"
        "11-20/Maximum Path Sum I.cpp"
        "11-20/Counting Sundays.cpp"
        "11-20/Factorial Digit Sum.cpp")
