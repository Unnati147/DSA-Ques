class Solution {
public:
    void merge(vector<int>& arr, vector<int>& temp, int s, int e) {
        int mid = (s + e) / 2;
        // int leftArray = mid - s + 1;
        // int rightArray = e - mid;

        // // create left and right dynamic arrays
        // int* left = new int[leftArray];
        // int* right = new int[rightArray];

        // // copy values into left array
        // int k = s;
        // for (int i = 0; i < leftArray; i++) {
        //     left[i] = arr[k];
        //     k++;
        // }

        // // copy values into right array
        // k = mid + 1;
        // for (int i = 0; i < rightArray; i++) {
        //     right[i] = arr[k];
        //     k++;
        // }

        // // merge logic
        // int leftIndex = 0, rightIndex = 0, mainIndex = s;

        // while (leftIndex < leftArray && rightIndex < rightArray) {
        //     if (left[leftIndex] < right[rightIndex]) {
        //         arr[mainIndex++] = left[leftIndex++];
        //     } else {
        //         arr[mainIndex++] = right[rightIndex++];
        //     }
        // }

        // // remaining elements
        // while (leftIndex < leftArray) {
        //     arr[mainIndex++] = left[leftIndex++];
        // }
        // while (rightIndex < rightArray) {
        //     arr[mainIndex++] = right[rightIndex++];
        // }

        // // free memory
        // delete[] left;
        // delete[] right;

        int k =s;
        int i = s, j = mid+1;
        while(i  <= mid && j <= e){
            if(arr[i]<=arr[j])
            temp[k++] = arr[i++];
            else
            temp[k++] = arr[j++];
        }

        while(i <= mid)
        temp[k++] = arr[i++];

        while(j <= e){
            temp[k++] = arr[j++];
        }

        while(s<=e){
            arr[s] = temp[s];
            s++;

        }
    }

    void mergeSort(vector<int>& arr, vector<int> &temp, int s, int e) {
        if (s >= e) return;
        int mid = (s + e) / 2;
        mergeSort(arr,temp, s, mid);
        mergeSort(arr,temp, mid + 1, e);
        merge(arr,temp, s, e);
    }

    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp (nums.size(),0);
        mergeSort(nums,temp,  0, nums.size() - 1);
        return nums;
    }
};
