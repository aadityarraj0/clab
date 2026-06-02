#include <stdio.h>
int main() {
    int a[10], n, key, i;
    printf("Enter number of books: ");
    scanf("%d", &n);
    printf("Enter Book IDs (sorted): ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter Book ID to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Book found");
            return 0;
        }
    }
   printf("Book not found");
    return 0;
}
