#include <iostream>

// Model class - handles business logic and data
class Model {
private:
    int number;
    int square;

    void calculateSquare() {
        square = number * number;
    }

public:
    Model() : number(0), square(0) {}

    void setNumber(int num) {
        number = num;
        calculateSquare();
    }

    int getSquare() const {
        return square;
    }
};

// View class - handles user interface
class View {
public:
    int getUserInput() {
        int input;
        std::cout << "Enter an integer number: ";
        std::cin >> input;
        return input;
    }

    void displayResult(int square) {
        std::cout << "The square of the number is: " << square << std::endl;
    }
};

// Controller class - coordinates Model and View
class Controller {
private:
    Model& model;
    View& view;

public:
    Controller(Model& m, View& v) : model(m), view(v) {}

    void processUserInput() {
        // Get input from view
        int number = view.getUserInput();

        // Update model
        model.setNumber(number);

        // Get result from model and update view
        int square = model.getSquare();
        view.displayResult(square);
    }
};

// Main function
int main() {
    // Initialize MVC components
    Model model;
    View view;
    Controller controller(model, view);

    // Start the application
    controller.processUserInput();

    return 0;
}