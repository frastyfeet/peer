#include <iostream>
#include <ctime>

#define rows 4
#define cols 4

void init_matrix(int data[rows][cols]) {
    int counter = 0;
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        data[i][j] = rand() % 10;
      }
    }
  }
void print_matrix(int data[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        std::cout << data[i][j] << " ";
      }
      std::cout << std::endl;
    }
  }

int main(){
    srand(time(0));
    int data[rows][cols];
    init_matrix(data);
    print_matrix(data);
    return 0;

}