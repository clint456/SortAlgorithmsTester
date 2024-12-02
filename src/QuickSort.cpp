#include "Sorter.h"
#include <algorithm>

class QuickSort : public Sorter {
public:
    void quickSort(std::vector<int>& arr, int low, int high) {
        if (low < high) {
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
        }
    }

    void sort(std::vector<int>& arr) override {
        quickSort(arr, 0, arr.size() - 1);
    }

    std::string name() const override {
        return "QuickSort";
    }

private:
    int partition(std::vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; ++j) {
            if (arr[j] < pivot) {
                ++i;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        return i + 1;
    }
};
