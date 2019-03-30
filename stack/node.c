//
//  node.c
//  stack
//
//  Created by lily on 2019/3/30.
//  Copyright © 2019年 lily. All rights reserved.
//

#include "node.h"
#include <stdlib.h>
//push new value into stack
struct NODE* push(struct NODE* stack_top, int value) {
    struct NODE* original_top=stack_top;
    stack_top=(struct NODE*)malloc(sizeof(struct NODE));
    stack_top->value=value;
    stack_top->next=original_top;
    return stack_top;
}
struct NODE* pop(struct NODE* stack_top) { //pop off the stack top
    if (stack_top!=NULL) {
        struct NODE* original_top=stack_top;
        stack_top=stack_top->next;
        free(original_top);
    }
    return stack_top;
}
int get_top(const struct NODE* stack_top) {//get the content in the stack top
    if (stack_top==NULL) {
        printf("error: the stack is already empty.\n");
        return -1;
    }
    return stack_top->value;
}
struct NODE* destroy(struct NODE* stack_top) {//destroy the stack structure
    while (stack_top!=NULL)
        stack_top=pop(stack_top);
    return stack_top;
}
void display(const struct NODE* stack_top) { //display content inside the stack
    struct NODE* current=stack_top;
    if (current==NULL) {
        printf("the stack is already empty.\n");
        return;
    }
    while (current->next!=NULL) {
        printf("%d, ", current->value);
        current=current->next;
    }
    printf("%d.\n", current->value);
}
