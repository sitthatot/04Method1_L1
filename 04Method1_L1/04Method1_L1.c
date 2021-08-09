#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
int main() {
	char name[99];
	char surname[99];
	char id[99];

	char name_2[99];
	char surname_2[99];
	char id_2[99];

	char name_3[99];
	char surname_3[99];
	char id_3[99];

	int space_name_1, space_surname_1, space_id_1;
	int space_name_2, space_surname_2, space_id_2;
	int space_name_3, space_surname_3, space_id_3;

	scanf("%s %s %s", &name, &surname, &id);
	scanf("%s %s %s", &name_2, &surname_2, &id_2);
	scanf("%s %s %s", &name_3, &surname_3, &id_3);
	//printf("%s %s %s", name, surname, id);
	space_name_1 = 13 - strlen(name);
	space_surname_1 = 12 - strlen(surname);
	space_id_1 = 13 - strlen(id);

	space_name_2 = 13 - strlen(name_2);
	space_surname_2 = 12 - strlen(surname_2);
	space_id_2 = 13 - strlen(id_2);

	space_name_3 = 13 - strlen(name_3);
	space_surname_3 = 12 - strlen(surname_3);
	space_id_3 = 13 - strlen(id_3);


	printf("+-------------+------------+-------------+\n");
	printf("|");
	for (int i = 1; i <= space_name_1; i++) {
		printf(" ");
	}
	printf("%s", name);
	printf("|");
	for (int i = 1; i <= space_surname_1; i++) {
		printf(" ");
	}
	printf("%s", surname);
	printf("|");
	for (int i = 1; i <= space_id_1; i++) {
		printf(" ");
	}
	printf("%s", id);
	printf("|\n");
	//------------------------------------
	printf("|");
	printf("%s", name_2);
	for (int i = 1; i <= space_name_2; i++) {
		printf(" ");
	}
	printf("|");
	printf("%s", surname_2);
	for (int i = 1; i <= space_surname_2; i++) {
		printf(" ");
	}
	printf("|");
	for (int i = 1; i <= space_id_2; i++) {
		printf(" ");
	}
	printf("%s", id_2);
	printf("|\n");
	//-------------------------------------
	printf("|");
	printf("%s", name_3);
	for (int i = 1; i <= space_name_3; i++) {
		printf(" ");
	}
	printf("|");
	for (int i = 1; i <= space_surname_3; i++) {
		printf(" ");
	}
	printf("%s", surname_3);
	printf("|");
	for (int i = 1; i <= space_id_3; i++) {
		printf(" ");
	}
	printf("%s", id_3);
	printf("|\n");
	printf("+-------------+------------+-------------+\n");
	return 0;
}