#include <iostream>

#define rows 4
#define cols 4

void fill_matrix(int data[rows][cols]) {
  int counter = 0;
  for (int i = 0; i < rows; ++i) {
    if (counter < cols)
      data[i][counter++] = 9;
    else
      break;
  }
}

void init_matrix(int data[rows][cols]) {
  int counter = 0;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      data[i][j] = counter++;
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

int main() {
  int data[rows][cols];
  init_matrix(data);
  fill_matrix(data);
  print_matrix(data);

  return 0;
}