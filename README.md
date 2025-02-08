# Square Number Calculator (MVC Pattern)

A simple C++ program that calculates the square of an input number using the Model-View-Controller (MVC) architectural pattern.

## Overview

This program demonstrates a passive MVC implementation where:
- The Model manages data and calculations
- The View handles user interaction
- The Controller coordinates between Model and View
- No direct communication between Model and View

## Components

### Model
- Stores the input number and its square
- Performs the square calculation
- Has no knowledge of the View or Controller

### View
- Handles console input/output
- Prompts user for input
- Displays calculation results
- Independent of the Model

### Controller
- Coordinates all activities
- Passes data between Model and View
- Manages program flow
- Maintains loose coupling between Model and View

## Usage

1. Compile the program:
```bash
g++ mvc.cpp -o square_calculator
```

2. Run the program:
```bash
./square_calculator
```

3. Follow the prompt to enter a number:
```
Enter an integer number: 5
The square of the number is: 25
```

## Requirements
- C++ compiler
- Standard input/output streams

## Code Structure

```cpp
class Model {
    // Handles data and calculations
}

class View {
    // Manages user interface
}

class Controller {
    // Coordinates Model and View
}

int main() {
    // Program entry point
}
```

## Features
- Simple and clean implementation
- Follows MVC design pattern
- Easy to modify and extend
- Single file implementation
- No external dependencies

## Educational Value
This code serves as a practical example of:
- MVC architectural pattern
- Passive MVC implementation
- Class organization in C++
- Separation of concerns
- Clean code principles

## Note
This is a simple implementation meant for educational purposes. In a real-world application, you might want to add:
- Input validation
- Error handling
- More robust user interface
- Additional features
- Unit tests