#include <iostream>

int test(int buf)
{
  buf=buf/2;
  return buf;
}


void kek()
{
  std::cout << "hello there!" << std::endl;
}

void func()
{
  int x;
  std::cin >> x;
  std::cout << x << std::endl;
}

int main()
{
  ::kek();
  std::cout << "group #42" << std::endl;
  std::cin.get();
  return 0;
}
