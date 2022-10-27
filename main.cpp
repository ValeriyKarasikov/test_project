#include <iostream>

void kek()
{
  std::cout << "hello there!" << std::endl;
}



int main()
{
  ::kek();
  std::cout << "group #42" << std::endl;
  std::cin.get();
  return 0;
}
