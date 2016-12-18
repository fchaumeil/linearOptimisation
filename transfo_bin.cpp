#include "transfo_bin.h"
#include "iostream.h"



int restee(int a,int b){
while (a>=b)
{
return restee(a-b,b);
}
return a;
}


int quotient(int a,int b){
if (a<b) return 0;
	while (a>=b){
	return quotient(a-b,b)+1;
	}

}

/*
char* transformation_en_binaire(int a,int n){
char mot_bin[n];
int i;
int tmp=a;
for (i=0;i<n;i++){
*(tab_bin+i)=restee(tmp,2);
tmp=quotient(tmp,2);
}
return tab_bin;
}
*/
