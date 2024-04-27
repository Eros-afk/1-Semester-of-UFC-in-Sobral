#include<stdio.h>

int main(){
	int a, b, c, d, e, f, g, h, i, j, maior;
	printf("Digite 10 numeros inteiros: \n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	
	if(a<0 || b<0 || c<0 || d<0 || e<0 || f<0 || g<0 || h<0 || i<0 || j<0){
	printf("Esses valores sao negativos: \n");
	if(a<0) printf("%d\n", a);
	if(b<0) printf("%d\n", b);
	if(c<0) printf("%d\n", c);
	if(d<0) printf("%d\n", d);
	if(e<0) printf("%d\n", e);
	if(f<0) printf("%d\n", f);
	if(g<0) printf("%d\n", g);
	if(h<0) printf("%d\n", h);
	if(i<0) printf("%d\n", i);
	if(j<0) printf("%d\n", j);
}
	for (a = 1; a < 10; i++) {
        scanf("%d", &b);

        if (b > maior) {
            maior = a;
        }

}

}
