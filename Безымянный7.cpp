#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;
int main()
{ int i=0, j,k,r,q=0,m=0;
string t=" ", jol=" ";
string p="programming intau C is a goodtau choice to start ";
for (j=0;j<p.length() ;j++){
	
	t[m]=p[j];

	m++;
	if (p[j]==' ') {
	for (k=m-4;k<m ;k++) { if (t[k]=='t' && t[k+1]=='a' && t[k+2]=='u') q++ ;
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
