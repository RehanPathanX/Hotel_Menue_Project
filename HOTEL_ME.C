/////////////////////////////////HOTEL MENUE PROJECT///////////////////////
#include"stdio.h"
#include"conio.h"

void menue();
void bill();

int n[12];
int q[12];
int item=0;

void main()
{
	int i;
	char ch;
	clrscr();

	menue();

	printf("\n\n\t  Please Order Food!");

	for(i=0;ch!='y'|| ch!='Y';)
	{
	     again:

	     a1:

	     printf("\n\n\t  Enter Food Item Number : ");
	     fflush(stdin);
	     scanf("%d",&n[i]);

	     if(n[i]>12 || n[i]<1)
	     {
		printf("\n\n\t  Invalid Choice....! try again");
		delay(1000);
		goto a1;
	     }

	     a:
	     printf("\n\t  Enter Quantity : ");
	     fflush(stdin);
	     scanf("%d",&q[i]);

	     if(q[i]<1)
	     {
		printf("\n\n\t  Invalid Quantity....! try again");
		delay(1000);
		goto a;
	     }

	     i++;
	     item++;

	     printf("\n\n\t  PRESS Y For YES PRESS N For NO");
	     printf("\n\n\t  Do you Want To Order Another Item : ");
	     fflush(stdin);
	     scanf("%c",&ch);

	     if(ch=='y'|| ch=='Y')
	     {
		 goto again;
	     }
	     else
	     {
		printf("\n\n\t  Your Order Is Ready Please Wait a moment .....");
		delay(1500);
		bill();
		break;
	     }
	}


getch();
}

void menue()
{
	printf("\t____________________________________________________________");
	printf("\n\t|							    |");
	printf("\n\t|	       WELCOME TO R.K'S RESTAURENT		    |");
	printf("\n\t|___________________________________________________________|");

	printf("\n\t---------------------------------------------------------------");
	printf("\n\t||		       HOTEL MENUE	        	     ||");
	printf("\n\t||-----------------------------------------------------------||");
	printf("\n\t||    ITEM NAME      RICE      |    ITEM NAME      PRICE     ||");
	printf("\n\t||-----------------------------|-----------------------------||");
	printf("\n\t||    1. Samosa      30 Rs     |    2. Chavmeen     50 Rs    ||");
	printf("\n\t||                             |                             ||");
	printf("\n\t||    3. Idli        40 Rs     |    4. Dosa         50 Rs    ||");
	printf("\n\t||                             |                             ||");
	printf("\n\t||    5. Chicken 65  80 Rs     |    6. Chicken Curry 100 Rs  ||");
	printf("\n\t||                             |                             ||");
	printf("\n\t||    7. Biryani     100 Rs    |    8. Egg Curry    60 Rs    || ");
	printf("\n\t||                             |                             ||");
	printf("\n\t||    9. Pizza       210 Rs    |   10. Burger       75 Rs    ||");
	printf("\n\t||                             |                             ||");
	printf("\n\t||   11. Paneer Masala  90 Rs  |   12. Dal Tadka    85 Rs    ||");
	printf("\n\t||-----------------------------|-----------------------------||");

}

void bill()
{
	int i;
	float total=0,bill=0;

	printf("\n\n\n\tHere Is Your Order :");

	printf("\n\n\t------------------------------");


	for(i=0;i<item;i++)
	{
		switch(n[i])
		{
			case 1:
				total=30*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Samosa -\ %.2f Rs\n",q[i],total);
				break;

			case 2:
				total=50*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Chavmeen -\ %.2f Rs\n",q[i],total);
				break;

			case 3:
				total=40*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Idli -\ %.2f Rs\n",q[i],total);
				break;

			case 4:
				total=50*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Dosa -\ %.2f Rs\n",q[i],total);
				break;

			case 5:
				total=80*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Chicken 65 -\ %.2f Rs\n",q[i],total);
				break;

			case 6:
				total=100*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Chicken Curry -\ %.2f Rs\n",q[i],total);
				break;

			case 7:
				total=100*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Biryani -\ %.2f Rs\n",q[i],total);
				break;

			case 8:
				total=60*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Egg Curry -\ %.2f Rs\n",q[i],total);
				break;

			case 9:
				total=210*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Pizza -\ %.2f Rs\n",q[i],total);
				break;

			case 10:
				total=75*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Burger -\ %.2f Rs\n",q[i],total);
				break;

			case 11:
				total=90*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Paneer Masala -\ %.2f Rs\n",q[i],total);
				break;

			case 12:
				total=85*q[i];
				bill+=total;
				fflush(stdout);
				printf("\n\t  %d Dal Tadka -\ %.2f Rs\n",q[i],total);
				break;
		}
		total=0;
	}

	printf("\t------------------------------");
	fflush(stdout);
	printf("\n\t          Total Bill : %.2f",bill);
	printf("\n\t------------------------------");

}