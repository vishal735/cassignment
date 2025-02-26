#include<stdio.h>
/* write a c program for reading any month number are display the month name */
main(){
	int month;
	
	printf("/n enter month in 1-10:");
	scanf("%d",&month);
	switch(month):
		case 1:
			print("\n january");
			break;
		case 2:
			print("\n february");
			break;
		case 3:
			print("\n march");
			break;
		case 4:
			print("\n april");
			break;
		case 5:
			print("\n may");
			break;
		case 6:
			print("\n jun");
			break;
		case 7:
			print("\n july");
			break;
		case 8:
			print("\n augest");
			break;
		case 9:
			print("\n september");
			break;
		case 10:
			print("\n octomber");
			break;
		case 11:
			print("\n november");
			break;
		case 12:
			print("\n december");
			break;
		default:
			print("\n wrong input")
}
