
#include<stdio.h>
void main()
{
    char m[6];
    int a[6]={3,6,3,3,2,4};
    float t=0,c=0;
    printf("english for communication 1 ");
    gets(&m[0]);
    printf("engineering mathematics 1   ");
    gets(&m[1]);
    printf("engineering physics 1       ");
    gets(&m[2]);
    printf("engineering chemistry 1     ");
    gets(&m[3]);
    printf("health & physical education ");
    gets(&m[4]);
    printf("computing fundamentals      ");
    gets(&m[5]);
    printf("\n\n");
    for(int i=0;i<6;i++)
    {
        switch(m[i])
        {
            case ('s'):
                t=t+(a[i]*10);
                break;
            case ('a'):
                t=t+(a[i]*9);
                break;
            case ('b'):
                t=t+(a[i]*8);
                break;
            case ('c'):
                t=t+(a[i]*7);
                break;
            case ('d'):
                t=t+(a[i]*6);
                break;
            case ('e'):
                t=t+(a[i]*5);
                break;
            case ('f'):
                t=t+(a[i]*0);
                break;
            default:
                printf("%c is not a valid  grade\n",m[i]);
                c=1;
        }
    }
    printf("\n");
    if(c!=1)
    printf("cgpa is %.2f",t/21);
    else
    printf("please enter a valid grade");
}
