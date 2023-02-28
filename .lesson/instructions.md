# Instructions  
 
The purpose of this exercise is to practice writing recursive algorithms.

We will be solving the classic Towers of Hanoi problem. The rules for the game can be read here.

https://en.wikipedia.org/wiki/Tower_of_Hanoi

A `Towers` class is give to you, and you must implement the `move_all()` method. After each move of a disk, run the `print()` method to display the current state. This is required to pass the tests.

In order to move a disk from one peg to another, you can write something like this...
```
int disk = towers[from].back();
towers[from].pop_back();
towers[to].push_back(disk);
print();
```

The user will input a single integer, which is the number of disks that start on the 0th peg. See the tests cases for examples.