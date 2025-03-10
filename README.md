# Algorithm Design Manual - C++ Implementations

This repository contains C++ implementations of algorithms and data structures from "The Algorithm Design Manual". The code is organized as modular components that can be both run independently and integrated into other C++ projects.

## Project Structure

```
.
├── README.md
└── code/         # C++ implementation modules
```

## Building and Running

### Prerequisites
- C++ compiler (clang) with C++17 support
- Make (optional, but recommended)

### Compiling Individual Programs

To compile a single program:
```bash
clang -std=c++17 -Wall -Wextra -Werror code/your_program.cpp -o program
```

Run the compiled program:
```bash
./program
```

### Using as a Library

To use these implementations in your own projects:

1. Copy the desired source files to your project
2. Include the header files in your code:
   ```cpp
   #include "path/to/algorithm.hpp"
   ```
3. Compile with the source files:
   ```bash
   clang -std=c++17 your_program.cpp path/to/algorithm.cpp -o program
   ```

## C++ Best Practices & Memory Safety

### Smart Pointers
- Use `std::unique_ptr` for exclusive ownership
- Use `std::shared_ptr` for shared ownership
- Avoid raw pointers (`*`) except for non-owning references

### RAII (Resource Acquisition Is Initialization)
- Use RAII containers like `std::vector`, `std::string`
- Implement destructors for proper cleanup
- Use smart pointers for automatic memory management

### Container Safety
- Prefer `std::array` over C-style arrays
- Use `at()` instead of `[]` for bounds-checked access
- Use range-based for loops when possible

### General Guidelines
- Enable compiler warnings (`-Wall -Wextra -Werror`)
- Use `const` wherever possible
- Initialize variables upon declaration
- Use `nullptr` instead of `NULL` or `0`
- Avoid manual memory management (new/delete)
- Consider using `std::optional` for nullable values

### Common Pitfalls to Avoid
- Buffer overflows
- Dangling pointers
- Memory leaks
- Uninitialized variables
- Double deletion

## Contributing

1. Create a new file in the `code/` directory for your implementation
2. Follow the established naming conventions
3. Include comprehensive comments and documentation
4. Add test cases to verify correctness

## License

This project is intended for educational purposes. Feel free to use and modify the code as needed for learning algorithms and data structures.
