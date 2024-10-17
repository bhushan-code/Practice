// #include<stdio.h>

// int main()
// {
    
//     char s[50];
//     scanf("%[^\n]",s);

//     printf("Hello, World!\n");
//     printf("%s\n",s);

//     return 0;
// }




// #include<stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//     char ch;
//     char s[50];
//     char sen[100];

//     scanf("%c",&ch);
//     scanf("%s",s);
//     getchar();
//     scanf("%[^\n]",sen);

//     printf("%c\n",ch);
//     printf("%s\n",s);
//     printf("%s\n",sen);


//     return 0;
// }




// #include<stdio.h>

// int main()
// {

//     int iNo1 = 0, iNo2 = 0;
//     float fNo3, fNo4;

//     scanf("%d",&iNo1);
//     scanf("%d",&iNo2);
//     scanf("%f",&fNo3);
//     scanf("%f",&fNo4);

//     printf("%d %d\n",iNo1+iNo2, iNo1-iNo2);
//     printf("%0.1f %0.1f\n",fNo3+fNo4,fNo3-fNo4);
    

//     return 0;
// }




// #include<stdio.h>

// int max_of_four(int a, int b, int c, int d)
// {
//     int iMax1 = 0, iMax2;
//     iMax1 = (a>b) ? a : b;
//     iMax2 = (c>d) ? c : d;

//     return (iMax1>iMax2) ? iMax1 : iMax2;
// }

// int main()
// {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);

//     int ans = max_of_four(a, b, c, d);

//     printf("Greatest of all is : %d\n", ans);
    
//     return 0;
  
// }


#include<stdio.h>
void update(int *a, int *b)
{
    int t;
    t = *a + *b;
    *b = (*a>*b) ? (*a-*b) : (*b-*a);
    *a = t;
    
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    
    printf("%d\n%d\n", a, b);

    return 0;
}