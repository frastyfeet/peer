#include <iostream>

int min(int* data) {
  int min = *data;
  for (int i = 0; i < 10; i++) {
    if (*(data + i) < min) {
      min = *(data + i);
    }
  }
  return min;
}
int max(int* data) {
  int max = *data;
  for (int i = 0; i < 10; i++) {
    if (*(data + i) > max) {
      max = *(data + i);
    }
  }
  return max;
}

int main() {
  int data[10] = {5, 4, 3, 2, 1, 10, 9, 8, 7, 6};
  int min_elem = min(data);
  std::cout << "Min: " << min_elem << std::endl;
  int max_elem = max(data);
  std::cout << "Max: " << max_elem << std::endl;
}