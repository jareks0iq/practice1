#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
bool proverka(char a[]) {
	char shit[] = { 'B', 'D', 'S', 'M', '?', '!', ' '}, k = 0;
	for (int j = 0; j < strlen(a); j++) {
		for (int i = 0; i < strlen(shit); i++) {
			if (shit[i] == a[j]) {
				return false;
			}
		}
	}
	return true;
}
void vivod(int a, char array[]) {
	if ( !a ) { printf("����� �� ��� �������... \n"); }
	else { printf("���� ������ - %s\n", array); }
}
void vvod() {
	char array[100];
	gets(array);
	vivod(proverka(array), array);
}
int main() {
	setlocale(LC_ALL, "Rus");
	printf("���� � ��� iq ������ ��������� �����������, �� �� ������� B, D, S, M, SPACE � !,?\n");
	while (true) { vvod(); }
}