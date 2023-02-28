#include <cassert>
#include <iostream>
#include <string>
#include <vector>

class Towers {
 public:
  Towers(int size) {
    for (int i = 0; i < size; i++) {
      towers[0].push_back(size - i);
    }
  }

  void print() {
    std::cout << "---------" << std::endl;
    std::string output;
    for (int i = 0; i < 3; i++) {
      for (auto& disk : towers[i]) {
        std::cout << disk << " ";
      }
      std::cout << "\n";
    }
  }

  void move_all(int from, int to) {
    assert(from >= 0 && from <= 2);
    assert(to >= 0 && to <= 2);

    // TODO: implement!
  }

 private:
  std::vector<int> towers[3];
};

int main() {
  int disk_count;
  std::cin >> disk_count;
  Towers t(disk_count);
  t.print();
  t.move_all(0, 2);
}