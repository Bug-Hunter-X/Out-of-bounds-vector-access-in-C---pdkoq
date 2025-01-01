std::vector<int> myVector(10);
for (int i = 0; i < 10; ++i) { // Corrected loop condition
    myVector[i] = i * 2;
}

//Alternative safer approach using iterators
for(auto it = myVector.begin(); it != myVector.end(); ++it){
  *it = std::distance(myVector.begin(), it) * 2;
}
This corrected code iterates through the vector from index 0 to 9, avoiding any out-of-bounds access.