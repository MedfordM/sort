#include <algorithm>
using namespace std;

void selectionSort(int array[]) {
  // for (int i = 0; i < sizeof(*array); i++) {
  for (int i = 0; i < 25; i++) {
    int lowestIndex = i;
    for (int j = i + 1; j < 25; j++) {
      if (array[j] < array[lowestIndex]) {
        lowestIndex = j;
      }
    }
    swap(array[i], array[lowestIndex]);
  }
}
