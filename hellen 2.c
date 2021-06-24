//A PROGRAM TO CALCULATE THE AREA AND PERIMETER OF A RECTANGLE.
#include <stdio.h>
int main()
{
	int l,w, area,perimeter;
	
	printf("enter the length and the width\n");
	scanf("%d%d",&l,&w);
	
	area=(l*w);
	perimeter=(2*(l+w));
	
	printf("the area is: %d\nthe perimeter is: %d",area,perimeter);

	return 0;
}