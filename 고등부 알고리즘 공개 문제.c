#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count = 0; //������ �ϴ� ������ ���� 
	int i = 0; //for���� ��� 
	int road,cross_road,size; //����,������,������ũ�� 
	
	scanf("%d %d %d", &cross_road, &road, &size); //����,������,������ũ�� �Է� 
	
	int *roadnumber = (int *)calloc(road, sizeof(int)); //�����ι�ȣ1 
	int *roadnumber2 = (int *)calloc(road, sizeof(int)); //�����ι�ȣ2 
	int *roadlenth = (int *)calloc(road, sizeof(int)); //���α���
	int *roadnumbercount = (int *)calloc(road, sizeof(int));//������ �����θ� ������ Ƚ�� 
	int *roadnumber2count = (int *)calloc(road, sizeof(int));//������ �����θ� ������ Ƚ�� 
	
	for(i = 0;i < road;i++)
	{
		scanf("%d %d %d", &roadnumber[i], &roadnumber2[i], &roadlenth[i]); //�����ι�ȣ, �����ι�ȣ2, ���α��� �Է� 
		roadnumbercount[roadnumber[i]] += 1; //�����θ� ������ Ƚ�� ���� 
		roadnumbercount[roadnumber2[i]] += 1; //�����θ� ������ Ƚ�� ���� 
		if(roadnumbercount[roadnumber[i]] > 1)
		{
			roadnumbercount[roadnumber[i]] -= 1; 
			roadnumbercount[roadnumber2[i]] -= 1;
			continue;
		}
		if(!(roadnumbercount[roadnumber[i]] > 1)) //�����θ� 1�� ���Ϸ� ���������� (��Ģ: ���������θ� �ι� �̻� �������� �������� �׵��ηδ� ������ ���� �ȴ�.) 
		{
			if(roadlenth[i] < size) //������ ���̰� ������ ���� �۴ٸ� 
			{
				count += size - roadlenth[i]; //�󸶳� �� ������� �ϴ��� ���� 
			}
		}
	} 
	printf("%d", count); //�� �÷��� �ϴ� �� ��� 
}
