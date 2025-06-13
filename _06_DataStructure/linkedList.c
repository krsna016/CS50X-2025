#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void) {



    // // We can create and array and then assign values:
    // // Static memory allocation ->
    //
    // int list[3];
    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;
    //
    // for (int i = 0; i < 3; ++i) {
    //     printf("%i",list[i]);
    // }
    // printf("\n");



    // // We can also create a pointer to an integer and then assign values:
    // // Dynamic memory allocation ->
    //
    // int *list = malloc(3 * sizeof(int));
    // if (list == NULL) {
    //     return 1;
    // }
    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;
    //
    // // If in the future, I want to add more than I can do like this:
    // int *temp = malloc(4 * sizeof(int));
    // if (temp == NULL) {
    //     free(list);
    //     return 1;
    // }
    // for (int i = 0; i < 3; ++i) {
    //     temp[i] = list[i];
    // }
    //
    // temp[3] = 4;
    //
    // free(list);
    // list = temp;
    //
    // for (int i = 0; i < 4; ++i) {
    //     printf("%i",list[i]);
    // }
    // printf("\n");
    //
    // free(temp);



    // // Instead of reallocating memory in runtime like above dynamically we can also use realloc():
    // // See below ->
    // int *list = malloc(3 * sizeof(int));
    //
    // if (list == NULL) {
    //     return 1;
    // }
    //
    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;
    //
    // for (int i = 0; i < 3; ++i) {
    //     printf("%i ",list[i]);
    // }
    // printf("\n");
    //
    // int *temp = realloc(list, sizeof(4 * sizeof(int)));
    // if (temp == NULL) {
    //     free(list);
    //     return 1;
    // }
    //
    // temp[3] = 4;
    // list = temp;
    //
    // for (int i = 0; i < 4; ++i) {
    //     printf("%i ",list[i]);
    // }
    // printf("\n");
    //
    // free(temp);



    // But the above code using realloc() is not upto the mark and here we need to do so much work just to add one more element hence we use a new data-structure called linked list:
    // Define a node structure
    typedef struct node {
        int value;
        struct node *next;
    } node;

    // // Create first node
    // node *head = malloc(sizeof(node));
    // if (head == NULL) {
    //     return 1;
    // }
    // head->value = 1;
    // head->next = NULL;
    //
    // // Add second node
    // node *second = malloc(sizeof(node));
    // if (second == NULL) {
    //     free(head);
    //     return 1;
    // }
    // second->value = 2;
    // second->next = NULL;
    //
    // // Add third node
    // node *third = malloc(sizeof(node));
    // if (third == NULL) {
    //     free(second);
    //     free(head);
    //     return 1;
    // }
    // third->value = 3;
    // third->next = NULL;
    //
    // // Joining nodes
    // head->next = second;
    // second->next = third;
    //
    // // Print linked list
    // node *current = head;
    // while (current != NULL) {
    //     printf("%i ", current->value);
    //     current = current->next;
    // }
    // printf("\n");
    //
    // // Free memory
    // current = head;
    // while (current != NULL) {
    //     node *tmp = current;
    //     current = current->next;
    //     free(tmp);
    // }

    // We can also do in this way
    node *list = NULL;
    for (int i = 0; i < 3; ++i) {
        node *n = malloc(sizeof(node));
        if (n == NULL) {
            // TODO: free any memory already malloc'd
            return 1;
        }
        n->value = get_int("Number = "); // also, (*n).value = get_int("Number = ")
        n->next = NULL;

        if (list == NULL) {
            list = n;
        } else {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
                if (ptr->next == NULL) {
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    // node *ptr = list;
    // while (ptr != NULL) {
    //     printf("%i ",ptr->value);
    //     ptr = ptr->next;
    // }
    // printf("\n");

    // also we can print the elements in this way:
    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        printf("%i ", ptr->value);
    }
    printf("\n");


    node *ptr = list;
    while (ptr != NULL) {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
    return 0;
}