# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.12)

# Define your project and its name
project(win32-error-output-stream-test)

# Add the source files for your project
add_executable(win32-error-output-stream-test
    main.cpp
)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Additional configuration for Windows
if (WIN32)
    # Specify any Windows-specific settings here
    # For example, if you are using Windows API functions
endif()
