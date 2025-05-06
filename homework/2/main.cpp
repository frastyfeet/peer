#include "int.h"

int main() {
  const class Integer A;
  class Integer B;
  B.setNum(10);
  // A.setNum(10); так сделать не получится, т.к. класс констатный
}