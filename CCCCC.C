#include <stdio.h>
int isVowel(char x) {if (x=='e'||x=='i'||x=='o'||x=='u') return 1; return 0;}
int main() {
	char i='b',j,k,l,n;
	FILE *fp=fopen("w:\\CCCCC.TXT", "w");	
	for (i;i<='z';i++) {
		if (isVowel(i)) continue;
		for (j='b';j<='z';j++) {
			if (isVowel(j)) continue;
			for (k='b';k<='z';k++) {
				if (isVowel(k)) continue;
				for (l='b';l<='z';l++) {
					if (isVowel(l)) continue;
					for (n='b';n<='z';n++) {
						if (isVowel(n)) continue;
						fputc(i,fp); fputc(j,fp); fputc(k,fp); fputc(l,fp); fputc(n,fp); fputc('\n',fp);
					}
				}
			}
		}
	}
	fclose(fp);
	return 0;
}
