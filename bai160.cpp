#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	FILE *file = fopen("lyyeu.txt","w");
	fputs("Ly is a bitch, i want to fuck her", file);
	fputs("Ly is a girl, i wnant to kiss Ly", file);
	fclose(file);
	return 0;
}
