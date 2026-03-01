#include <stdio.h>
#include <stdlib.h>

int func(int x){
    printf("I am in func() and my value is %d\n",x);
}
int main()
{
    for (int i=0; i<10; i++){
    func(i);
    printf("After call\n");
    }
    printf("End of program.Bye");
    return 0;
}
/*The code calls a function named func() 10 times in a loop, demonstrating how program control transfers between the main function and the called function, then returns to continue execution.
​*/
