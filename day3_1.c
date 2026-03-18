#include <stdio.h>
int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &k);
    int found = 0;
    int comparisons = 0;
    for(int i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == k) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Element not found\n");
    }
    printf("Total comparisons = %d", comparisons);
    return 0;
}
