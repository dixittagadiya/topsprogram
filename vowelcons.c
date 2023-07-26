#include<stdio.h>
#include<conio.h>
main()
{
    char a;

    printf("Enter charactor:");
    scanf("%c",&a);

    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        printf("%c is vowel:",a);
    }
    else
    {
        printf("%c is constant",a);
    }

    getch();
}
