/* Solution for website Q55 */
#include <stdio.h>
int main(void){int n;printf("Enter n: ");scanf("%d",&n);for(int x=2;x<=n;x++){int p=1;for(int d=2;d*d<=x;d++)if(x%d==0){p=0;break;}if(p)printf("%d ",x);}printf("\n");return 0;}
