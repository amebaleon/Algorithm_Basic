#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count = 0; //넓혀야 하는 도로의 길이 
	int i = 0; //for문에 사용 
	int road,cross_road,size; //도로,교차로,구조물크기 
	
	scanf("%d %d %d", &cross_road, &road, &size); //도로,교차로,구조물크기 입력 
	
	int *roadnumber = (int *)calloc(road, sizeof(int)); //교차로번호1 
	int *roadnumber2 = (int *)calloc(road, sizeof(int)); //교차로번호2 
	int *roadlenth = (int *)calloc(road, sizeof(int)); //도로길이
	int *roadnumbercount = (int *)calloc(road, sizeof(int));//각각의 교차로를 지나간 횟수 
	int *roadnumber2count = (int *)calloc(road, sizeof(int));//각각의 교차로를 지나간 횟수 
	
	for(i = 0;i < road;i++)
	{
		scanf("%d %d %d", &roadnumber[i], &roadnumber2[i], &roadlenth[i]); //교차로번호, 교차로번호2, 도로길이 입력 
		roadnumbercount[roadnumber[i]] += 1; //교차로를 지나간 횟수 세기 
		roadnumbercount[roadnumber2[i]] += 1; //교차로를 지나간 횟수 세기 
		if(roadnumbercount[roadnumber[i]] > 1)
		{
			roadnumbercount[roadnumber[i]] -= 1; 
			roadnumbercount[roadnumber2[i]] -= 1;
			continue;
		}
		if(!(roadnumbercount[roadnumber[i]] > 1)) //교차로를 1번 이하로 지나갔을때 (규칙: 같은교차로를 두번 이상 지나가면 구조물이 그도로로는 않지나 가도 된다.) 
		{
			if(roadlenth[i] < size) //도로의 길이가 구조물 보다 작다면 
			{
				count += size - roadlenth[i]; //얼마나 더 길어져야 하는지 세기 
			}
		}
	} 
	printf("%d", count); //총 늘려야 하는 양 출력 
}
