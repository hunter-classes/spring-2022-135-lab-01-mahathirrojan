// Task A. Find the smaller of two integers.
#include <iostream> 

void smaller() {
    std::cout << "Enter the first number" << std::endl; 
    int a = 0; 
    std::cin >> a; 

    std::cout << "Enter the second number" << std::endl; 
    int b = 0; 
    std::cin >> b; 
    if(a > b){
        std::cout << "The smaller of the two is" << " " << b << std::endl; 
    }
    else if (b > a){
        std::cout << "The smaller of the two is" << " " << a << std::endl; 
    }
    else{
        std::cout << "They are equal!" << std::endl; 

}
}


int main(){
    smaller(); 
    return 0; 
}