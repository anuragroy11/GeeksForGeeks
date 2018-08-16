/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* 
The structure of the class is
class Stack
{
private:
    int arr[1000];
    int top;
public:
    Stack(){top=-1;}
    int pop();
    void push(int);
};
 */
/* The method push to push element into the stack */
void Stack :: push(int x) {
    top = top + 1;
    arr[top] = x;
}
/*The method pop which return the element poped out of the stack*/
int Stack :: pop() {
    if (top == -1)
        return -1;
    else {
        top = top - 1;
        return arr[top + 1];
    }
}
