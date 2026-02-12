#include <utility>
using std::swap;

void insertionSort(int arr[]) {
  for (int i = 1; i < 25; i++) {
    int currentValue = arr[i];
    for (int j = i - 1; j >= 0; j--) {
      int sortedValue = arr[j];
      if (sortedValue > currentValue) {
        swap(arr[i], arr[j]);
        currentValue = arr[i];
      }
    }
  }
}
