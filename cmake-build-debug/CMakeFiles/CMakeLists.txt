cmake_minimum_required(VERSION 3.16)
project(C-codes)

set(CMAKE_CXX_STANDARD 17)

# Используем GLOB для поиска всех .cpp файлов в текущей директории
file(GLOB_RECURSE SOURCES "*.cpp")
# Убедитесь, что SOURCES не пустой
if(NOT SOURCES)
    message(FATAL_ERROR "No .cpp files found in the project directory!")
endif()

# Создаем исполняемый файл
add_executable(C-codes ${SOURCES}
        "../../LeetCode/1760. Minimum Limit of Balls in a Bag.cpp"
        "../../LeetCode/2054. Two Best Non-Overlapping Events.cpp"
        "../../LeetCode/1792. Maximum Average Pass Ratio.cpp"
        "../../LeetCode/Answer/1792. Maximum Average Pass Ratio_ANSWER.cpp"
        "../../C++ (personal_works)/Star Pyramid Cycle.cpp"
        "../../C++ (personal_works)/Star Pyramid.cpp"
        "../../LeetCode/1930. Unique Length-3 Palindromic Subsequences.cpp"
        "../../C++ (personal_works)/Max_number_i3870.cpp"
        "../../LeetCode/29. Divide Two Integers.cpp")
