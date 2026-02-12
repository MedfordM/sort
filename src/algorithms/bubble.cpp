#include <algorithm>

using namespace std;

void bubbleSort(int arr[]) {
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    for (int i = 0; i < 25; i++) {
      if (i == 24) {
        continue;
      }
      if (arr[i] > arr[i+1]) {
        swap(arr[i], arr[i+1]);
        sorted = false;
      }
    }
  }
}
