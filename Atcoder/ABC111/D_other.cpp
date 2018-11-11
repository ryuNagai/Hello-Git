#include<cstdio>
#define N 1003

int n,m;
int arm[50];
int x[N],y[N];
bool odd[2];

inline int Abs(int x) {
	if(x>-x) return x;return -x;
}
//1:Up 2:Down 3:Left 4:Right
void Print(int x,int y) {
	for(int i=1;i<=m;i++) {
		if(Abs(x)<Abs(y)) {
			if(y>0)
				printf("U"),y-=arm[i];
			else printf("D"),y+=arm[i];
		} else {
			if(x>0)
				printf("R"),x-=arm[i];
			else printf("L"),x+=arm[i];
		}
	}
}
int main() {
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		scanf("%d %d",&x[i],&y[i]);
		odd[Abs(x[i]+y[i])%2]=true;
	}
	if(odd[0]&&odd[1]) { // Abs(x[i]+y[i]) include even and odd.
		printf("-1");
		return 0;
	}
	/******************/
	m=32;arm[31]=arm[32]=1;
	if(odd[1]) m--; // if x[i]+y[i] is odd : decrease arm num
	for(int i=30;i>=1;i--)
		arm[i]=2*arm[i+1]; // arm length 2^30, 2^29, ..., 2^1
	printf("%d\n",m);
	for(int i=1;i<m;i++)
		printf("%d ",arm[i]);
	printf("%d\n",arm[m]);
	/******************/
	for(int i=1;i<=n;i++)
		Print(x[i],y[i]),puts("");
	return 0;
}
