
/*  Write a program which performs the following operations using a
simple queue. : insert() -> delete() -> display() */
#include <stdio.h>
#include <stdlib.h>

#define MAX 20

void insert();
void myremove();
void display();

int queue[MAX];
int rear = -1;
int front = -1;
int i;
int main() {
    int ch;
    while (1) {
        printf("\n1. Insert");
        printf("\n2. Remove");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                insert();
                break;
            case 2:
                myremove();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Enter a proper choice!\n");
        }
    }
    return 0;
}

void insert() {
    int value;
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = rear + 1;
    printf("Enter value: ");
    scanf("%d", &value);
    queue[rear] = value;
}

void myremove() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
        return;
    }
    printf("Value Deleted: %d\n", queue[front]);
    front = front + 1;
    if (front > rear) {
        front = rear = -1;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue elements are:\n");
    for (i=front; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}

