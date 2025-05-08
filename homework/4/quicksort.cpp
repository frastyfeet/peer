#include <iostream>

void qsortRecursive(int *mas, int size) {
  //Указатели в начало и в конец массива
  int i = 0;
  int j = size - 1;

  //Центральный элемент массива
  int mid = mas[size / 2];

  //Делим массив
  do {
    //Пробегаем элементы, ищем те, которые нужно перекинуть в другую часть
    //В левой части массива пропускаем(оставляем на месте) элементы, которые
    //меньше центрального
    while (mas[i] < mid) {
      i++;
    }
    //В правой части пропускаем элементы, которые больше центрального
    while (mas[j] > mid) {
      j--;
    }

    //Меняем элементы местами
    if (i <= j) {
      int tmp = mas[i];
      mas[i] = mas[j];
      mas[j] = tmp;

      i++;
      j--;
    }
  } while (i <= j);

  //Рекурсивные вызовы, если осталось, что сортировать
  if (j > 0) {
    //"Левый кусок"
    qsortRecursive(mas, j + 1);
  }
  if (i < size) {
    //"Правый кусок"
    qsortRecursive(&mas[i], size - i);
  }
}

int main() {
  int arr[10] = {1, 2, 8, 9, 5, 6, 10, 3, 4, 7};
  qsortRecursive(arr, 10);
  for (int elem : arr) {
    std::cout << elem << " ";
  }
}