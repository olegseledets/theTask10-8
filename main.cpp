#include <iostream>

int main() {
  for (int i = 0; i < 3; ++i){
    std::cout << "|";
    for (int j = 0; j < 6; ++j){
      if (i == 1){
        std::cout << " OLEG ";
        break;
      }
      std::cout << "-";
    }
    std::cout << "|\n";
  }
}

/*
Задача 8. Автограф разработчика.
Напишите программу, которая печатает на экране ваше имя в прямоугольной рамке. Для вертикальных линий используйте символ вертикального штриха “|”, а для горизонтальных - дефис “-”.
*/
