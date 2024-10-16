#include <stdio.h>

// a = a+b
// b = a-b


void update(int *a,int *b)
{
    int t;
    t = (*a>*b) ? (*a-*b) : (*b-*a);           //(a>b) check the a is greater than b, if true then (a-b) exicute, if false (b-a) exicutes 
                                               //or sytax can be t = abs(*a-*b); //line 10 
    *a = *a+*b;
    *b = t;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



//learned the simple conditional operation; 