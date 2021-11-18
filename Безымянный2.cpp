#include <string>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include <iomanip>
int main()
{int n=0;
float b;
char faty[]="E:\\c++1\\sandar1.txt\0";
FILE *fd;
fd=fopen(faty,"r");
while (!feof(fd))
{ fscanf(fd, "%f", &b);
printf("%7.2f", b);
n++;
}
fseek(fd, 0, SEEK_SET);
float*a=(float*) calloc(n,sizeof(float));
for (int i=0; i<n; i++) fscanf(fd,"%f", &a[i]);
fclose(fd);
strcpy(faty, "E:\\c++1\\sandar2.txt\0");
fd=fopen(faty, "w");
for (int i=0; i<n; i++)
if (a[i]%5==1) fprintf(fd, "%i", a[i]);
fclose(fd);
free(a);
system("pause");
return 0;
}

