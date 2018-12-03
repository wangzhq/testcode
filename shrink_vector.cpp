// vector::shrink_to_fit
#include <iostream>
#include <vector>
#include <string>

int main ()
{
  std::vector<int> myvector(2, 10);
  std::cout << "1. capacity of myvector: " << myvector.capacity() << '\n';

  //myvector.resize(10);
  //std::cout << "2. capacity of myvector: " << myvector.capacity() << '\n';
  auto ip = myvector.begin() + 1;
  myvector.emplace(ip, 1);
  //myvector.emplace(ip, 2);
  //myvector.emplace(ip, 3);

  myvector.shrink_to_fit();
  std::cout << "3. capacity of myvector: " << myvector.capacity() << '\n';
	
  std::string str;
  str = "";
  if(str.empty()) {
  	std::cout << "str is empty" << std::endl;
  }
  else {
  	std::cout << "str is not empty" << std::endl;
  }

  return 0;
}