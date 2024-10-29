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
	if ( !a ) { printf("зачем ты это делаешь... \n"); }
	else { printf("Ваша строка - %s\n", array); }
}
void vvod() {
	char array[100];
	gets(array);
	vivod(proverka(array), array);
}
int main() {
	setlocale(LC_ALL, "Rus");
	printf("Если у вас iq больше комнатной температуры, то не вводите B, D, S, M, SPACE и !,?\n");
	while (true) { vvod(); }
}