#include <stdio.h>
#include <string.h>

#define SIZE 5
#define TRUE 1
#define FALSE 0

// make stack 
struct _Stack {
	int data[SIZE];
	int top;
};

typedef struct _Stack Stack;

// create stack  
Stack stack;

// isEmpty
int isEmpty(){
	if(stack.top == -1) return TRUE;
	return FALSE;
}

// isFull
int isFull(){
	if(stack.top == SIZE-1) return TRUE;
	return FALSE;
}

// push
void push(int value){
	if(!isFull()){
		// increase `top + 1`
		stack.top++; 

		// push value on stack
		stack.data[stack.top] = value;
	}
	else printf("Stack Is Full Not Push()\n");
}

// pop
int pop(){
	int value = 0;

	if(!isEmpty()){
		// pop value on stack
		value = stack.data[stack.top];
		stack.data[stack.top] == '\0';

		// // decrease `top - 1`
		stack.top--;
		
		// return value
		return value;
	}
	else printf("Stack Is Empty Not Pop()\n");
}

// print the stack values 
void print(){
	if(!isEmpty()){
		// print stack values
		for(int index=stack.top; index>=0; index--) printf("stack.top ( %d ) [ %d ]\n", index, stack.data[index]);
	}
	else printf("Stack Is Empty !\n");
}

int main(){
	// initialize top is default empty
	stack.top = -1;
	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	print();

	printf("\n");
	printf("pop(%d)\n", pop());
	printf("pop(%d)\n", pop());
	print();

	printf("\n");
	push(10);
	push(100);
	print();

	printf("\npop(%d)\n", pop());
	print();
	return 0;
}