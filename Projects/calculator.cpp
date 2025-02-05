#include <iostream>
using namespace std;

void add_two_num(){
    double num1 {}, num2 {};
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Result " << num1 + num2 << endl;
}

void subtract_two_num(){
    double num1 {}, num2 {};
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Result " << num1 - num2 << endl;
}

void multiply_two_num(){
    double num1 {}, num2 {};
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Result " << num1 * num2 << endl;
}

void divide_one_num_by_other(){
    double num1 {}, num2 {};
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    float result = num1 / num2;
    cout << "Result " << result << endl;
}

int main(){
    cout << "Simple Calculator to perform addition, subtraction, multiplication and division.\n\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "\n>>> ";
    int choice {};
    cin >> choice;
    if (choice == 1){
        add_two_num();
    }
    else if (choice == 2){
        subtract_two_num();
    }
    else if (choice == 3){
        multiply_two_num();
    }
    else if (choice == 4){
        divide_one_num_by_other();
    }
    else{
        cout << "Invalid Input!!!";
    }

    return 0;
}