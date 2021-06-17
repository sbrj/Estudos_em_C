#include <stdio.h>
#include <stdlib.h>

int compare (const void *, const void *);

int main() {
    int arr[5] = {52, 23, 56, 19, 4};
    int num, width, i;

    printf("size of arr %d\n", sizeof(arr));
    printf("size of arr[0] %d\n", sizeof(arr[0]));
    num = sizeof(arr)/sizeof(arr[0]);
    printf("size of num %d\n", num);
    width = sizeof(arr[0]);
    printf("size of width %d\n", width);
    qsort((void *)arr, num, width, compare);
    printf("arr %d\n", (*(int *)arr)); // points to first element of array, but now sorted
    printf("arr %d\n", arr[0]); // first element of array
    for (i = 0; i < 5; i++)
        printf("%d ", arr[ i ]);

    return 0;
}

int compare (const void *elem1, const void *elem2) {
    printf("elemen 1 %d\n", (*(int *)elem1));
    printf("elemen 2 %d\n", (*(int *)elem2));
    if ((*(int *)elem1) == (*(int *)elem2))
        return 0;
    else if ((*(int *)elem1) < (*(int *)elem2))
        return -1;
    else
        return 1;
}
