#include <stdio.h> 
#define MAX 10 
int queue[MAX]; 
int front = -1; 
int rear = -1; 
void enqueue() 
{ 
int id; 
if (rear == MAX - 1) 
{ 
printf("Waiting queue is full!\n"); 
return; 
} 
printf("Enter Customer ID: "); 
scanf("%d", &id); 
if (front == -1) 
{ 
front = 0; 
} 
rear++; 
queue[rear] = id; 
printf("Customer %d added to the waiting queue.\n", id); 
} 
void dequeue() 
{ 
if (front == -1) 
{ 
printf("No customers are waiting.\n"); 
return; 
} 
printf("Customer %d is assigned to the available agent.\n",queue[front]); 
front++; 
if (front > rear) 
{ 
front = -1; 
rear = -1; 
} 
} 
void display() 
{ 
int i; 
if (front == -1) 
{ 
printf("Waiting queue is empty.\n"); 
return; 
} 
printf("\nWaiting Customers:\n"); 
for (i = front; i <= rear; i++) 
{ 
printf("Customer ID: %d\n", queue[i]); 
} 
} 
int main() 
{ 
int choice; 
while (1) 
{ 
        printf("\n===== CALL CENTER QUEUE =====\n"); 
        printf("1. New Customer Arrival\n"); 
        printf("2. Assign Available Agent\n"); 
        printf("3. Display Waiting Queue\n"); 
        printf("4. Exit\n"); 
 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
            case 1: 
                enqueue(); 
                break; 
 
            case 2: 
                dequeue(); 
                break; 
 
            case 3: 
                display(); 
                break; 
 
            case 4: 
                printf("Program terminated.\n"); 
                return 0; 
 
            default: 
                printf("Invalid choice!\n"); 
        } 
    } 
    return 0; 
} 
  
 
 
