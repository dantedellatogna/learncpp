#include <iostream>

double enter_n();
double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);

int main(){
    double a{}, b{}, c{};
    char op{};

    a = enter_n();
    b = enter_n();

    std::cout << "\nIntroduce one of the following symbols:\n";
    std::cout << "\tAddition (+)\n\tSubtraction (-)\n\tMultiplication (*)\n\tDivision (/)\nSelected option: ";
    std::cin >> op;
    switch (op)
    {
    case '+':
        c = addition(a, b);
        break;
    case '-':
        c = subtraction(a, b);
        break;
    case '*':
        c = multiplication(a, b);
        break;
    case '/':
        if (b == 0){
            std::cout << "\nERROR: Division by 0.\n";
            return 0;
        }
        c = division(a, b);
        break;
    default:
        return 0;
        break;
    }

    std::cout << "\nRESULT: " << a << " " << op << " " << b << " = " << c << std::endl;

    return 0;
}

double enter_n(){
    double n{};
    std::cout << "Enter a number: ";
    std::cin >> n;
    return n;
}

double addition(double a, double b){
    return a + b;
}

double subtraction(double a, double b){
    return a - b;
}

double division(double a, double b){
    return a / b;
}

double multiplication(double a, double b){
    return a * b;
}