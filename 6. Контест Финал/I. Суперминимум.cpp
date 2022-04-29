// artyomshutoff
#include<cstdio>
#define MAX 150010
int n, k, i, v;
int q[MAX], m[MAX], qh, qt, mh, mt;
int main(void) {
	scanf("%d %d",&n,&k);
	qh = qt = mh = mt = 0;
	for (i = 1; i <= k; i++) {
		scanf("%d",&v);
		q[qt++] = v;
		while((mh < mt) && (v < m[mt-1])) mt--;
		m[mt++] = v;
	}
	printf("%d",m[mh]);
	for (; i <= n; i++) {
		scanf("%d",&v);
		if (q[qh] == m[mh]) mh++; qh++;
		q[qt++] = v;
		while((mh < mt) && (v < m[mt-1])) mt--;
		m[mt++] = v;
		printf(" %d",m[mh]);
	}
	printf("\n");
	return 0;
}