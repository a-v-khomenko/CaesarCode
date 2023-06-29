#include "encryption.h"
#include <string.h>
#include <locale.h>

void CaesarCode(char* string, char way, int num)
{
	char old[200];
	int i = 0;
	char engAlph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ/abcdefghijklmnopqrstuvwxyz.";
	char ukrAlph[] = "ÀÁÂÃ¥ÄÅªÆÇÈ²¯ÉÊËÌÍÎÏĞÑÒÓÔÕÖ×ØÙÜŞßàáâã´äåºæçè³¿éêëìíîïğñòóôõö÷øùüşÿ";
	for (int j = 0; j <= 52; j++) {
		if (string[0] == engAlph[j]) {
			i = 0;
			break;
		}
		else i = 1;
	}
	strcpy(old, string); // initialising old array with string
	strcat(old, "\n");
	memset(string, 0, sizeof(string)); // clear array
	int poriadkovi = 0;
	if (i == 0) { // English
		if (way == '+') {
			i = 0;
			while (strlen(old) != i) {
				int j = 0;
				int k = 0;
				while (k == 0) {
					if (old[i] == ' ') {
						strcat(string, " ");
						poriadkovi++;
						break;
					}
					if (old[i] == engAlph[j]) {
						int jj = j-1;
						for (int k = 0; k <= num; k++) {
							jj++;
							if (engAlph[jj] == '/') {
								jj = 0;

							}
							if (engAlph[jj] == '.') {
								jj = 27;
							}
						}
						string[poriadkovi] = engAlph[jj];
						poriadkovi++;
						k++;
					}
					j++;
				}
				i++;
			}
		}
		if (way == '-') {

		}
	} 
	else { // Ukrainian

	}
}

void CaesarDeCode(char* string, char way, int num)
{

}
