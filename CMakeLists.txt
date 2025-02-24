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
        "LeetCode/1760. Minimum Limit of Balls in a Bag.cpp"
        "LeetCode/1462. Course Schedule IV.cpp"
        "C++ (personal_works)/Сколько цифр необходимо преобрести относительно количества кабинетов.cpp"
        "C++ (personal_works)/helper.cpp"
        "LeetCode/3160. Find the Number of Distinct Colors Among the Balls.cpp"
        "LeetCode/2349. Design a Number Container System.cpp"
        "C++ (personal_works)/range_sum.cpp"
        "C++ (personal_works)/Calculator Versions/University Grading System.cpp"
        "LeetCode/889. Construct Binary Tree from Preorder and Postorder Traversal.cpp"
        "LeetCode/2467. Most Profitable Path in a Tree.cpp"
)
