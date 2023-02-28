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
      for (auto &disk : towers[i]) {
        std::cout << disk << " ";
      }
      std::cout << "\n";
    }
  }

  void move_all(int from, int to) {
    assert(from >= 0 && from <= 2);
    assert(to >= 0 && to <= 2);

    // TODO: implement!
    move_num(towers[from].size(), from, to);
  }

  void move_num(int num_disks, int from, int to) {
    // base
    if (num_disks == 1) {
      int disk = towers[from].back();
      towers[from].pop_back();
      towers[to].push_back(disk);
      print();
      return;
    }

    // recursive
    int sparePeg = 3 - from - to;

    move_num((num_disks - 1), from, sparePeg);

    move_num(1, from, to);

    move_num((num_disks - 1), sparePeg, to);
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