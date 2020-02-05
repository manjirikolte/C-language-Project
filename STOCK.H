int flag,flag1,flag2,flag3,k;
int sum,itm;
char crt[4][10]={"TITAN","FASTTRACK","PHILIPS","SISKA"};
void delete_crt();
int s1=0,s2=0,s3=0,s4=0,st1=10,st2=9,st3=5,st4=7;
int sto1=10,sto2=9,sto3=5,sto4=7;

void stock()
{ int k,y;
   do
 {clrscr();
  printf("\n\t\t\t WELCOME MANJIREE");
  printf("\n......................................................");
  printf("\n\tcode\tITMS LIST\t\tSTOCK");
  printf("\n......................................................");
  printf("\n\n\t1.\t%s\t\t\t%d",crt[0],st1);
  printf("\n\n\t2.\t%s\t\t%d",crt[1],st2);
  printf("\n\n\t3.\t%s\t\t\t%d",crt[2],st3);
  printf("\n\n\t4.\t%s\t\t\t%d",crt[3],st4);
  printf("\n\n1.To Fill The Stock\n2.Exit\t\t\t\n");
  scanf("%d",&k);
  if(k==1)
  { printf("\nEnter List Code :");
    scanf("%d",&y);
    switch(y)
    {case 1: st1=10; sto1=10;
	    break;
     case 2: st2=9;  sto2=9;
	    break;
     case 3: st3=5; sto3=5;
	    break;
     case 4: st4=7; sto4=7;
	    break;
     }
  }
 } while(k!=2);
}

void stk()
{  sum=0;itm=0;
     st1=st1-flag;
     st2=st2-flag1;
     st3=st3-flag2;
     st4=st4-flag3;
}


void display_crt()
{ int a[2]={999,1299},b[2]={799,350},x;  //price
 clrscr();
  if(sum!=0)
  { printf("\n\t----------------------------------------------------");
    printf("\n\t\tITMS\t\tPRICE\t\tQUANTITY ");
    printf("\n\t-----------------------------------------------------");
    if(flag!=0)
    {printf("\n\n\n1.\t\t%s\t\t%d\t\t%d",crt[0],a[0],flag);}
    if(flag1!=0)
    {printf("\n\n2.\t\t%s\t%d\t\t%d",crt[1],a[1],flag1);}
    if(flag2!=0)
    {printf("\n\n3.\t\t%s\t\t%d\t\t%d",crt[2],b[0],flag2);}
    if(flag3!=0)
    {printf("\n\n4.\t\t%s\t\t%d\t\t%d",crt[3],b[1],flag3);}
    printf("\n\n\n\n\t1. To delete Itms\n\n");
    printf("\nPrice Details :");
    printf("\nPrice(%d itms)\t\tRs. %d",itm,sum);
    printf("\tDelivery Charge  Rs. 60");
    printf("\nAmount Payable\t\t Rs. %d",sum+60);
    printf("\n\nENTER 3 TO CONTINUE SHOPPING...");
  }
  else
  { printf("\n\n\n\t\t\t\n\n\n\t\n\n\n\t\t\tYour Cart is Empty");
    printf("\n\n\t\t\t\tEnter 3 to add itms in Cart");
    printf("\n\n\t\t\t.......* * * * *........\n\t\t");
  }
}
void delete_crt()
{ int y;
  int sto1,sto2,sto3,sto4;
  printf("\n\tEnter Code ::") ;
  scanf("%d",&y);
  if(y==1)
   {sum=sum-999*flag;itm=itm-flag;
    sto1=sto1-flag;flag=0; }
  if(y==2)
   { sum=sum-1299*flag1;itm=itm-flag1;
     sto2=sto2-flag1;flag1=0;}
  if(y==3)
   { sum=sum-799*flag2;itm=itm-flag2;
     sto3=sto3-flag2;flag2=0;}
  if(y==4)
   {sum=sum-350*flag3;itm=itm-flag3;
    sto4=sto4-flag3;flag3=0;}
 display_crt();
}
