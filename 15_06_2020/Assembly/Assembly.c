#include <stdio.h>
#include <stdlib.h>

/* ASSEMBLY IN C
    We can do some assembly coding in C using the asm{} block. Assembly, in a very simple way, works like this:

    TASK  DESTINATION,  ORIGIN
    As in:
    mov  d3,b2

    Which means, move the contents of the address b2 into the d3 address
*/

int main()
{
    int a=10, b=20, c;

    asm {

        mov ax,a
        mov bx,b
        add ax,bx
        mov c,ax
    }
    printf("%d", c);

    return 0;
}
