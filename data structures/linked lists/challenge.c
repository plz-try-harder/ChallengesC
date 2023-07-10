#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


typedef struct node{
    int num;
    struct node *next;

}node_t;

typedef node_t* Node;


void insertAtBeginning(Node *head, int val);
void insertAtEnd(Node *head, int val);
void insertNodeAtPos(Node *head , int val, int pos);
void deleteAtPos(Node *head, int pos);
void updateValueAtPos(Node *head, int val, int pos);
int searchElement(Node *head, int val); // it returns the position of the element
void displayList(Node head);
void printMenu();



int main(){
    Node head = NULL;

    int choice= 0; // the choice added to 
    int item= 0; // the integer added to the list
    int position= 0; 

    printMenu();

    scanf("%d", &choice);

    while(choice != 8){
        switch (choice){
            case 1:
                printf("Enter the value you want to insert at the start: ");
                scanf("%d", &item);
                insertAtBeginning(&head , item);
                break;
            case 2:
                printf("Enter the value you want to insert at the end: ");
                scanf("%d", &item);
                insertAtEnd(&head , item);
                break;
            case 3:
                printf("Enter the value you want to enter: ");
                scanf("%d", &item);
                printf("Enter the postion you want to enter at: ");
                scanf("%d", &position);
                insertNodeAtPos(&head , item , position);
                break;
            case 4:
                printf("Enter the position you want to delete: ");
                scanf("%d" , &position);
                deleteAtPos(&head , position);
                break;
            case 5:
                printf("Enter the position you want to update: ");
                scanf("%d", &position);
                printf("Enter the value you want to update this element to: ");
                scanf("%d", &item);
                updateValueAtPos(&head , item , position);
                break;
            case 6:
                printf("Enter the element you want to search: ");
                scanf("%d", &item );
                position = searchElement(&head , item);
                if(position != 0){
                    printf("The element is found and it's at position: %d\n", position );
                }else{
                    printf("element is not fount in the list \n");
                }
                break;
            case 7:
                displayList(head);
                break;
            default:
                printf("invalid choice\n");
                break;
        } // end switch
        printMenu();
        scanf("%d", &choice);

    } // end while

    printf("end of run\n");
    return 0;
}

void printMenu(){
    printf("\nOperations for a linked List\n"
    "1. Insert Node at the beginning of the list\n"
    "2. Insert Node at the end\n"
    "3. Insert Node at specific position\n"
    "4. Delete Node from any Positoins\n"
    "5. Update Node value\n"
    "6. Search Element in the linked list\n"
    "7. Display list\n"
    "8. Exit\n\n");
}

void insertAtBeginning(Node *head, int val){
    Node one = malloc(sizeof(node_t));
    one->num = val;
    one->next = *head;
    *head = one;
}

void insertAtEnd(Node *head, int val){
    Node one =  malloc(sizeof(node_t));
    Node currenPtr = *head;

    one->num = val;
    one->next = NULL;
    if(currenPtr != NULL){ // if the list isn't empty
        while(currenPtr->next != NULL){
            currenPtr = currenPtr->next;
        }
        currenPtr->next = one;
    }else{
        one->next = *head;
        *head = one;
    }
}

void insertNodeAtPos(Node *head , int val, int pos){
    
    //if the list has at least 2 items;
    if((*head) != NULL && (*head)->next != NULL){
        Node one  = malloc(sizeof(node_t));
        one->num = val;
        Node previousPtr = *head;
        Node currenPtr = (*head)->next;

        for( int i = 0 ; i < pos ; i++){
            currenPtr = currenPtr->next;
            previousPtr = previousPtr->next;
        }
        previousPtr->next = one;
        one->next = currenPtr;
    }else{
        printf ("List only has less than 2 Items\n"
        "Use either 2 of the first choices (Insert at beginning) or (Insert at the end)\n");
    }
}


void deleteAtPos(Node *head, int pos){
    Node tmpPtr;
    Node currenPtr;
    Node previousPtr;
    if((*head) != NULL && (*head)->next != NULL){ // list has at least 2 elements
        previousPtr = *head;
        currenPtr = (*head)->next;

        for(int i = 1; i < pos; i++){
            currenPtr = currenPtr->next;
            previousPtr = previousPtr->next;
        }

        tmpPtr = currenPtr;
        previousPtr->next = currenPtr->next;
        free(tmpPtr);        
    }else if ((*head) != NULL){ // list has at least 1 element
        tmpPtr = *head;
        *head = NULL;
        free(tmpPtr);
    }else{
        printf("List is already empty\n");
    }
}


void updateValueAtPos(Node *head, int val, int pos){

}
int searchElement(Node *head, int val){

} // it returns the position of the element
void displayList(Node head){
    while (head != NULL){
        printf("%d -->", head->num);
        head = head->next;
    }
    printf("NULL\n");
}



