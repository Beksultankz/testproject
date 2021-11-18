#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;
int main()
{ int i=0, j,k,r,q=0,m=0;
string t=" ", jol=" ";
string p="progra7mming in C is a g5ood cho2ice to start ";
for (j=0;j<p.length() ;j++){
	
	t[m]=p[j];

	m++;
	if (p[j]==' ') {
	for (k=0;k<m ;k++) { if (isdigit(t[k])) q++ ;
	}
	if (q==0){
		for(r=0;r<m;r++) cout<<t[r];}
	
	m=0;
	r=0;
	q=0;
k=0;
}
}
}
