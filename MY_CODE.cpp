#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n1,n2,n3,n4,n5;
    while(1)
    {
        printf("\nChoose Your Game Level : \n");
        printf("1: Easy\n");
        printf("2: Medium\n");
        printf("3: Hard\n");
        printf("\n4: Exit\n\n");

        scanf("%d",&x);

        switch (x)
        {
            case 1: printf("You have select Easy Game Level :\n\n");

               printf("\nA) Who invented C Language.? \n1) Charles Babbage \n2) Grahambel \n3) Dennis Ritchie \n4) Steve Jobs\n");
               printf("Ans : ");
               scanf("%d",&n1);

               printf("\nB) C is a which level language.? \n1) Low Level \n2) High Level \n3) Low + High \n4) None\n");
               printf("Ans : ");
               scanf("%d",&n2);

               printf("\nC) Low level language is .? \n1) Human readable like language. \n2) language with big program size. \n3) language with small program size. \n4) Difficult to understand and readability is questionable.\n");
               printf("Ans : ");
               scanf("%d",&n3);

               printf("\nD) C is _______ type of programming language.? \n1) Object Oriented \n2) Procedural \n3) Bit level language \n4) Functional\n");
               printf("Ans : ");
               scanf("%d",&n4);

               printf("\nE) C language is used in the development of .? \n1) Databases \n2) Graphic applications \n3) Word Processors \n4) All of the above\n");
               printf("Ans : ");
               scanf("%d",&n5);

               printf("\n\n*THANK YOU FOR ATTEMPTING THE TEST*\n\n");
               printf("Result After 30 Second.\n");
               printf("Result : ");

               if(n1==3 && n2==2 && n3==4 && n4==2 && n5==4)
                printf("Very Strong (5)");
               else if((n1==3 && n2==2 && n3==4 && n4==2 && n5!=4) || (n1==3 && n2==2 && n3==4 && n4!=2 && n5==4) || (n1==3 && n2==2 && n3!=4 && n4==2 && n5==4) || (n1==3 && n2!=2 && n3==4 && n4==2 && n5==4) || (n1!=3 && n2==2 && n3==4 && n4==2 && n5==4))
                printf("Strong (4)");
               else if((n1==3 && n2==2 && n3!=4 && n4!=2 && n5!=4) || (n1==3 && n2!=2 && n3==4 && n4!=2 && n5!=4) || (n1==3 && n2!=2 && n3!=4 && n4==2 && n5!=4) || (n1==3 && n2!=2 && n3!=4 && n4!=2 && n5==4) || (n1!=3 && n2==2 && n3==4 && n4!=2 && n5!=4) || (n1!=3 && n2==2 && n3!=4 && n4==2 && n5!=4) || (n1!=3 && n2==2 && n3!=4 && n4!=2 && n5==4) || (n1!=3 && n2!=2 && n3==4 && n4==2 && n5!=4) || (n1!=3 && n2!=2 && n3==4 && n4!=2 && n5==4) || (n1!=3 && n2!=2 && n3!=4 && n4==2 && n5==4))
                printf("Bad (2)");
               else if((n1==3 && n2!=2 && n3!=4 && n4!=2 && n5!=4) || (n1!=3 && n2==2 && n3!=4 && n4!=2 && n5!=4) || (n1!=3 && n2!=2 && n3==4 && n4!=2 && n5!=4) || (n1!=3 && n2!=2 && n3!=4 && n4==2 && n5!=4) || (n1!=3 && n2!=2 && n3!=4 && n4!=2 && n5==4))
                printf("Poor (1)");
               else
                printf("Good (3)");
               break;

            case 2: printf("You have select Medium Game Level :");

               printf("\nA) Who invented C Language.? \n1) Charles Babbage \n2) Grahambel \n3) Dennis Ritchie \n4) Steve Jobs\n");
               printf("Ans : ");
               scanf("%d",&n1);

               printf("\nB) C is a which level language.? \n1) Low Level \n2) High Level \n3) Low + High \n4) None\n");
               printf("Ans : ");
               scanf("%d",&n2);

               printf("\nC) Low level language is .? \n1) Human readable like language. \n2) language with big program size. \n3) language with small program size. \n4) Difficult to understand and readability is questionable.\n");
               printf("Ans : ");
               scanf("%d",&n3);

               printf("\nD) C is _______ type of programming language.? \n1) Object Oriented \n2) Procedural \n3) Bit level language \n4) Functional\n");
               printf("Ans : ");
               scanf("%d",&n4);

               printf("\nE) C language is used in the development of .? \n1) Databases \n2) Graphic applications \n3) Word Processors \n4) All of the above\n");
               printf("Ans : ");
               scanf("%d",&n5);

               printf("\n\n*THANK YOU FOR ATTEMPTING THE TEST*\n\n");
               printf("Result After 30 Second.\n");
               printf("Result : ");

               if(n1==3 && n2==2 && n3==4 && n4==2 && n5==4)
                printf("Very Strong (5)");
               else if((n1==3 && n2==2 && n3==4 && n4==2 && n5!=4) || (n1==3 && n2==2 && n3==4 && n4!=2 && n5==4) || (n1==3 && n2==2 && n3!=4 && n4==2 && n5==4) || (n1==3 && n2!=2 && n3==4 && n4==2 && n5==4) || (n1!=3 && n2==2 && n3==4 && n4==2 && n5==4))
                printf("Strong (4)");
               else if((n1==3 && n2==2 && n3!=4 && n4!=2 && n5!=4) || (n1==3 && n2!=2 && n3==4 && n4!=2 && n5!=4) || (n1==3 && n2!=2 && n3!=4 && n4==2 && n5!=4) || (n1==3 && n2!=2 && n3!=4 && n4!=2 && n5==4) || (n1!=3 && n2==2 && n3==4 && n4!=2 && n5!=4) || (n1!=3 && n2==2 && n3!=4 && n4==2 && n5!=4) || (n1!=3 && n2==2 && n3!=4 && n4!=2 && n5==4) || (n1!=3 && n2!=2 && n3==4 && n4==2 && n5!=4) || (n1!=3 && n2!=2 && n3==4 && n4!=2 && n5==4) || (n1!=3 && n2!=2 && n3!=4 && n4==2 && n5==4))
                printf("Bad (2)");
               else if((n1==3 && n2!=2 && n3!=4 && n4!=2 && n5!=4) || (n1!=3 && n2==2 && n3!=4 && n4!=2 && n5!=4) || (n1!=3 && n2!=2 && n3==4 && n4!=2 && n5!=4) || (n1!=3 && n2!=2 && n3!=4 && n4==2 && n5!=4) || (n1!=3 && n2!=2 && n3!=4 && n4!=2 && n5==4))
                printf("Poor (1)");
               else
                printf("Good (3)");
               break;

            case 3: printf("You have select Hard Game Level :");

               printf("\nA) Who invented C Language.? \n1) Charles Babbage \n2) Grahambel \n3) Dennis Ritchie \n4) Steve Jobs\n");
               printf("Ans : ");
               scanf("%d",&n1);

               printf("\nB) C is a which level language.? \n1) Low Level \n2) High Level \n3) Low + High \n4) None\n");
               printf("Ans : ");
               scanf("%d",&n2);

               printf("\nC) Low level language is .? \n1) Human readable like language. \n2) language with big program size. \n3) language with small program size. \n4) Difficult to understand and readability is questionable.\n");
               printf("Ans : ");
               scanf("%d",&n3);

               printf("\nD) C is _______ type of programming language.? \n1) Object Oriented \n2) Procedural \n3) Bit level language \n4) Functional\n");
               printf("Ans : ");
               scanf("%d",&n4);

               printf("\nE) C language is used in the development of .? \n1) Databases \n2) Graphic applications \n3) Word Processors \n4) All of the above\n");
               printf("Ans : ");
               scanf("%d",&n5);

               printf("\n\n*THANK YOU FOR ATTEMPTING THE TEST*\n\n");
               printf("Result After 30 Second.\n");
               printf("Result : ");

               if(n1==3 && n2==2 && n3==4 && n4==2 && n5==4)
                printf("Very Strong (5)");
               else if((n1==3 && n2==2 && n3==4 && n4==2 && n5!=4) || (n1==3 && n2==2 && n3==4 && n4!=2 && n5==4) || (n1==3 && n2==2 && n3!=4 && n4==2 && n5==4) || (n1==3 && n2!=2 && n3==4 && n4==2 && n5==4) || (n1!=3 && n2==2 && n3==4 && n4==2 && n5==4))
                printf("Strong (4)");
               else if((n1==3 && n2==2 && n3!=4 && n4!=2 && n5!=4) || (n1==3 && n2!=2 && n3==4 && n4!=2 && n5!=4) || (n1==3 && n2!=2 && n3!=4 && n4==2 && n5!=4) || (n1==3 && n2!=2 && n3!=4 && n4!=2 && n5==4) || (n1!=3 && n2==2 && n3==4 && n4!=2 && n5!=4) || (n1!=3 && n2==2 && n3!=4 && n4==2 && n5!=4) || (n1!=3 && n2==2 && n3!=4 && n4!=2 && n5==4) || (n1!=3 && n2!=2 && n3==4 && n4==2 && n5!=4) || (n1!=3 && n2!=2 && n3==4 && n4!=2 && n5==4) || (n1!=3 && n2!=2 && n3!=4 && n4==2 && n5==4))
                printf("Bad (2)");
               else if((n1==3 && n2!=2 && n3!=4 && n4!=2 && n5!=4) || (n1!=3 && n2==2 && n3!=4 && n4!=2 && n5!=4) || (n1!=3 && n2!=2 && n3==4 && n4!=2 && n5!=4) || (n1!=3 && n2!=2 && n3!=4 && n4==2 && n5!=4) || (n1!=3 && n2!=2 && n3!=4 && n4!=2 && n5==4))
                printf("Poor (1)");
               else
                printf("Good (3)");
               break;

            case 4: exit(0);

            default: printf("Please select correct game level.");
                     break;
        }
   }
   return 0;
}
