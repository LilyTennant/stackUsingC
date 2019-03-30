//
//  main.c
//  stack
//
//  Created by lily on 2019/3/30.
//  Copyright © 2019年 lily. All rights reserved.
//

#include "node.h"

int main() {
    struct NODE* turner=NULL;
    int user_input;
    int loop;
    for (loop=1;loop<=5;loop=loop+1) {
        printf("Input no. %d: ", loop);
        scanf("%d",&user_input);
        turner=push(turner, user_input);
    }
    display(turner);
    printf("Top element is: %d\n", get_top(turner));
    turner=pop(turner);
    display(turner);
    turner=destroy(turner);
    display(turner);
    return 0;
}
