#include <iostream> 
int main() {
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                std::cout <<"Leap year.";
            else
                std::cout <<"Common Year.";
        }
        else
            std::cout << "Leap year.";
    }
    else
        std::cout << "Common Year.";

    return 0;
}