#include <iostream> 
int main() {
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                std::cout <<"Leap year." << std::endl;
            else
                std::cout <<"Common Year." << std::endl;
        }
        else
            std::cout << "Leap year." << std::endl;
    }
    else
        std::cout << "Common Year." << std::endl;

    return 0;
}