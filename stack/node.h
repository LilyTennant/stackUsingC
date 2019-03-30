//
//  node.h
//  stack
//
//  Created by lily on 2019/3/30.
//  Copyright © 2019年 lily. All rights reserved.
//

#ifndef node_h
#define node_h

#include <stdio.h>
struct NODE {
    int value;
    struct NODE* next;
};
struct NODE* push(struct NODE* stack_top, int value); //push new value into stack
struct NODE* pop(struct NODE* stack_top); //pop off the stack top
int get_top(const struct NODE* stack_top);//get the content in the stack top
struct NODE* destroy(struct NODE* stack_top);//destroy the stack structure
void display(const struct NODE* stack_top); //display content inside the stack
#endif /* node_h */
