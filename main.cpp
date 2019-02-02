#include <iostream>
#include <vector>

using namespace std;

// bubble sort
void bubble_sort(int *array, int length);

// quick sort
int partition(int *array, int first, int last);
void quick_sort(int *array, int length);

// heap sort
void heapify(int *array, int length);
void heap_sort(int *array, int length);

// merge sort
void merge(int *array, int first, int last);
void merge_sort(int *array, int length);

// binary search
int binary_search(int *array, int target);

// K min number
void kmin(int *array, int length, int *res, int k);

// BFS
// A star
// Dijkstra

int main(int argc, char *argv[])
{
    cout << "hello, world!" << endl;
    return 0;
}