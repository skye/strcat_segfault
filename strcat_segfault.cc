#include <iostream>
#include <string>
#include <vector>

#include "absl/strings/str_cat.h"

int main() {
  std::cout << absl::StrCat(nullptr) << std::endl;
  std::cout << "didn't segfault!" << std::endl;
  return 0;
}
