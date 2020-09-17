#include <stdio.h>
#include <stdlib.h>

int top = -1;
    int STACK[5];

void main(){
    
    int ch;
    void push();
    void pop();
    void display();

    while(1){
        printf("\n\n1:Push \n2:Pop \n3:Display \n4:Exit");
        printf("\n\nEnter your choice(1-4)");
        scanf("%d",&ch);

        switch(ch){

            case 1: push();
            break;

            case 2: pop();
            break;

            case 3: display();
            break;

            case 4: exit(0);

            default: printf("\nWrong Choice!!");
        }
    }
}

void push(){
    int val;

    if(top==5-1){
        printf("Error: Stack Overflow\n");
    }
    else {
        printf("Enter element to push: ");
        scanf("%d", &val);
        top= top+1;
        STACK[top] = val;
    }
}

void pop(){

    if (top==-1){

        printf("Error: Stack Underflow\n");
    }

    else {
        
        printf("Deleted element is %d", STACK[top]);
        top = top-1;
    }
}

void display(){

    int i;

    if(top==-1){
        printf("Stack is EMPTY!");
    
    }

    else{

        printf("Stack is: \n");
        for(i = top;i>=0;i--)
        printf("%d\n", STACK[i]);
    }
}
