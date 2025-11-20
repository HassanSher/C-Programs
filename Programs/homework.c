#include <stdio.h>

int main() {
	FILE *input, *result;
	int num, even = 0, odd = 0;
	input =fopen("input.txt", "r");
	result = fopen("result.txt, "w");
        scan = fscanf(input, "%d", &num);
	while scanning the document {
        if (num % 2 == 0)
            even++;
        else
            odd++;
        scan = fscanf(input, "%d", &num);
    }

    fprintf(result, "Odd integers: %d\n", odd);
    fprintf(result, "Even integers: %d\n", even);

    fclose(input);
    fclose(result);

    return 0; 
