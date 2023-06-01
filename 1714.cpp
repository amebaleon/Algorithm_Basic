//#include <stdio.h>
//int main()
//{
	
//	int x = 0;
//	int unx[1000] = {0,};
//	int k;
//	int count = 1;
//	scanf("%d",&x);
//	printf("test");
//	for(int i = 1;x / i > 1;i *= 10)
//	{
//		count++;
//	}//자릿수판별 
//	int p = count;
///	printf("test");
//	for(int j = 0;j < count;j++)
//	{
//		k = k * 10;
//	}
//	printf("test");
//	for(k = k;k >= 1;k /= 10)
//	{
//		unx[p] = (x - x % k)/k;
//		x = x - x % k;
//		p--;
//		printf("%d\n",unx[p]);
//}
//}
#include <stdio.h>
int main() {
    int num;
    int count;
	scanf("%d", &num);
	for(int i = 1;num / i > 1;i *= 10)
	{
		count++;
	}
	for(int j = 0;j <= count;j++)
	{
    printf("%d",num % 10);
    num = num / 10;
    if(num == 0)
    {
    	break;
	}
}
}
