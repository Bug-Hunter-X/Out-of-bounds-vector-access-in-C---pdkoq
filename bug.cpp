std::vector<int> myVector(10); 
for (int i = 0; i <= 10; ++i) {  //Error: Accessing beyond vector bounds
    myVector[i] = i * 2; 
}

This code will cause a runtime error because it attempts to access the element at index 10 of a vector that only has 10 elements (indices 0-9).