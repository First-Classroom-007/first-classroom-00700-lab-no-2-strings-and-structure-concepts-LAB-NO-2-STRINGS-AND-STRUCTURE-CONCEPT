#include <stdio.h>
#include <string.h>
#include "search.h"
#include "sort.h"
#include "string_ops.h"
#include "struct_defs.h"

// Simple assertion helper
void assert_int(int expected, int actual, const char *test) {
    if (expected != actual) {
        printf("[FAIL] %s: expected %d, got %d
", test, expected, actual);
    } else {
        printf("[PASS] %s
", test);
    }
}

void assert_str(const char *expected, const char *actual, const char *test) {
    if (strcmp(expected, actual) != 0) {
        printf("[FAIL] %s: expected '%s', got '%s'
", test, expected, actual);
    } else {
        printf("[PASS] %s
", test);
    }
}

int main() {
    // ---- Search & Sort Tests ----
    int arr1[] = {1,4,3,2,5};
    int n1 = 5;
    int idx = linear_search(arr1, n1, 3);
    assert_int(2, idx, "linear_search");
    idx = binary_search(arr1, n1, 3);
    assert_int(2, idx, "binary_search");
    
    int tmp[5]; memcpy(tmp, arr1, sizeof(arr1));
    bubble_sort(tmp, n1);
    int sorted1[] = {1,2,3,4,5};
    for(int i=0;i<n1;i++) assert_int(sorted1[i], tmp[i], "bubble_sort");

    memcpy(tmp, arr1, sizeof(arr1));
    selection_sort(tmp, n1);
    for(int i=0;i<n1;i++) assert_int(sorted1[i], tmp[i], "selection_sort");

    memcpy(tmp, arr1, sizeof(arr1));
    insertion_sort(tmp, n1);
    for(int i=0;i<n1;i++) assert_int(sorted1[i], tmp[i], "insertion_sort");

    // ---- String Ops Tests ----
    char *s1 = "hello";
    char *s2 = "world";
    assert_int(5, my_strlen(s1), "my_strlen");
    assert_int(strcmp(s1,s2), my_strcmp(s1,s2), "my_strcmp");
    char buf[100];
    my_strcpy(buf, s1);
    assert_str(s1, buf, "my_strcpy");

    // ---- Struct Tests ----n    
    struct Student st;
    init_student(&st, "Alice", 10, 85.5f);
    // Capture output
    printf("Expect: Alice 10 85.50
Got: ");
    print_student(&st);

    return 0;
}
