# Monster Database Application

This project is a cross-platform application for managing a database of monsters. Users can enter monster data through a graphical interface or import it from a file. The application is designed to run on both Windows and Linux.

## Project Structure

```
monster-database-app
├── src
│   ├── main.cpp          # Entry point of the application
│   ├── database.cpp      # Implementation of the Database class
│   ├── database.h        # Header file for the Database class
│   ├── monster.cpp       # Implementation of the Monster class
│   ├── monster.h         # Header file for the Monster class
│   └── utils.cpp         # Utility functions for file operations
│       └── utils.h       # Header file for utility functions
├── CMakeLists.txt        # CMake configuration file
└── README.md             # Project documentation
```

## Setup Instructions

1. **Clone the repository:**
   ```
   git clone <repository-url>
   cd monster-database-app
   ```

2. **Build the project:**
   - Ensure you have CMake installed.
   - Create a build directory:
     ```
     mkdir build
     cd build
     ```
   - Run CMake and build:
     ```
     cmake ..
     make
     ```

## Usage

- Run the application from the build directory:
  ```
  ./monster-database-app
  ```
- Follow the on-screen instructions to enter monster data or import from a file.

## Dependencies

- CMake (version 3.10 or higher)
- A C++ compiler that supports C++11 or higher

## Contributing

Feel free to submit issues or pull requests for improvements or bug fixes.