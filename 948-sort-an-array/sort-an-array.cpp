class Solution {
public:
    void merge(vector<int>& arr, int s, int e) {
        int mid = (s + e) / 2;
        int leftArray = mid - s + 1;
        int rightArray = e - mid;

        // create left and right dynamic arrays
        int* left = new int[leftArray];
        int* right = new int[rightArray];

        // copy values into left array
        int k = s;
        for (int i = 0; i < leftArray; i++) {
            left[i] = arr[k];
            k++;
        }

        // copy values into right array
        k = mid + 1;
        for (int i = 0; i < rightArray; i++) {
            right[i] = arr[k];
            k++;
        }

        // merge logic
        int leftIndex = 0, rightIndex = 0, mainIndex = s;

        while (leftIndex < leftArray && rightIndex < rightArray) {
            if (left[leftIndex] < right[rightIndex]) {
                arr[mainIndex++] = left[leftIndex++];
            } else {
                arr[mainIndex++] = right[rightIndex++];
            }
        }

        // remaining elements
        while (leftIndex < leftArray) {
            arr[mainIndex++] = left[leftIndex++];
        }
        while (rightIndex < rightArray) {
            arr[mainIndex++] = right[rightIndex++];
        }

        // free memory
        delete[] left;
        delete[] right;
    }

    void mergeSort(vector<int>& arr, int s, int e) {
        if (s >= e) return;
        int mid = (s + e) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, e);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
