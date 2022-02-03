#include <iostream> 
int leap(){
    std::cout << "Enter a year:" << std::endl; 
    int year = 0; 
    std::cin >> year;

    std::cout << "Enter a month:" << std::endl; 
    int month = 0; 
    std::cin >> month; 



    if (year % 4 == 0 && month == 2) 
    {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                std::cout << "29" << std::endl;
            else
                std::cout << "28" << std::endl;
    }
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        std::cout << "31" << std::endl; 
    else 
        std::cout << "30" << std::endl; 
}
}



int main(){
    leap(); 
    return 0; 
}