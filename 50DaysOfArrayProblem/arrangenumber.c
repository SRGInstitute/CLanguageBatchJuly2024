#include <stdio.h>

int main() {
    int arr1[] = {1,2,1,5,8,9,3,7}; // Source array
    int size = sizeof(arr1) / sizeof(arr1[0]);  // Calculate the size of arr1
    int arr2[8];  // Destination array
    int temp =0;
    int arr3[8];
    
    

    // Copy elements from arr1 to arr2
    for (int i = 0; i < size; i++) {
        
            if(arr1[i]<5)
            {
                arr2[i] = arr1[i];
                temp++;
            }
        
        
    }

    // Print the elements of arr2 to verify
    printf("Elements of arr2: ");
    for (int i = 0; i < temp; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
