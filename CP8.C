// PROGRAM IN C LANGUAGE FOR ONLINE SHOPPING MART

/*Header Files*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#include "enter.h"
#include "stock.h"
#include "like.h"

struct account
{ char name[30];
  char address[40];
  int pin[8];
  int mobno[10];
}b1;

       //DEFINATION SECTION
int COD();
int debit();
void account();
void create();
int sum,j,itm,acc=0,z,x;  //j for 2nd switch case & counter
int q;

int main()
{
 int i,pr,pay,pass;         //i for 1st switch case & counter
 int a[3]={0,999,1299},b[3]={0,799,350};
 char d;
 char name[20],address[40],mob[10],pin[10];
  sum=0;itm=0;
  clrscr();
  while(i!=6)
  { display_enter(sum,itm);
    scanf("%d",&i);
    switch(i)
     { case 1:do
	      {clrscr();
	       textcolor(15);
	       printf("\n\t  ____________________________________________________________________");

	       printf("\n\n\t\t ITMS LIST                                 ");
	       printf("\n\n\t\t\t\t\t\t\t.......CART [%d]",itm);
	       printf("\n\n\t\t1.TITAN ");
	       printf("\t\tWater resistance\n\t\t\t\t\tcolour: BROWN\n\t\t\t\t\tPrice Rs.999");
	       printf("\n\t\t\t\t\tstock %d\n\t\t\t\t\tlikes",st1);
	       printf("\n\n\t\t2.FASTREACK ");
	       printf("\t\twater Resistance\n\t\t\t\t\tcolour: BLUE\n\t\t\t\t\tPrice Rs.1299");
	       printf("\n\t\t\t\t\tstock %d\n\t\t\t\t\tlikes",st2);
	       printf("\n\n____________________________________________________ ENTER 3 TO GO BACK");
	       printf("\n\n\nEnter your choice:");
		 scanf("%d",&j);
		 switch(j)
		 { case 1:  //textcolor();
			    if(st1>0)
			    { printf("\nEnter quantity ::");
			      scanf("%d",&q);
			      if(q< sto1 && sto1>0)
			      {pr=q*a[j];flag+=q;
			       s1=s1+q; sto1=sto1-q;
			      }
			      else
			      {printf("\n\tOnly %d Itms Are Available In Stock",sto1);
			       q=0;
			       getch();
			      }
			    }
			    else
			    {printf("\n\n\t\tProduct Is Out Of Stock");
			     getch();
			    }
			    break;
		   case 2:  if(st2>0)
			    {printf("\nEnter quantity ::");
			     scanf("%d",&q);
			     if(q<sto2 && sto2>0)
			      {pr=q*a[j];flag1+=q;
			       s2=s2+q; sto2=sto2-q;}
			      else
			      {printf("\n\tOnly %d Itms Are Available In Stock",sto2);
			       q=0;
			       getch();}
			      }
			    else
			    {printf("\n\n\t\tPRODUCT IS OUT OF STOCK");
			     getch();
			    }
			    break;
		   case 3:  pr=0;
			    q=0;
		   default: printf("\nERROR " ); pr=0;q=0;
		   }
		   sum=sum+pr;
		   itm=itm+q;
		}while(j!=3);
		break;       //1st case end
	case 2: do
		{ clrscr(); //textcolor(9);
		  printf("\n\t  ____________________________________________________________________");

		  printf("\n\n\t\t ITMS LIST                                 ");
		  printf("\n\n\t\t\t\t\t\t\t.......CART [%d]",itm);
		  printf("\n\n\n\t\t1. POWER BANKS"); printf("\t\tPhilips 11000mAh power bank(DLP60006)B");
						      printf("\n\t\t\t\t\t\tRs. 799");
		  printf("\n\t\t\t\t\tstock %d\n\t\t\t\t\tlikes",st3);
		  printf("\n\n\t\t2. MOBILE CABLES"); printf("\tSyska WC 2A Mobile charger");
						   printf("\n\t\t\t\t\tRs. 350");
		  printf("\n\t\t\t\t\tstock %d\n\t\t\t\t\tlikes",st4);
		  printf("\n\n\n______________________________________________________ ENTER 3 TO GO BACK");
		  printf("\n\n\nEnter your choice :");
		   scanf("%d",&j);
		   switch(j)
		   { case 1: if(st3>0)
			    { printf("\nEnter quantity ::");
			      scanf("%d",&q);
			      if(q<sto3 && sto3>0)
			      {pr=q*b[j];flag2+=q;
			       sto3=sto3-q;
			      }
			      else
			      {printf("\n\tOnly %d Itms Are Available In Stock",sto3);
			       q=0;
			       getch();
			      }
			    }
			    else
			    {printf("\n\n\t\tProduct Is Out Of Stock");
			     getch();
			    }
			     break;
		     case 2: if(st4>0)
			    { printf("\nEnter quantity ::");
			      scanf("%d",&q);
			      if(q<sto4 && sto4>0)
			      {pr=q*b[j];flag3+=q;
			       sto4=sto4-q;
			      }
			      else
			      {printf("\n\tOnly %d Itms Are Available In Stock",sto4);
			       q=0;
			       getch();
			      }
			    }
			    else
			    {printf("\n\n\t\tProduct Is Out Of Stock");
			     getch();
			    }
			     break;
		     case 3: pr=0;
			     q=0;
			     break;
		     default:printf("\n" );pr=0;q=0;
		    }             //2 switch case end
		   sum=sum+pr;
		   itm=itm+q;

		 }  while(j!=3);
		break;
      case 3: do
	     {  display_crt();
		 scanf("%d",&x);
		if(x==1)
	       {delete_crt();}
	     } while(x!=3);
		break;
       case 4:  do
		{clrscr();
		 if(sum==0)
		  {printf("\n\n\n\t\t\t\n\n\n\t\n\n\n\t\t\tYour Cart is Empty");
		   printf("\n\n\t\t\t\tEnter 3 to add itms in Cart");
		   printf("\n\n\t\t\t.......* * * * *........\n\t\t");
		   scanf("%d",&j);}
		 else
		  {printf("\nDo you want to place order ");
		   printf("\n\n\t\t1. for Online Payment\n\t\t2. for C O D");
		   printf("\n\nENTER 3 TO GO BACK");
		   printf("\n\nEnter Your Choice:");
		   scanf("%d",&j);
		   switch(j)
		   { case 1:clrscr();
			    printf("\n\n\t\t Debit Card/CreditCard/ATM Card");
			     debit();
			    break;
		      case 2: printf("\n\n\t\t1. Cash On Dilevary");
			      COD();
			     break;
		    }          /*2nd switch ends*/
		  }      //condition end
		} while(j!=3);
		break;
       case 5:  clrscr();
		printf("Enter Any Key To Go Back");
		printf("\n\n\n\n\n\n\n\t\t\t____________________________");
		printf("\n\n\t\t\t 1.  Admin Account\n\n\t\t\t 2.  My Account");
		printf("\n\t\t\t____________________________");
		printf("\n\nChoice : ");
		scanf("%d",&j);
		switch(j)
		{case 1:clrscr();
		       printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tONLY ADMIN CAN ACCESS THIS FUNCTION");
		       printf("\n\n\t\t\t   - - - * * * * * * * * * - - -");
			printf("\n\n\nEnter Any key to go back:");
			scanf("%d",&pass);
			if(pass==12345)
			{ clrscr();
			  stock();
			}
			break;
		case 2:clrscr();
		       if(acc==1)
		       { printf("\n\n\t\tMY ACCOUNT");
			 printf("\n\t  -----------------");
			 account();}
		       if(acc!=1)
			{ printf("\n\t\t\tCREATE ACCOUNT");
			  printf("\n\n\n\tFIll YOUR IMFORMATION ::");
			  create(); }
		       printf("\n\n\n\t\t 1. To Edit Imformation ");
		       printf("\n\n\t Any Key to go Back");
		       scanf("%d",&k);
		       if(k!=1)
		       break;
		       if(k==1)
		       clrscr();
		       create();
		       printf("\n Enter Any Key To Go Back");
		       getch();
		       break;
	       }
	       break;
       case 6: display_exit();
	       break;
      default :  printf("\n\n\t\t\tINVALID INPUT");
		 getch();
  }
}
getch();
return(0);
}

int COD()
{ char name[20],address[30],mob[10],pin[6];
 xyz:clrscr();
   printf("\n\t\t------------------");
   printf("\n\t\t Cash On Dilevary");
   printf("\n\t\t------------------");
   if(acc==1)
   { account(); }
   else
   {printf("\n\n\n\n\t\tEnter Your Name:");
    fflush(stdin);
    gets(b1.name);
    printf("\n\t\tEnter Your Address:");
    gets(b1.address);
    printf("\n\t\t\tPin Code:");
    scanf("%s",b1.pin);
    printf("\n\t\tEnter Mobile Number:");
    scanf("%s",b1.mobno);
    acc=1;
   }
   printf("\n\n\t\t\t Delivery Charges is Rs. 60");
   printf("\n\tTotal Amount to pay %d + 60 = Rs.%d",sum,sum+60);
   sum+=60;
   printf("\n\nEnter 1 to Proceed\n 2 to Edit Imformation \t 3. BACK\t");
   scanf("%d",&j);
   if(j==2)
   {clrscr();
    create();
    goto xyz;
   }
   if(j==1)
   { clrscr();
     printf("\n\n\n\n\n\n\n\n\t\t\t* * * * * * * * * * * * * * *");
     printf("\n\n\t\t\t   Thank You for purchasing");
     printf("\n\t\tProduct will be shipping soon");
     printf("\n\n\tEnter 1.to Exit\t2. To go back \t3. To Main Page");
     scanf("%d",&j);
     if(j==1)
     {exit(1);}
     stk();
    }
   return j;
}

int debit()
{ char number[10],MM[5],YY[4],cvv[6];
  printf("\n-------------------------------------------------------");
  printf("\nEnter Details:");
  printf("\n\n\tCard Number\t");
  scanf("%s",number);
  printf("\n\tExpiry\n\tMM  ");  scanf("%s",MM); printf("\tYY  "); scanf("%s",YY);
  printf("\tCVV  ");
  scanf("%s",cvv);
  printf("\n\t\t Delivery Charges is Rs. 60");
  printf("\nTotal Amount to pay %d + 60",sum);
  sum+=60;
  printf("\n\t\t______________");
  printf("\n\t\tPAY %d",sum);
  printf("\n\t\t______________");
  printf("Enter 1 to pay\n\n3 TO GO BACK\t\tCHOICE :");
  scanf("%d",&j);
  if(j==1)
  {clrscr();
   stk();
   printf("\n\n\n\n\n\n\n\n\t\t\t* * * * * * * * * * * * * * *");
   printf("\n\n\t\tAmount paid successfully");
   printf("\n\t\t\t   Thank You for purchasing");
   printf("\n\t\tProduct will be shipping soon");
   printf("\n\n\tEnter 1.to Exit\t2. To go back \t3. To Main Page");
   scanf("%d",&j);
   if(j==1)
   {exit(1);}
   }
  return j;
}

void account()
{
  printf("\n\n\n\t\t Name      :%s",b1.name);
  printf("\n\n\t\t Address   :%s",b1.address);
  printf("\n\t\t Pin Code  :%s",b1.pin);
  printf("\n\n\t\t Mobile Number :%s\n\n",b1.mobno);
}
void create()
{ printf("\n\n\tEnter Your Name:");
    fflush(stdin);
    gets(b1.name);
    printf("\n\tEnter Your Address:");
    gets(b1.address);
    printf("\n\t\tPin Code:");
    scanf("%s",b1.pin);
    printf("\n\tEnter Mobile Number:");
    scanf("%s",b1.mobno);
    acc=1;
}