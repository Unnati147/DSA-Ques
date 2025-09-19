class Solution {
public:
    // void merge(vector<int>& arr, vector<int>& temp, int s, int e) {
    //     int mid = (s + e) / 2;

// ye tareeka h dynamaic memory allocate krke krne wala
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

        
// ye tareeka h temp array leke krne wala 
        // int k =s;
        // int i = s, j = mid+1;
        // while(i  <= mid && j <= e){
        //     if(arr[i]<=arr[j])
        //     temp[k++] = arr[i++];
        //     else
        //     temp[k++] = arr[j++];
        // }

        // while(i <= mid)
        // temp[k++] = arr[i++];

        // while(j <= e){
        //     temp[k++] = arr[j++];
        // }

        // while(s<=e){
        //     arr[s] = temp[s];
        //     s++;

        // }

// ab agr in place merge srting krni h to

void mergeInplace(vector<int>& arr, int s, int e) {

    int totalLen= e-s+1;
    int gap = totalLen / 2 + totalLen %2;
    while (gap>0){
    int i = s; 
    int j = i + gap;

    while(j<=e){
        if(arr[i] >= arr[j]){
            swap(arr[i], arr[j]);
        }
         i++,j++;

    }
    gap = gap <= 1 ? 0 : (gap/2) + (gap%2);
    }
    }

    void mergeSort(vector<int>& arr, int s, int e) {
        if (s >= e) return;
        int mid = (s + e) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        mergeInplace(arr, s, e);
    }

    vector<int> sortArray(vector<int>& nums) {
       
        mergeSort(nums,  0, nums.size() - 1);
        return nums;
    }
};
