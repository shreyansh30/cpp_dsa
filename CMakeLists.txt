cmake_minimum_required(VERSION 3.31)
project(C__DSA)

set(CMAKE_CXX_STANDARD 14)

add_executable(C__DSA
        Arrays/revArray.cpp
        "Conditionals and Loops/comparision.cpp"
        "Conditionals and Loops/even.cpp"
        "Conditionals and Loops/factorial.cpp"
        "Conditionals and Loops/floyds_triangle.cpp"
        "Conditionals and Loops/hollow_pyramid.cpp"
        "Conditionals and Loops/inverted_triangle.cpp"
        "Conditionals and Loops/multiplication.cpp"
        "Conditionals and Loops/pyramid.cpp"
        "Conditionals and Loops/righ_aligned_triangle.cpp"
        "Conditionals and Loops/sum.cpp"
        Functions/countDigits.cpp
        Functions/factorials_rec.cpp
        Functions/revNum.cpp
        Functions/sumofDigits.cpp
        test.cpp
        Arrays/rotateArray.cpp
        Arrays/lar_secLar.cpp
        Arrays/sortedArr.cpp
        Arrays/frequencyCount.cpp
        Arrays/zeroShift.cpp
        Arrays/avgArray.cpp
        Arrays/oneTime.cpp
        Arrays/reverseArray.cpp
        Arrays/majorityElement.cpp
        Arrays/missingNum.cpp)
