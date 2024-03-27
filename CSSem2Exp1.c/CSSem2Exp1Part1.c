// #include <stdio.h>
// #include <stdlib.h>

// #define maxsize 1000

// int size = 0;

// void Create(int list[]) {
//     int n;
//     printf("Enter the size of list : ");
//     scanf("%d", &n);
//     if (n > maxsize)
//         printf("List Over Flow !!!");
//     else {
//         printf("Enter List Element : \n");
//         for (int i = 0; i < n; i++)
//             scanf("%d", &list[i]);
//         size = n;
//     }
// }

// void Display(int list[]) {
//     if (size == 0)
//         printf("List is Empty !!!!\n");
//     else {
//         printf("List Elements Are : \n");
//         for (int i = 0; i < size; i++) {
//             printf("%d\t", list[i]);
//         }
//         printf("\n");
//     }
// }

// void Insert(int list[]) {
//     int pos, value;
//     printf("Enter Position : ");
//     scanf("%d", &pos);
//     if (pos >= 0 && pos <= size) {
//         printf("Enter Value To Insert : ");
//         scanf("%d", &value);
//         for (int i = size; i > pos; i--) {
//             list[i] = list[i - 1];
//         }
//         list[pos] = value;
//         size++;
//     } else {
//         printf("Invalid Position !!!!\n\n");
//     }
// }

// void Delete(int list[]) {
//     int pos;
//     printf("Enter Position to delete: ");
//     scanf("%d", &pos);
//     if (pos >= 0 && pos < size) {
//         for (int i = pos; i < size - 1; i++) {
//             list[i] = list[i + 1];
//         }
//         size--;
//         printf("Element at position %d deleted successfully.\n", pos);
//     } else {
//         printf("Invalid Position !!!!\n\n");
//     }
// }

// void Search(int list[]) {
//     int key;
//     printf("Enter the element to search: ");
//     scanf("%d", &key);
//     int found = 0;
//     for (int i = 0; i < size; i++) {
//         if (list[i] == key) {
//             printf("Element found at position %d.\n", i);
//             found = 1;
//         }
//     }
//     if (!found) {
//         printf("Element not found in the list.\n");
//     }
// }

// int main() {
//     int list[maxsize];
//     while (1) {
//         system("cls");
//         printf("1. Create List\n");
//         printf("2. Insert Element In List\n");
//         printf("3. Display All List Element\n");
//         printf("4. Delete Element from List\n");
//         printf("5. Search Element In List\n");
//         printf("6. Exit\n");
//         int choice;
//         printf("Enter Choice : ");
//         scanf("%d", &choice);
//         switch (choice) {
//             case 1:
//                 Create(list);
//                 break;
//             case 2:
//                 Insert(list);
//                 break;
//             case 3:
//                 Display(list);
//                 break;
//             case 4:
//                 Delete(list);
//                 break;
//             case 5:
//                 Search(list);
//                 break;
//             case 6:
//                 exit(0);
//                 break;
//             default:
//                 printf("Invalid Choice...\n");
//         }
//     }
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>

#define maxsize 1000

int size = 0;

void Create(int list[]) {
    int n;
    printf("Enter the size of list : ");
    scanf("%d", &n);
    if (n > maxsize)
        printf("List Over Flow !!!");
    else {
        printf("Enter List Element : \n");
        for (int i = 0; i < n; i++)
            scanf("%d", &list[i]);
        size = n;
    }
}

void Display(int list[]) {
    if (size == 0)
        printf("List is Empty !!!!\n");
    else {
        printf("List Elements Are : \n");
        for (int i = 0; i < size; i++) {
            printf("%d\t", list[i]);
        }
        printf("\n");
    }
}

void Insert(int list[]) {
    int pos, value;
    printf("Enter Position : ");
    scanf("%d", &pos);
    if (pos >= 0 && pos <= size) {
        printf("Enter Value To Insert : ");
        scanf("%d", &value);
        for (int i = size; i > pos; i--) {
            list[i] = list[i - 1];
        }
        list[pos] = value;
        size++;
    } else {
        printf("Invalid Position !!!!\n\n");
    }
}

void Delete(int list[]) {
    int pos;
    printf("Enter Position to delete: ");
    scanf("%d", &pos);
    if (pos >= 0 && pos < size) {
        for (int i = pos; i < size - 1; i++) {
            list[i] = list[i + 1];
        }
        size--;
        printf("Element at position %d deleted successfully.\n", pos);
    } else {
        printf("Invalid Position !!!!\n\n");
    }
}

void Search(int list[]) {
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (list[i] == key) {
            printf("Element found at position %d.\n", i);
            found = 1;
        }
    }
    if (!found) {
        printf("Element not found in the list.\n");
    }
}

int main() {
    int list[maxsize];
    while (1) {
        // system("cls");
        printf("1. Create List\n");
        printf("2. Insert Element In List\n");
        printf("3. Display All List Element\n");
        printf("4. Delete Element from List\n");
        printf("5. Search Element In List\n");
        printf("6. Exit\n");
        int choice;
        printf("Enter Choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                Create(list);
                break;
            case 2:
                Insert(list);
                break;
            case 3:
                Display(list); // Corrected typo here
                break;
            case 4:
                Delete(list);
                break;
            case 5:
                Search(list);
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid Choice...\n");
        }
    }
    return 0;
}
