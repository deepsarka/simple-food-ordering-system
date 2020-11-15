#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{

    int choice,order,number,a,k,y,n,price;
    char name;
    char select;
    system("cls");
    printf("                   welcome To cafe Arona");
    printf("\n    1.order\n\n    2.serve\n\n    3.display\n\n    4.Exit_the_program \n\n");
    scanf("%d", &choice);
    if (choice==1)
    {
        printf("\nEnter the name: ");
        scanf("%s", &name);
    printf("\n***********************************MENU***********************************\n");

    printf("\nItem code                DESCRIPTION******************SIZE******************PRICE(RS) ");
    printf("\n[10,11]*****************burger*********************200/100gm*****************130/180");
    printf("\n[12,13,14]**************chicken pizza***********12/14/16inch**************750/940/1240");
    printf("\n[15,16,17]**************fried chicken************3/6/12 pcs****************150/250/300");
    printf("\n[18]*********************oreo shake*****************250 mg*********************200");
    printf("\n\nhow many item you want to order?");
    scanf("%d", &number);
    printf("\nEnter chosen item code\n");
    scanf("%d", &a);
    if(a==10)
    {
        printf("200 gm of burger");
        printf("\n price 180");
    }
    else if (a==11)
    {
        printf("100 gm of burger");

    }
    else if (a==12)
    {
        printf("12 inch chicken pizza");
    }
    else if (a==13)
    {
        printf("14 inch chicken pizza");
    }
    else if (a==14)
    {
        printf("16 inch chicken pizza");
    }
    else if (a==15)
    {
        printf("3 pics fried chicken");
    }
    else if (a==16)
    {
        printf("6 pics fried chicken");
    }
    else if (a==17)
    {
        printf("12 pics fried chicken");
    }
    else if (a==18)
    {
        printf("250 mg oreo shake");
    }
    else
    {
        printf("dafult");
    }

    printf("\nplease enter the quantity: ");
    scanf("%d", &k);

    printf("\n do you wanted to order anything else?y/n\n");
    scanf("%s", &select);
    if( select =='N' || select =='n')

        {
           printf("\n Number of food ordered %d",number);
           printf("\n thank you %s for your order ",name);
           printf("your bill is %d ",a);
           printf("\nPlease wait while we pressure the food.\n");
           printf("\n    1.order\n\n    2.serve\n\n    3.display\n\n    4.Exit_the_program \n\n");
           scanf("%d", &choice);
           if(choice==2)
           {
               printf("order no. 10000 by %s is ready",name);
               printf("\n Enjoy your meal.");
           }
            printf("\n    1.order\n\n    2.serve\n\n    3.display\n\n    4.Exit_the_program \n\n");
            scanf("%d", &choice);
            if(choice==3)
            {
                printf("\n total order taken :%d",number);
                printf("\n total no. of order serve %d",number);
                printf("\n number of currently waiting to be served: 0");
                printf("\n currently preparing food for order no. 0");
            }
             printf("\n    1.order\n\n    2.serve\n\n    3.display\n\n    4.Exit_the_program \n\n");
             scanf("%d", &choice);
        }










return 0;
}
}
