#include <stdio.h>
int main() {
	int i=0,j,k,l; char s[36]={'0'}; int ct;
	s[10]='a';
	for (ct=1;ct<=9;ct++) {
		s[ct]=s[0]+ct;
	}
	for (ct=1;ct<=25;ct++) {
		s[10+ct]=s[10]+ct;
	}
	FILE *fp=fopen("w:\\MIX4.TXT", "w");	
	for (i;i<=35;i++) {
		for (j=0;j<=35;j++) {
			for (k=0;k<=35;k++) {
				for (l=0;l<=35;l++) {
					if ((s[i]>'Z'&&s[j]>'Z'&&s[k]>'Z'&&s[l]>'Z')||(s[i]<'Z'&&s[j]<'Z'&&s[k]<'Z'&&s[l]<'Z'))
						continue;
					fputc(s[i],fp); fputc(s[j],fp); fputc(s[k],fp); fputc(s[l],fp); fputc('\n',fp);								
				}
			}
		}
	}
	fclose(fp);
	return 0;
}
