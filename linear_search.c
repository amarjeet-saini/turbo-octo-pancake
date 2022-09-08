#include <stdio.h>
#include <time.h>

int linear_search(int a[], int len, int key) {
    /*
        search a element in a given array O(n)
        Argument:
            array - input array 
            len(int) - length of array
            key(int) - element to search
        Return:
            0 <= index <= len-1 if element found else -1
    */
    for(int i = 0; i < len; i++) {
        if(a[i] == key) return i;
    }
    return -1;
}

int main(void) {
    int a[] = {54,13,121,45,99,456,0,12,2,1,4,5,10,
            6,14,34,110,3,8,9,11,7,87,85,68,67,23,17};
    int len = sizeof(a) / sizeof(a[0]);
    int key = 17;
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int pos = linear_search(a, len, key);
    end = clock();
    cpu_time_used = ((double) (end-start)) * 1000 / CLOCKS_PER_SEC;
    printf("Time taken by linear search : %0.5f ms\n", cpu_time_used);
    //if (pos >= 0) printf("element %d found at index %d", key, pos);
    //else printf("element not found\n");
    return 0;
}
