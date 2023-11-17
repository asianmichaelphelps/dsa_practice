#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char** argv) {
  std::vector<int> example1 = {2, 2, 1};
  std::vector<int> example2 = {4, 1, 2, 1, 2};
  std::vector<int> example3 = {};

  std::cout << FindNum(example1) << '\n';
  std::cout << FindNum(example2) << '\n';
  std::cout << FindNum(example3) << '\n';
}
