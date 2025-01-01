# Out-of-bounds vector access in C++
This repository demonstrates a common C++ error: accessing elements in a `std::vector` outside its valid index range. This leads to undefined behavior, often resulting in crashes or unexpected results.

## The Bug
The `bug.cpp` file contains code that attempts to access an element in the vector beyond its size.  This is a classic off-by-one error. 

## The Solution
The `bugSolution.cpp` file corrects the issue by ensuring that the loop iterates within the valid bounds of the vector.