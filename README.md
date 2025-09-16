# cpplox

## Description

A tree-walk interpreter for the Lox programming language, as described by 
Robert Nystrom's book "Crafting Interpreters

## Build instructions

Requires at least CMake 3.22, but will almost certainly work with a lower
version. If your version of CMake is lower than 3.22, it might be worth opening
`CMakeLists.txt`, and modifying the command

```cmake
cmake_minimum_version(VERSION 3.22)
```

to reflect your local version of CMake.

From the project root directory:

```bash
# Configure CMake
$ cmake -B build -S .

# Build
cmake --build build
```

## Execution instructions

If the build instructions were followed, the executable shoud reside at the
root of the `build` directory.

From the project root directory:

```bash
# Display a REPL interface
$ ./build/cpplox
```

## TODO

* [ ] Complete basic implementation of `class ErrorReporter`.
* [ ] Complete basic implementation of `class Lox`.
* [ ] Complete basic implementation of `class Scanner`.
* [ ] Complete basic implementation of `class Token`.
