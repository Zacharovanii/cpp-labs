cmake_minimum_required(VERSION 3.28.3)
project(cpp_labs)

set(CMAKE_CXX_STANDARD 14)

add_executable(l12_1 lesson12/Task1.cpp)
add_executable(l12_2 lesson12/Task2.cpp)

add_executable(Pr4_1
        Pract4/Task1.cpp
        Pract4/functions.cpp
)

add_executable(Pr4_2
        Pract4/Task2.cpp
        Pract4/functions.cpp
)

add_executable(Pr4_3
        Pract4/Task3.cpp
        Pract4/functions.cpp
)

add_executable(Pr4_4
        Pract4/Task4.cpp
        Pract4/functions.cpp
)

add_executable(Pr4_5
        Pract4/Task5.cpp
        Pract4/functions.cpp
)

add_executable(lesson14
        lesson14/Car.cpp
lesson14/Animal.cpp
lesson14/main.cpp
)

add_executable(lesson15
        lesson15/Car.cpp
        lesson15/Animal.cpp
        lesson15/main.cpp
)

add_executable(lesson13
        lesson13/main.cpp
        lesson13/Car/Car.cpp
        lesson13/Animal/Animal.cpp
)

add_executable(Pract5
        Pract5/Snack.cpp
        Pract5/SnackSlot.cpp
        Pract5/VendingMachine.cpp
        Pract5/main.cpp
)