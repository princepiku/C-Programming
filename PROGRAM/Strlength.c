#include<stdio.h>
#include<string.h>
int main(){
	char prince[] = "Parshant patil i study in reva";
	char parshya[100];
	
//	printf("%d",strlen(prince));
	
	int i,count=0;
//	strcpy(parshya,prince);
	for(i=0; prince[i] != '\0';i++){
		count++;
	}
	printf("%d",count);


	for(i=0;prince[i] != '\0';i++){
		parshya[i] = prince[i];
	}
	
	printf("%s",parshya);

	return 0;	
}
