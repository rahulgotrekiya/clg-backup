# DS Practical Exam — Complete Preparation Guide

> **Subject:** Data Structures (240110202 / 140110201)
> **Exam:** Mid Sem Practical — Units 1, 2 & 3
> **Format:** 3 Questions (15 + 15 + 10 marks) + Viva (10 marks) = 50 Marks
> **Duration:** 2 Hours 30 Minutes
> **IDE:** Turbo C / Turbo C++

---

## Exam Paper Analysis — Frequency Table

I analyzed **16 sets** across Summer 2024, Remedial 2024, and additional Summer 2024 papers. Here's what appears and how often:

### Slot A — 15 Marks (Major Question)

| Topic | Appearances | Importance |
|---|---|---|
| Stack using Static Array (Push/Pop/Peek/Display) | 3 | 🔥 |
| Singly Linked List (Create/Display/Insert/Delete) | 2 | ⭐ |
| Doubly Linked List (Create/Display/Insert/Delete) | 2 | ⭐ |
| Circular Linked List (Create/Display/Insert/Delete) | 2 | ⭐ |
| Stack using Linked List (Push/Pop/Peek/Display) | 2 | ⭐ |
| Circular Queue using Static Array | 1 | � |
| BST Create & Traversals (Inorder/Preorder/Postorder) | 1 | � |
| Array Operations (Print/Insert/Delete) | 1 | � |
| SLL Advanced (Count nodes, Copy list) | 1 | � |
| Queue using Linked List | 1 | � |

### Slot B — 15 Marks (Major Question)

| Topic | Appearances | Importance |
|---|---|---|
| Simple Queue using Static Array (Insert/Delete/Display) | 3 | 🔥 |
| Array Operations (Print/Insert/Delete) | 3 | 🔥 |
| Stack using Static Array (Push/Pop/Peek/Display) | 2 | ⭐ |
| Singly Linked List (Create/Display/Insert) | 2 | ⭐ |
| Doubly Linked List (Create/Display/Delete) | 1 | � |
| Circular Linked List (Create/Display/Insert) | 1 | � |
| SLL Advanced (Merge/Search) | 2 | ⭐ |

### Slot C — 10 Marks (Shorter Question)

| Topic | Appearances | Importance |
|---|---|---|
| Shell Sort | 3 | 🔥 |
| Binary Search | 3 | 🔥 |
| Reverse Number using Stack | 3 | 🔥 |
| Insertion Sort | 2 | ⭐ |
| Quick Sort | 1 | � |
| Bubble Sort | 1 | � |
| Selection Sort | 1 | � |

---

## Importance Legend

| Symbol | Meaning | Action |
|---|---|---|
| 🔥 | **MOST IMPORTANT** — Appears 3+ times | Must memorize perfectly |
| ⭐ | **IMPORTANT** — Appears 2 times | Must know well |
| � | **GOOD TO KNOW** — Appears once | Practice if time permits |

---

## Predictions for Tomorrow's Exam

Based on the pattern analysis:

### Slot A (15 marks) — Most Likely:
1. 🔥 **Stack using Static Array** (Push/Pop/Peek/Display with Top value) — appeared 3 times in A slot
2. ⭐ **Singly Linked List** or **Doubly Linked List** with Create/Display/Insert/Delete
3. ⭐ **Circular Linked List** with Create/Display/Insert First/Delete Last

### Slot B (15 marks) — Most Likely:
1. 🔥 **Simple Queue using Static Array** (Insert/Delete/Display with Front & Rear)
2. 🔥 **Array Operations** (Print/Insert at position/Delete at position)
3. ⭐ **Circular Queue** or **Linked List** operations

### Slot C (10 marks) — Most Likely:
1. 🔥 **Reverse a number using Stack** — TOP prediction
2. 🔥 **Binary Search**
3. 🔥 **Shell Sort**
4. ⭐ **Insertion Sort**

> [!important]
> The exam has multiple SETs. You'll get ONE randomly. Every program below has appeared before. **Master ALL of them.**

---

# COMPLETE PROGRAMS — Ready to Write in Exam

---

## 1. 🔥 Stack Using Static Array (Push/Pop/Peek/Display with Top)

> **Concept:** Stack is LIFO (Last In First Out). `top` starts at -1 (empty). Push increments top then adds. Pop reads then decrements top.
> **Exam tip:** Always show `Top` value after every operation — examiners check this!

> [!warning]
> **Common Mistakes:**
> - Forgetting to initialize `top = -1`
> - Off-by-one: checking `top == SIZE` instead of `top == SIZE-1` for overflow
> - Not displaying Top value (question explicitly asks for it)

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int data) {
    if(top == SIZE - 1) {
        printf("\nStack Overflow!");
    }
    else {
        top++;
        stack[top] = data;
        printf("\n%d pushed into stack", data);
    }
    printf("\nTop = %d", top);
}

void pop() {
    if(top == -1) {
        printf("\nStack Underflow!");
    }
    else {
        printf("\n%d popped from stack", stack[top]);
        top--;
    }
    printf("\nTop = %d", top);
}

void peek() {
    if(top == -1) {
        printf("\nStack is Empty!");
    }
    else {
        printf("\nTop element = %d", stack[top]);
    }
    printf("\nTop = %d", top);
}

void display() {
    int i;
    if(top == -1) {
        printf("\nStack is Empty!");
    }
    else {
        printf("\nStack elements:\n");
        for(i = top; i >= 0; i--) {
            printf("| %d |\n", stack[i]);
        }
    }
    printf("\nTop = %d", top);
}

void main() {
    int ch, val;
    clrscr();

    do {
        printf("\n\n--- STACK MENU ---");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nEnter value to push: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while(ch != 5);
    getch();
}
```

---

## 2. 🔥 Simple Queue Using Static Array (Insert/Delete/Display with Front & Rear)

> **Concept:** Queue is FIFO (First In First Out). `front` and `rear` both start at -1. Insert at `rear`, delete from `front`.
> **Exam tip:** Display Front and Rear after every operation—this is explicitly asked!

> [!warning]
> **Common Mistakes:**
> - Not resetting `front` and `rear` to -1 when last element is deleted
> - Forgetting the special case: first insert sets `front = 0` and `rear = 0`

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void insert(int data) {
    if(rear == SIZE - 1) {
        printf("\nQueue Overflow!");
    }
    else if(front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        queue[rear] = data;
        printf("\n%d inserted", data);
    }
    else {
        rear++;
        queue[rear] = data;
        printf("\n%d inserted", data);
    }
    printf("\nFront = %d, Rear = %d", front, rear);
}

void delete() {
    if(front == -1 && rear == -1) {
        printf("\nQueue Underflow!");
    }
    else if(front == rear) {
        printf("\n%d deleted", queue[front]);
        front = -1;
        rear = -1;
    }
    else {
        printf("\n%d deleted", queue[front]);
        front++;
    }
    printf("\nFront = %d, Rear = %d", front, rear);
}

void display() {
    int i;
    if(front == -1) {
        printf("\nQueue is Empty!");
    }
    else {
        printf("\nQueue elements: ");
        for(i = front; i <= rear; i++) {
            printf("| %d ", queue[i]);
        }
        printf("|");
    }
    printf("\nFront = %d, Rear = %d", front, rear);
}

void main() {
    int ch, val;
    clrscr();

    do {
        printf("\n\n--- QUEUE MENU ---");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nEnter value: ");
                scanf("%d", &val);
                insert(val);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while(ch != 4);
    getch();
}
```

---

## 3. 🔥 Circular Queue Using Static Array (Insert/Delete/Display with Front & Rear)

> **Concept:** Like simple queue but wraps around using `(rear+1) % SIZE`. This solves the wasted-space problem of simple queues.
> **Key formula:** `rear = (rear + 1) % SIZE` for insert, `front = (front + 1) % SIZE` for delete, full when `(rear + 1) % SIZE == front`

> [!warning]
> **Common Mistakes:**
> - Using `rear == SIZE - 1` for full check (that's simple queue!)
> - Wrong traversal logic — must use modular arithmetic

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void insert(int data) {
    if((rear + 1) % SIZE == front) {
        printf("\nQueue Overflow!");
    }
    else if(front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        queue[rear] = data;
        printf("\n%d inserted", data);
    }
    else {
        rear = (rear + 1) % SIZE;
        queue[rear] = data;
        printf("\n%d inserted", data);
    }
    printf("\nFront = %d, Rear = %d", front, rear);
}

void delete() {
    if(front == -1 && rear == -1) {
        printf("\nQueue Underflow!");
    }
    else if(front == rear) {
        printf("\n%d deleted", queue[front]);
        front = -1;
        rear = -1;
    }
    else {
        printf("\n%d deleted", queue[front]);
        front = (front + 1) % SIZE;
    }
    printf("\nFront = %d, Rear = %d", front, rear);
}

void display() {
    int i;
    if(front == -1) {
        printf("\nQueue is Empty!");
    }
    else {
        printf("\nQueue elements: ");
        i = front;
        while(i != rear) {
            printf("| %d ", queue[i]);
            i = (i + 1) % SIZE;
        }
        printf("| %d |", queue[rear]);
    }
    printf("\nFront = %d, Rear = %d", front, rear);
}

void main() {
    int ch, val;
    clrscr();

    do {
        printf("\n\n--- CIRCULAR QUEUE MENU ---");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nEnter value: ");
                scanf("%d", &val);
                insert(val);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while(ch != 4);
    getch();
}
```

---

## 4. 🔥 Reverse a Number Using Stack

> **Concept:** Extract digits using `% 10`, push onto stack, then pop to build reversed number.
> **This is the easiest 10-mark question — MEMORIZE THIS!**

```c
#include<stdio.h>
#include<conio.h>
#define SIZE 20

int stack[SIZE];
int top = -1;

void push(int data) {
    if(top == SIZE - 1)
        printf("\nOverflow");
    else {
        top++;
        stack[top] = data;
    }
}

int pop() {
    int val;
    if(top == -1) {
        printf("\nUnderflow");
        return -1;
    }
    else {
        val = stack[top];
        top--;
        return val;
    }
}

void main() {
    int num, rev = 0, digit, place = 1;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    /* Push each digit onto stack */
    while(num > 0) {
        digit = num % 10;
        push(digit);
        num = num / 10;
    }

    /* Pop digits and build reversed number */
    while(top != -1) {
        rev = rev + pop() * place;
        place = place * 10;
    }

    printf("\nReversed number: %d", rev);
    getch();
}
```

---

## 5. 🔥 Binary Search

> **Concept:** Array must be SORTED. Compare target with middle element. If target < mid, search left half. If target > mid, search right half.
> **Time Complexity:** O(log n) — much faster than linear search.

```c
#include<stdio.h>
#include<conio.h>

void main() {
    int arr[50], n, i, key, low, high, mid, found = 0;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = 1;
            break;
        }
        else if(key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if(found == 1)
        printf("\nElement %d found at position %d", key, mid + 1);
    else
        printf("\nElement %d not found!", key);

    getch();
}
```

---

## 6. 🔥 Shell Sort

> **Concept:** Improvement on insertion sort. Starts with large gaps, reduces gap each pass. Elements at `gap` apart are compared and swapped.
> **Gap sequence:** Usually starts at `n/2`, halved each time until `gap = 1`.

```c
#include<stdio.h>
#include<conio.h>

void shellSort(int arr[], int n) {
    int gap, i, j, temp;

    for(gap = n / 2; gap > 0; gap = gap / 2) {
        for(i = gap; i < n; i++) {
            temp = arr[i];
            j = i;
            while(j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j = j - gap;
            }
            arr[j] = temp;
        }
    }
}

void main() {
    int arr[50], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    shellSort(arr, n);

    printf("\nSorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    getch();
}
```

---

## 7. 🔥 Array Operations — Menu Driven (Print/Insert/Delete at Position)

> **Concept:** Shifting elements right for insert, left for delete.
> **Tip:** Remember insert shifts elements from end to `pos`, delete shifts from `pos` to end.

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 100

int arr[SIZE], n;

void printArray() {
    int i;
    if(n == 0) {
        printf("\nArray is empty!");
        return;
    }
    printf("\nArray elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void insertAtPos(int pos, int ele) {
    int i;
    if(n >= SIZE) {
        printf("\nArray is full!");
        return;
    }
    if(pos < 0 || pos > n) {
        printf("\nInvalid position!");
        return;
    }
    for(i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = ele;
    n++;
    printf("\n%d inserted at position %d", ele, pos);
}

void deleteAtPos(int pos) {
    int i;
    if(n == 0) {
        printf("\nArray is empty!");
        return;
    }
    if(pos < 0 || pos >= n) {
        printf("\nInvalid position!");
        return;
    }
    printf("\n%d deleted from position %d", arr[pos], pos);
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void main() {
    int ch, i, pos, ele;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n\n--- ARRAY MENU ---");
        printf("\n1. Print");
        printf("\n2. Insert at position");
        printf("\n3. Delete at position");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printArray();
                break;
            case 2:
                printf("\nEnter position: ");
                scanf("%d", &pos);
                printf("\nEnter element: ");
                scanf("%d", &ele);
                insertAtPos(pos, ele);
                break;
            case 3:
                printf("\nEnter position: ");
                scanf("%d", &pos);
                deleteAtPos(pos);
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while(ch != 4);
    getch();
}
```

---

## 8. ⭐ Singly Linked List (Create/Display/Insert at Position/Delete Last)

> **Concept:** Each node has `data` and `next` pointer. Head points to first node. Last node's `next` is `NULL` (0).
> **Key:** `malloc(sizeof(struct node))` for creating new nodes.

> [!warning]
> **Common Mistakes:**
> - Forgetting to set `newnode->next = 0` (NULL)
> - Not handling empty list case (`head == 0`)
> - For delete last: need TWO pointers (current + previous)

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = 0, *temp;

void create(int data) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = 0;

    if(head == 0) {
        head = newnode;
    }
    else {
        temp = head;
        while(temp->next != 0) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    printf("\n%d added to list", data);
}

void display() {
    if(head == 0) {
        printf("\nList is empty!");
        return;
    }
    temp = head;
    printf("\nList: ");
    while(temp != 0) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void insertAtPos(int val, int pos) {
    int i = 1;
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = 0;

    if(pos == 1) {
        newnode->next = head;
        head = newnode;
        printf("\n%d inserted at position %d", val, pos);
        return;
    }

    temp = head;
    while(i < pos - 1 && temp != 0) {
        temp = temp->next;
        i++;
    }

    if(temp == 0) {
        printf("\nInvalid position!");
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    printf("\n%d inserted at position %d", val, pos);
}

void deleteLast() {
    struct node *prev;
    if(head == 0) {
        printf("\nList is empty!");
        return;
    }
    if(head->next == 0) {
        printf("\n%d deleted", head->data);
        free(head);
        head = 0;
        return;
    }
    temp = head;
    while(temp->next != 0) {
        prev = temp;
        temp = temp->next;
    }
    printf("\n%d deleted", temp->data);
    prev->next = 0;
    free(temp);
}

void main() {
    int ch, val, pos;
    clrscr();

    do {
        printf("\n\n--- SINGLY LINKED LIST MENU ---");
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Insert at Position");
        printf("\n4. Delete Last");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nEnter value: ");
                scanf("%d", &val);
                create(val);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("\nEnter value: ");
                scanf("%d", &val);
                printf("Enter position: ");
                scanf("%d", &pos);
                insertAtPos(val, pos);
                break;
            case 4:
                deleteLast();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while(ch != 5);
    getch();
}
```

---

## 9. ⭐ Singly Linked List — Insert First & Delete First

> This variant appears when exam asks Insert-First instead of Insert-at-Position.

```c
/* Insert at First - add to any SLL program */
void insertFirst(int val) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;
    head = newnode;
    printf("\n%d inserted at first", val);
}

/* Delete from First - add to any SLL program */
void deleteFirst() {
    struct node *temp;
    if(head == 0) {
        printf("\nList is empty!");
        return;
    }
    temp = head;
    printf("\n%d deleted", temp->data);
    head = head->next;
    free(temp);
}
```

---

## 10. ⭐ SLL Advanced — Count Nodes, Copy List, Merge, Search

> These appear in the exam as a separate SLL question with specialized operations.

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head1 = 0, *head2 = 0, *temp;

void create(struct node **head, int data) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = 0;

    if(*head == 0) {
        *head = newnode;
    }
    else {
        temp = *head;
        while(temp->next != 0)
            temp = temp->next;
        temp->next = newnode;
    }
}

void display(struct node *head) {
    if(head == 0) {
        printf("\nList is empty!");
        return;
    }
    temp = head;
    printf("\nList: ");
    while(temp != 0) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

/* Count total nodes */
int countNodes(struct node *head) {
    int count = 0;
    temp = head;
    while(temp != 0) {
        count++;
        temp = temp->next;
    }
    return count;
}

/* Copy linked list */
void copyList(struct node *src, struct node **dest) {
    temp = src;
    while(temp != 0) {
        create(dest, temp->data);
        temp = temp->next;
    }
}

/* Merge two linked lists */
void mergeLists() {
    if(head1 == 0) {
        head1 = head2;
        return;
    }
    temp = head1;
    while(temp->next != 0)
        temp = temp->next;
    temp->next = head2;
    printf("\nLists merged!");
}

/* Search for a node */
void search(struct node *head, int key) {
    int pos = 1, found = 0;
    temp = head;
    while(temp != 0) {
        if(temp->data == key) {
            found = 1;
            break;
        }
        pos++;
        temp = temp->next;
    }
    if(found)
        printf("\n%d found at position %d", key, pos);
    else
        printf("\n%d not found!", key);
}

void main() {
    int ch, val;
    clrscr();

    do {
        printf("\n\n--- SLL ADVANCED MENU ---");
        printf("\n1. Create List 1");
        printf("\n2. Create List 2");
        printf("\n3. Display List 1");
        printf("\n4. Display List 2");
        printf("\n5. Count Nodes List 1");
        printf("\n6. Copy List 1 to List 2");
        printf("\n7. Merge Lists");
        printf("\n8. Search in List 1");
        printf("\n9. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nEnter value: ");
                scanf("%d", &val);
                create(&head1, val);
                break;
            case 2:
                printf("\nEnter value: ");
                scanf("%d", &val);
                create(&head2, val);
                break;
            case 3:
                display(head1);
                break;
            case 4:
                display(head2);
                break;
            case 5:
                printf("\nTotal nodes: %d", countNodes(head1));
                break;
            case 6:
                copyList(head1, &head2);
                printf("\nList copied!");
                display(head2);
                break;
            case 7:
                mergeLists();
                display(head1);
                break;
            case 8:
                printf("\nEnter value to search: ");
                scanf("%d", &val);
                search(head1, val);
                break;
            case 9:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while(ch != 9);
    getch();
}
```

---

## 11. ⭐ Doubly Linked List (Create/Display/Insert at Position/Delete Last)

> **Concept:** Each node has `prev`, `data`, and `next`. Allows traversal in both directions.
> **Key difference from SLL:** Must set BOTH `prev` and `next` pointers when inserting/deleting.

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = 0, *temp;

void create(int data) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = 0;
    newnode->next = 0;

    if(head == 0) {
        head = newnode;
    }
    else {
        temp = head;
        while(temp->next != 0)
            temp = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
    printf("\n%d added", data);
}

void display() {
    if(head == 0) {
        printf("\nList is empty!");
        return;
    }
    temp = head;
    printf("\nList: ");
    while(temp != 0) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void insertAtPos(int val, int pos) {
    int i = 1;
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = val;
    newnode->prev = 0;
    newnode->next = 0;

    if(pos == 1) {
        newnode->next = head;
        if(head != 0)
            head->prev = newnode;
        head = newnode;
        printf("\n%d inserted at position %d", val, pos);
        return;
    }

    temp = head;
    while(i < pos - 1 && temp != 0) {
        temp = temp->next;
        i++;
    }

    if(temp == 0) {
        printf("\nInvalid position!");
        return;
    }

    newnode->next = temp->next;
    newnode->prev = temp;
    if(temp->next != 0)
        temp->next->prev = newnode;
    temp->next = newnode;
    printf("\n%d inserted at position %d", val, pos);
}

void deleteLast() {
    if(head == 0) {
        printf("\nList is empty!");
        return;
    }
    if(head->next == 0) {
        printf("\n%d deleted", head->data);
        free(head);
        head = 0;
        return;
    }
    temp = head;
    while(temp->next != 0)
        temp = temp->next;
    printf("\n%d deleted", temp->data);
    temp->prev->next = 0;
    free(temp);
}

void deleteFirst() {
    if(head == 0) {
        printf("\nList is empty!");
        return;
    }
    temp = head;
    printf("\n%d deleted", temp->data);
    head = head->next;
    if(head != 0)
        head->prev = 0;
    free(temp);
}

void main() {
    int ch, val, pos;
    clrscr();

    do {
        printf("\n\n--- DOUBLY LINKED LIST MENU ---");
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Insert at Position");
        printf("\n4. Delete Last");
        printf("\n5. Delete First");
        printf("\n6. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nEnter value: ");
                scanf("%d", &val);
                create(val);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("\nEnter value: ");
                scanf("%d", &val);
                printf("Enter position: ");
                scanf("%d", &pos);
                insertAtPos(val, pos);
                break;
            case 4:
                deleteLast();
                break;
            case 5:
                deleteFirst();
                break;
            case 6:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while(ch != 6);
    getch();
}
```

---

## 12. ⭐ Circular Linked List (Create/Display/Insert First/Delete Last)

> **Concept:** Last node points back to head (no NULL). Must handle the circular link carefully.
> **Key difference:** Traversal stops when `temp->next == head`, not when `temp == NULL`.

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = 0, *temp;

void create(int data) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;

    if(head == 0) {
        head = newnode;
        newnode->next = head;  /* points to itself */
    }
    else {
        temp = head;
        while(temp->next != head)
            temp = temp->next;
        temp->next = newnode;
        newnode->next = head;
    }
    printf("\n%d added", data);
}

void display() {
    if(head == 0) {
        printf("\nList is empty!");
        return;
    }
    temp = head;
    printf("\nList: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != head);
    printf("(HEAD)");
}

void insertFirst(int val) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = val;

    if(head == 0) {
        head = newnode;
        newnode->next = head;
    }
    else {
        /* Find last node */
        temp = head;
        while(temp->next != head)
            temp = temp->next;
        newnode->next = head;
        temp->next = newnode;
        head = newnode;
    }
    printf("\n%d inserted at first", val);
}

void deleteLast() {
    struct node *prev;
    if(head == 0) {
        printf("\nList is empty!");
        return;
    }
    if(head->next == head) {
        /* Only one node */
        printf("\n%d deleted", head->data);
        free(head);
        head = 0;
        return;
    }
    temp = head;
    while(temp->next != head) {
        prev = temp;
        temp = temp->next;
    }
    printf("\n%d deleted", temp->data);
    prev->next = head;
    free(temp);
}

void main() {
    int ch, val;
    clrscr();

    do {
        printf("\n\n--- CIRCULAR LINKED LIST MENU ---");
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Insert First");
        printf("\n4. Delete Last");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nEnter value: ");
                scanf("%d", &val);
                create(val);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("\nEnter value: ");
                scanf("%d", &val);
                insertFirst(val);
                break;
            case 4:
                deleteLast();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while(ch != 5);
    getch();
}
```

---

## 13. ⭐ Stack Using Linked List (Push/Pop/Peek/Display)

> **Concept:** Instead of array, use linked list as underlying storage. Push/Pop happen at the HEAD (front of list) for O(1) operations.
> **No overflow possible** (unless memory runs out).

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = 0;  /* top is like head */

void push(int val) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = top;
    top = newnode;
    printf("\n%d pushed", val);
}

void pop() {
    struct node *temp;
    if(top == 0) {
        printf("\nStack Underflow!");
        return;
    }
    temp = top;
    printf("\n%d popped", temp->data);
    top = top->next;
    free(temp);
}

void peek() {
    if(top == 0) {
        printf("\nStack is Empty!");
        return;
    }
    printf("\nTop element = %d", top->data);
}

void display() {
    struct node *temp;
    if(top == 0) {
        printf("\nStack is Empty!");
        return;
    }
    temp = top;
    printf("\nStack (top to bottom):\n");
    while(temp != 0) {
        printf("| %d |\n", temp->data);
        temp = temp->next;
    }
}

void main() {
    int ch, val;
    clrscr();

    do {
        printf("\n\n--- STACK (Linked List) MENU ---");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nEnter value: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while(ch != 5);
    getch();
}
```

---

## 14. ⭐ Insertion Sort

```c
#include<stdio.h>
#include<conio.h>

void insertionSort(int arr[], int n) {
    int i, j, key;
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void main() {
    int arr[50], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    insertionSort(arr, n);

    printf("\nSorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    getch();
}
```

---

## 15. � Quick Sort

```c
#include<stdio.h>
#include<conio.h>

void quickSort(int arr[], int low, int high) {
    int i, j, pivot, temp;

    if(low < high) {
        pivot = arr[low];
        i = low;
        j = high;

        while(i < j) {
            while(arr[i] <= pivot && i < high)
                i++;
            while(arr[j] > pivot)
                j--;
            if(i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        /* Place pivot at correct position */
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}

void main() {
    int arr[50], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, n - 1);

    printf("\nSorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    getch();
}
```

---

## 16. � Bubble Sort

```c
#include<stdio.h>
#include<conio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main() {
    int arr[50], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bubbleSort(arr, n);

    printf("\nSorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    getch();
}
```

---

## 17. � Selection Sort

```c
#include<stdio.h>
#include<conio.h>

void selectionSort(int arr[], int n) {
    int i, j, min, temp;
    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void main() {
    int arr[50], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    selectionSort(arr, n);

    printf("\nSorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    getch();
}
```

---

## 18. � Queue Using Linked List (Enqueue/Dequeue/Peek/Display)

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = 0, *rear = 0;

void enqueue(int val) {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = 0;

    if(rear == 0) {
        front = newnode;
        rear = newnode;
    }
    else {
        rear->next = newnode;
        rear = newnode;
    }
    printf("\n%d enqueued", val);
}

void dequeue() {
    struct node *temp;
    if(front == 0) {
        printf("\nQueue Underflow!");
        return;
    }
    temp = front;
    printf("\n%d dequeued", temp->data);
    front = front->next;
    if(front == 0)
        rear = 0;
    free(temp);
}

void peek() {
    if(front == 0) {
        printf("\nQueue is Empty!");
        return;
    }
    printf("\nFront element = %d", front->data);
}

void display() {
    struct node *temp;
    if(front == 0) {
        printf("\nQueue is Empty!");
        return;
    }
    temp = front;
    printf("\nQueue: ");
    while(temp != 0) {
        printf("| %d ", temp->data);
        temp = temp->next;
    }
    printf("|");
}

void main() {
    int ch, val;
    clrscr();

    do {
        printf("\n\n--- QUEUE (Linked List) MENU ---");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nEnter value: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while(ch != 5);
    getch();
}
```

---

# RAPID REVISION — Last Minute Cheat Sheet

> Read this section just before entering the exam hall.

## Memory Hooks — Key Patterns

| Data Structure | Init | Empty Check | Full Check |
|---|---|---|---|
| **Stack (Array)** | `top = -1` | `top == -1` | `top == SIZE-1` |
| **Simple Queue** | `front = rear = -1` | `front == -1 && rear == -1` | `rear == SIZE-1` |
| **Circular Queue** | `front = rear = -1` | `front == -1 && rear == -1` | `(rear+1)%SIZE == front` |
| **Stack (LL)** | `top = 0 (NULL)` | `top == 0` | Never full |
| **Queue (LL)** | `front = rear = 0` | `front == 0` | Never full |
| **Linked List** | `head = 0` | `head == 0` | Never full |

## Quick-Fire Algorithm Summaries

### Sorting — One-Line Mnemonics

| Algorithm | Key Idea | Loop Structure |
|---|---|---|
| **Bubble** | Adjacent swap, largest bubbles to end | `i: 0→n-2`, `j: 0→n-2-i` |
| **Selection** | Find min, swap with current position | `i: 0→n-2`, `j: i+1→n-1` |
| **Insertion** | Pick element, insert into sorted left part | `i: 1→n-1`, `j: i-1→0 (while)` |
| **Shell** | Insertion sort with decreasing gaps | `gap: n/2→1`, then insertion |
| **Quick** | Partition around pivot, recurse both halves | Recursive, `i` from left, `j` from right |

### Linked List Operations — Quick Steps

**Create Node (SLL):**
`malloc → set data → set next=0 → if head==0: head=new, else: traverse to last, last->next=new`

**Insert First (SLL):**
`malloc → set data → new->next=head → head=new`

**Delete Last (SLL):**
`Two pointers: prev and temp → traverse → prev->next=0 → free(temp)`

**Insert First (Circular LL):**
`malloc → find last node → new->next=head → last->next=new → head=new`

**DLL Insert:** Set FOUR links: `new->next`, `new->prev`, `prev_node->next`, `next_node->prev`

## Turbo C Template — Copy This First

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* globals here */

void main() {
    int ch;
    clrscr();

    do {
        printf("\n--- MENU ---");
        /* menu options */
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: break;
            /* more cases */
            default: printf("\nInvalid choice!");
        }
    } while(ch != 0);
    getch();
}
```

---

# Exam Strategy & Tips

## Before You Start Coding

1. **Read the question carefully** — note exact operations asked (Insert-First vs Insert-Last vs Insert-at-Position)
2. **Plan your functions** — list all function names on paper first
3. **Start with the template** — `#include`, globals, `main()` with menu loop
4. **Write functions one by one** — compile after each function to catch errors early

## Structure your program in this order:

```
1. #include headers
2. #define constants
3. Global variables / struct definition
4. Function declarations (prototypes)
5. Menu function
6. main() function with do-while + switch
7. All function definitions
```

## Common Turbo C Pitfalls

| Mistake | Fix |
|---|---|
| `int main()` | Use `void main()` in Turbo C |
| Missing `clrscr()` | Always add at start of `main()` |
| Missing `getch()` | Always add at end of `main()` |
| Modern C99 features | Declare ALL variables at TOP of function |
| `//` comments in Turbo C | Use `/* */` if `//` doesn't work |
| `NULL` not recognized | Use `0` instead of `NULL` |
| Missing `#include<stdlib.h>` | Needed for `malloc()`, `exit()` |
| Forgetting `&` in `scanf` | `scanf("%d", &var)` — ALWAYS check this |

## Debugging in Turbo C

1. **Compile first** (Alt+F9) — fix ALL errors before running
2. **Common error messages:**
   - "Undefined symbol" → Variable not declared, or typo in name
   - "Type mismatch" → Wrong type in function call/return
   - "Statement missing ;" → Check previous line for missing semicolon
3. **If output is garbage** → Check if variable is initialized
4. **If program crashes** → Check for NULL pointer access (accessing `temp->data` when `temp == 0`)
5. **Use `printf` debugging** — Add `printf("HERE %d", variable)` to trace execution

## What Examiners Check

1. **Does it compile without errors?** — This is the MOST important thing
2. **Does output match expected results?** — Test with simple inputs
3. **Menu-driven with clear options?** — Always use switch-case menu
4. **Edge cases handled?** — Empty stack/queue/list, overflow/underflow messages
5. **Code organization** — Clean indentation, meaningful variable names
6. **Comments** — At least a few comments showing you understand the logic
7. **Front/Rear/Top values displayed** — If question asks, SHOW these values

## Time Management (2.5 hours)

| Task | Time | Notes |
|---|---|---|
| Read all 3 questions | 5 min | Identify which ones you know best |
| Q1 (15 marks) | 40-50 min | Start with the one you're most confident about |
| Q2 (15 marks) | 40-50 min | |
| Q3 (10 marks) | 20-30 min | Usually shorter (sorting/search) |
| Testing & cleanup | 15-20 min | Compile, run, verify outputs |
| Viva preparation | — | Be ready to explain your code logic |

## Viva Preparation — Common Questions

Be ready to answer:
- What is the **time complexity** of the algorithm you used?
- What is the difference between **stack and queue**?
- What is the advantage of **circular queue** over simple queue?
- What is the difference between **singly and doubly linked list**?
- Explain **overflow** and **underflow** conditions
- What is a **pointer**? How does `malloc` work?
- What is the difference between **stack using array** vs **stack using linked list**?

| Topic | Key Answer |
|---|---|
| Stack vs Queue | Stack = LIFO, Queue = FIFO |
| Circular Queue advantage | Reuses empty spaces at front |
| SLL vs DLL | DLL has `prev` pointer, can traverse backwards |
| Array vs Linked List | Array = fixed size, LL = dynamic |
| `malloc()` | Allocates memory at runtime from heap |
| Time: Binary Search | O(log n) |
| Time: Bubble/Selection/Insertion Sort | O(n²) |
| Time: Quick Sort | O(n log n) average, O(n²) worst |
| Time: Shell Sort | O(n log n) to O(n²) depending on gap |

---

> [!tip]
> **Final tip:** If you get stuck on a specific operation (like delete-at-position in DLL), just write the rest of the program perfectly. Getting 12/15 is better than getting 0 because you spent all time on one tricky function! Good luck!
