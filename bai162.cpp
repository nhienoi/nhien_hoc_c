#include <iostream>
#include <string.h>
using namespace std;
void writeFile();
void readFile();
void writeFile() {
	FILE *file = fopen("dulieu.txt", "w");
	fputs("nguoiyeu1; Nguyen Khanh Ly; 30/10/2003 ; 17 tuoi\n", file);
	fputs("nguoiyeu2; Tam Trang Ninh; 12/2/2003; 17 tuoi\n", file);
	fputs("nguoiyeu3; Thanh Thu; 12/09/2003; 17 tuoi\n", file);
	fclose(file);
}
void readFile() {
	FILE *file = fopen("duliet.txt", "r");
	char *s = "\n";
	do {
		char line[150];
		s=fgets(line, 150, file);
		if(s == NULL) {
			break;
		}
		cout << s << endl;
	} while(true);
	fclose(file);
}
int main() {
	writeFile();
	readFile();
	return 0;
}
