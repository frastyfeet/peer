#include "int.h"

int main() {
  class Integer C;
  class Integer A(5 + 1);
  A.getNum();
  A.setNum(10);
  A.getNum();
  class Integer B(A);
  B.getNum();
}