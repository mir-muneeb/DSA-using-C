#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

// Stack structure
char stack[SIZE];
int top = -1;

// Function prototypes
void push(char c);
char pop();
char peek();
int precedence(char c);
int is_operator(char c);
void infix_to_postfix(const char* infix, char* postfix);

int main() {
    char infix[SIZE], postfix[SIZE];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infix_to_postfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}

// Push operation
void push(char c) {
    if (top == SIZE - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = c;
}

// Pop operation
char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Peek operation
char peek() {
    if (top == -1) {
        return '\0';
    }
    return stack[top];
}

// Function to check precedence of operators
int precedence(char c) {
    switch (c) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

// Function to check if a character is an operator
int is_operator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// Function to convert infix to postfix
void infix_to_postfix(const char* infix, char* postfix) {
    int i = 0, j = 0;
    char c;

    while ((c = infix[i++]) != '\0') {
        if (isalnum(c)) { // If operand, add to postfix
            postfix[j++] = c;
        } else if (c == '(') { // If '(', push to stack
            push(c);
        } else if (c == ')') { // If ')', pop until '(' is found
            while (top != -1 && peek() != '(') {
                postfix[j++] = pop();
            }
            if (top == -1) {
                printf("Mismatched parentheses\n");
                exit(1);
            }
            pop(); // Remove '(' from stack
        } else if (is_operator(c)) { // If operator
            while (top != -1 && precedence(peek()) >= precedence(c)) {
                postfix[j++] = pop();
            }
            push(c);
        } else {
            printf("Invalid character: %c\n", c);
            exit(1);
        }
    }

    // Pop all remaining operators in the stack
    while (top != -1) {
        if (peek() == '(') {
            printf("Mismatched parentheses\n");
            exit(1);
        }
        postfix[j++] = pop();
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
}
