#include<stdio.h>
int main() 
{
    int var1 =0;
    int var2 =0;
    scanf("%d" ,& var1);
    scanf("%d" ,& var2);
    if(var1 > var2) {
	    printf("var 1 is greater than var 2");
        printf("\n%d",(var1-var2));
    } else {
        printf("var 2 is greater than var 1");
        printf("\n%d",(var2-var1));
    }
    return 0;
}
