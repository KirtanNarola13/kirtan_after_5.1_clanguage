#include<conio.h>
#include<stdio.h>
void main()
{
int choice, english, hindi, gujrati;

clrscr();
printf("========================\n");
printf("=== Recharge Center ====\n");
printf("========================\n\n");

printf("Press 1 for English\n");
printf("Press 2 for Hindi\n");
printf("Press 3 for Gujrati\n");
printf("Enter number for choose language : ");
scanf("%d",&choice);

switch(choice){
	case 1:
	printf("\n========================\n\n");
	printf("\nPress 1 for Internet Recharge\n");
	printf("Press 2 for Top-up Recharge\n");
	printf("Press 3 for Special Recharge\n");
	printf("\nEnter your choice : ");
	scanf("%d",&english);

	switch(english){
	      case 1:
	      printf("\n========================\n\n");
	      printf("\nYou have successfully done Internet Recharge.....");
	      break;

	      case 2:
	      printf("\n========================\n\n");
	      printf("\nYou have successfully done Top-up Recharge....");
	      break;

	      case 3:
	      printf("\n========================\n\n");
	      printf("\nYou have successfully done Special Recharge....");
	      break;

	      default:
	      printf("\n========================\n\n");
	      printf("Ivnvalid Choice.....");
	      break;

	}
	break;

	case 2:
	printf("\n========================\n\n");
	printf("Internet Recharge ke liye 1 dabaye\n");
	printf("Top-up Recgarge ke liye 2 dabaye\n");
	printf("Special Recharge ke liye 3 dabaye\n");
	printf("\nApki pasand daliye  : ");
	scanf("%d",&hindi);

	switch(hindi){
		case 1:
		printf("\n========================\n\n");
		printf("\nAapne safaltapurvak Internet Recharge kar liya he....");
		break;

		case 2:
		printf("\n========================\n\n");
		printf("\nAapne safaltapurvak Top-up Recharge kar liya he....");
		break;

		case 3:
		printf("\n========================\n\n");
		printf("\nAapne safaltapurvak Special Recharge kar liya he....");
		break;

		default:
		printf("\n========================\n\n");
		printf("\nAapki choice amany hai......");
		break;

	}
	break;

	case 3:
	printf("\n========================\n\n");
	printf("Internet Recharge mate 1 dabavo\n");
	printf("Top-up Recharge mate 2 dabavo\n");
	printf("Special Recharge mate 3 dabavo\n");
	printf("\nTamari Pasand Nakho : ");
	scanf("%d",&gujrati);

	switch(gujrati){
	case 1:
	printf("\n========================\n\n");
	printf("\nTamaru Internet Recharge safaltapurvak thy gyu che....");
	break;

	case 2:
	printf("\n========================\n\n");
	printf("\nTamaru Top-up Recharge safaltapurvak thy gyu che....");
	break;

	case 3:
	printf("\n========================\n\n");
	printf("\nTamaru Special Recharge safaltapurvak thy gyu che....");
	break;

	default:
	printf("\n========================\n\n");
		printf("Tamari pasand manny nathii.....");
	}
	break;

	default:
	printf("Aapne safaltapurvak Internet Recharge kar liya he");
	printf("Invalid choice");
	break;
}


getch();

}
