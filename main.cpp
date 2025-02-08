#include <iostream>

// Model class - handles business logic and data
class Model {
    int number;
    int square;

    void calculateSquare() {
        square = number * number;
    }

public:
    Model() : number(0), square(0) {
    }

    void setNumber(const int num = 0) {
        number = num;
        calculateSquare();
    }

    [[nodiscard]] int getSquare() const {
        return square;
    }
};

// View class - handles user interface
class View {
public:
    static int getUserInput() {
        int input;
        std::cout << "Enter an integer number: ";
        std::cin >> input;
        return input;
    }

    static void displayResult(const int number, const int square) {
        std::cout << std::endl << "The square of the [" << number << "] is: " << square << std::endl;
    }
};

// Controller class - coordinates Model and View
class Controller {
    Model &model;
    View &view;

public:
    Controller(Model &m, View &v) : model(m), view(v) {
    }

    void processUserInput() const {
        // Get input from view
        const int number = View::getUserInput();

        // Update model
        model.setNumber(number);

        // Get result from model and update view
        const int square = model.getSquare();
        View::displayResult(number, square);
    }
};

// Main function
int main() {
    // Initialize MVC components
    Model model;
    View view;
    const Controller controller(model, view);

    // Start the application
    controller.processUserInput();

    return 0;
}
