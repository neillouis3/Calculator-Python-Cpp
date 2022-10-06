#include <iostream>

using namespace std;

double calculator(double firstValue, double secondValue, char operSymbol) {
    double resultValue;
    switch (operSymbol) {
    case '+':
        resultValue = firstValue + secondValue;
        break;

    case '-':
        resultValue = firstValue - secondValue;
        break;

    case '*':
        resultValue = firstValue * secondValue;
        break;

    case '/':
        resultValue = firstValue / secondValue;
        break;

    case '%':
        resultValue = int(firstValue) % int(secondValue);
        break;

    case 'A':
    case 'a':
        resultValue = (firstValue + secondValue) / 2;
        break;

    case 'X':
    case 'x':
        resultValue = std::max(firstValue, secondValue);
        break;

    case 'M':
    case 'm':
        resultValue = std::min(firstValue, secondValue);
        break;

    case 'S':
    case 's':
        resultValue = firstValue * secondValue;
        break;

    default:
        cout << "Invalid operator! ";
        break;
    }

    return resultValue;

}

int main(){
    char inputChoice;
    double squareValue;
    double mainFirstValue;
    double mainSecondValue;
    cout << "Choose one of the following operation: " << endl;
    cout << "'+' for addition." << endl;
    cout << "'-' for subtration." << endl;
    cout << "'*' for multiplication." << endl;
    cout << "'/' for division." << endl;
    cout << "'%' for remainder." << endl;
    cout << "'A' for average." << endl;
    cout << "'X' for maximum." << endl;
    cout << "'M' for minimum." << endl;
    cout << "'S' for square." << endl;
    cout << "'Q' to quit the program." << endl;
    cin >> inputChoice;

    switch (inputChoice) {
    case 'S':
    case 's':
        cout << "Enter value to square: ";
        cin >> squareValue;
        cout << calculator(squareValue, squareValue, inputChoice);
    
    case 'Q':
    case 'q':
        break;

    default:
        cout << "Enter first value: ";
        cin >> mainFirstValue;
        cout << "Enter second value: ";
        cin >> mainSecondValue;
        cout << calculator(mainFirstValue, mainSecondValue, inputChoice);
    }
    
}

