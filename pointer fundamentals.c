#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    printf("a=%d\n",a);
    printf("&a=%d\n",&a);
    int* p;
    p=&a;
    printf("p=%d\n",p);
    printf("*p=%d\n",*p);

//    int b=20;
//    *p=b;
//    printf("After *p=b \n");
//    printf("p=%d *p=%d a=%d b=%d\n",p,*p,a,b);

    int b=20;
    printf("&b=%d\n",&b);
    p=&b;
    printf("After p=&b \n");
    printf("p=%d *p=%d a=%d b=%d\n",p,*p,a,b);

    printf("p+1=%d\n",p+1);
    printf("*(p+1)=%d\n",*(p+1));
    printf("*p+1=%d\n",*p+1);

    printf("p+2=%d\n",p+2);
    printf("*(p+2)=%d\n",*(p+2));
    printf("*p+2=%d\n",*p+2);

    int** q;
    q=&p;
    printf("&p=%d\n",&p);
    printf("q=%d\n",q);
    printf("*q=%d\n",*q);
    printf("**q=%d\n",**q);

    int*** r;
    r=&q;
    printf("&q=%d\n",&q);
    printf("r=%d\n",r);
    printf("*r=%d\n",*r);
    printf("**r=%d\n",**r);
    printf("***r=%d\n",***r);
    return 0;
}

/*This C program demonstrates pointer fundamentals, including basic pointer operations, pointer arithmetic, and multi-level pointers (double and triple pointers). It shows how pointers store memory addresses, how dereferencing accesses values, and how pointer arithmetic moves through memory in increments of the data type size.

*/
