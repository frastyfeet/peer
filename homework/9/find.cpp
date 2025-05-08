#include <iostream>
#include <string>

std::string min_value(const std::string& str) {
  std::string temp = "";
  std::string min_name;
  int counter = 0;
  int min_value = str.find_first_of(' ');
  for (char ch : str) {
    if (ch == ' ') {
      if (counter < min_value) {
        min_name = temp;
        min_value = counter;
      }
      counter = 0;
      temp = "";
    } else {
      temp += ch;
      counter++;
    }
  }
  return min_name;
}

std::string max_value(const std::string& str) {
  std::string temp = "";
  std::string max_name;
  int counter = 0;
  int max_value = str.find_first_of(' ');
  for (char ch : str) {
    if (ch == ' ') {
      if (counter > max_value) {
        max_name = temp;
        max_value = counter;
      }
      counter = 0;
      temp = "";
    } else {
      temp += ch;
      counter++;
    }
  }
  return max_name;
}

int main() {
  std::string str =
      "Lorem Ipsum is simply dummy text of the printing and typesetting "
      "industry.";
  std::cout << "Min: " << min_value(str) << std::endl
            << "Max: " << max_value(str) << std::endl;
  return 0;
}