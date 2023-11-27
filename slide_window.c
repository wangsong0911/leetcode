#include <stdio.h>
#include <stdlib.h>

void sliding_window(int nums[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        // 在这里可以对每个窗口进行操作
        printf("Window %d: [", i + 1);
        for (int j = i; j < i + k; j++) {
            printf("%d", nums[j]);
            if (j < i + k - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 8;

    sliding_window(nums, n, k);

    return 0;
}