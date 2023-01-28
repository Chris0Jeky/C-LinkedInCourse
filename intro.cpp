#include <iostream>
#include <string>

int main() {
  int jualapeno[] = {1, 5, 6, 1, 9};
  float guava;
  guava = (jualapeno[0] + jualapeno[1] + jualapeno[2]
	   + jualapeno[3] + jualapeno[4]) / 5;
  std::cout << guava;
  return 0;
}
