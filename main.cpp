#include <iostream>
void func()
{
  std::cout<< "Ramil branch ";
}
int test(int buf)
{
  buf=buf/2;
  return buf;
}


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
