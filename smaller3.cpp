#include <iostream> 
//Task B. Find the smaller of three integers
void smaller3() {
    std::cout << "Enter the first number:" << std::endl;
    int a = 0; 
    std::cin >> a;
    std::cout << "Enter the second number:" << std::endl; 
    int b = 0;
    std::cin >> b;
    std::cout << "Enter the third number:" << std::endl; 
    int c = 0;
    std::cin >> c;
 
    if (a <= b && a <= c)
        std::cout <<"the smallest of the three is " << a << "\n";
 
    else if (b <= a && b <= c)
        std::cout <<"the smallest of the three is " << b << "\n";
 
    else
        std::cout << "the smallest of the three is " << c << "\n";
}

int main(){
    smaller3(); 
    return 0;
}