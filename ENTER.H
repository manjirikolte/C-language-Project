#include<conio.h>
int display_enter(int SUM,int ITM)
{ clrscr();
    printf("\n\t* --------------------------------------------------------");
    printf("\n\n\t\tWELCOME TO ONLINE SHOPPING MART");
    printf("\n\n\t\t\t\t\t CART [ %d ]",ITM);
    printf("\n\t\t\t\t\t    COST in Cart Rs.%d",SUM);
    printf("\n\t-------------------------------------------------------- *");
     printf("\n\n\t 5. ACCOUNTS");
    printf("\n\n\t\t\t1.WATCHES");
    printf("\n\n\t\t\t2.MOBILE ACCESESSORY");
    printf("\n\n\t\t\t3.Display itms in cart");
    printf("\n\n\t\t\t4.To Place Order");
    printf("\n\n\t\t\t6. EXIT");

    printf("\n\nEnter Choice ::");
    return 0;
}

void display_exit()
{  clrscr();
   gotoxy(10,12);
   printf("\n\t\t___________________________________________");
   printf("\n\n\t\t\t THANKS FOR VISITING\n\t\t\t\t\tVisit Us Again ");
   printf("\n\n\t\t____________________________________________");
   gotoxy(30,20);
   printf("\n\t\t\t\t\t\t _ MANJIREE KOLTE ");
}