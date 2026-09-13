cmake_minimum_required(VERSION 3.10)

# Здесь задаем версию проекта. Меняя её, вы меняете N в выводе программы
project(HelloWorld VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(hello_world src/main.cpp src/lib.cpp)

# Передаем версию проекта в код C++ как макрос
target_compile_definitions(hello_world PRIVATE PROJECT_VERSION="${PROJECT_VERSION}")