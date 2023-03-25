#include <stdio.h>
int main(){
	printf("hello :)\n");
	printf("%d\n", 1234);
	printf("%d %d\n", 10, 20);
	printf("%03d, %03d, %03d\n", 1, 20, 300);
	printf("%-3d, %-3d, %-3d\n", 1, 20, 300);
	printf("%3d, %3d, %3d\n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d\n", 1, 20, -300);
	return 0;
}
