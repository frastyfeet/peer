#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    for(int i = 0; i < 10; i++){
        std::cout << rand() % 10 << " ";
    }
    return 0;
}