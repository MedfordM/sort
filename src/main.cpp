#include <algorithm>
#include <iterator>
#include <iostream>
#include "algorithms/algorithms.h"
using namespace std;

int main() {
  
  // Populate uniqueArray
  int uniqueArray[25] = {};
  for (int i = 0; i < size(uniqueArray); i++) {
    uniqueArray[i] = i;
  }
  reverse(begin(uniqueArray), end(uniqueArray));

  // Populate randomArray
  int randomArray[25] = {};
  srand(time(0));
  for (int i = 0; i < 25; i++) {
    randomArray[i] = rand() % 101;
  }

  // Print uniqueArray
  cout << "Array 1: ";
  for (int i = 0; i < 25; i++) {
    cout << uniqueArray[i] << " ";
  }

  // Print randomArray
  cout << "\nArray 2: ";
  for (int i = 0; i < 25; i++) {
    cout << randomArray[i] << " ";
  }

  // selectionSort(uniqueArray);
  // selectionSort(randomArray);

  // bubbleSort(uniqueArray);
  // bubbleSort(randomArray);

  cout << "\n\n------------------------------------------\n\n";

  // Print uniqueArray
  cout << "Array 1: ";
  for (int i = 0; i < 25; i++) {
    cout << uniqueArray[i] << " ";
  }

  // Print randomArray
  cout << "\nArray 2: ";
  for (int i = 0; i < 25; i++) {
    cout << randomArray[i] << " ";
  }

  return 0;
}
