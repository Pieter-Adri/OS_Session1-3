#include <stdio.h>

int main() {
	int num = 4;
    float komma = 4.0f;
    double precies = 5.348;
    int *ptr = NULL;
	printf("First size is: %ld \n",sizeof(num));
    printf("Second size is: %ld \n",sizeof(komma));
    printf("Third size is: %ld \n",sizeof(precies));
    printf("Fourth size is: %ld \n",sizeof(void));
    printf("Final size: %ld \n", sizeof(ptr));
    int long num2 = 4;
    int short num3 = 5;
    printf("Long size is: %ld \n",sizeof(num2));
    printf("Short size is: %ld \n",sizeof(num3));

    char check = 255;
    printf("Char: %d \n", check);
	return 0;
}
