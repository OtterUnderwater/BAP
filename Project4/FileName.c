#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <string.h>
#include <time.h>
#include <locale.h> 
//��������
void secret1()
{
	int znak, n, day, month;
	printf("��� ���� ������� - �������? (1 - ��, 0 - ���)\n");
	scanf("%d", &znak);
	if (znak == 1)
	{
		do {
			day = (rand() % 31) + 1;
			month = (rand() % 2) + 1;
			printf("�� �������� %d.%d?\n", day, month);
			scanf("%d", &n);
		} while (n != 1);
		printf("��� ���� �������� %d.%d!\n", day, month);
	}
	else
	{
		printf("��� �� ��� �������?\n");
	}
}
void secret2()
{
	int q1, q2, q3, q4, q5, count = 0;
	printf("����: ���� �� �� ��� �������, �� ����� ������?\n");
	printf("������ 1. ����� ������ ��� ������ ��������? (�������� ���� �� ��������� ������)\n 1. ������ \n 2. ����� \n 3. �������\n");
	scanf_s("%d", &q1);
	printf("������ 2. �� ��� �� ������ �������� ����������?\n 1. ������� ����\n 2. ������� ����\n 3. �� ��, ��� ������ ��������\n 4. ��������� \n");
	scanf_s("%d", &q2);
	printf("������ 3. ��� �������� ������?\n 1. ��\n 2. ���\n");
	scanf_s("%d", &q3);
	printf("������ 4. ����� � ��� ������?\n 1. ��������\n 2. ������\n");
	scanf_s("%d", &q4);
	printf("������ 5. ��� ��� �����?\n 1. ����\n 2. �� ����\n 3. ���������\n");
	scanf_s("%d", &q5);
	printf("\n");
	if (q5 == 1 && count == 0)
	{
		if (q4 == 1 && count == 0)
		{
			printf("�� � ������. ���������� � ����� ������ � ����� ����������, ���������� ����� ��������� �������� �������.\n"); count = 1;
		}
		if (q4 == 2 && count == 0)
		{
			printf("Error\n"); count = 1;
		}
	}
	if (q5 == 3 && count == 0)
	{
		printf("�� � ��������. �������� �������������, ���������� ����������� ����������.\n"); count = 1;
	}
	if (q5 == 2 && count == 0)
	{
		if (q4 == 1 && count == 0)
		{
			if (q1 == 1 && q2 == 1 && q3 == 1 && count == 0)
			{
				printf("�� � ��������. ��������� ������� � ������� �������, ��������� �����.\n"); count = 1;
			}
			if (q1 == 1 && q2 == 2 && count == 0)
			{
				printf("�� � ���������� ��������. �������������� � ����������������, ������ ������ ��������� ��������.\n"); count = 1;
			}
			if (q1 == 1 && q2 == 4 && count == 0)
			{
				printf("�� � ����������. �����������, ����� � ���������� ��������.\n"); count = 1;
			}
			if (q1 == 2 && q2 == 1 && count == 0)
			{
				printf("�� � ������. ������� ������ ������, �� ����������� ���������� � ��������� ����� � �������.\n"); count = 1;
			}
			if (q1 == 2 && q2 == 2 && count == 0)
			{
				printf("�� � ������������� ������ ������. ������ ������� �������� � ����� ������ ��������.\n"); count = 1;
			}
			if (q1 == 2 && q2 == 3 && count == 0)
			{
				printf("�� � ���������. ����� ��� �����, �� �� ���� ������.\n"); count = 1;
			}
			if (q1 == 3 && q2 == 3 && count == 0)
			{
				printf("�� � ������������ �����-��������. �� ������ ������� ��� � ��������� ���������� �����������.\n"); count = 1;
			}
			if (q1 == 3 && q2 == 4 && count == 0)
			{
				printf("�� � ����������. � ��� ������� �������� � �� ������ �����.\n"); count = 1;
			}
			if (count == 0)
			{
				printf("�� � ����� �����. �����������, ����� � �������.\n"); count = 1;
			}
		}
		if (q4 == 2 && count == 0)
		{
			if (q3 == 1 && count == 0)
			{
				if (q1 == 1 && count == 0)
				{
					printf("�� � ����������� �������. ������, ��������, ����� � �����������, ��� �����.\n"); count = 1;
				}
				if (q1 == 2 && count == 0)
				{
					printf("�� � ����� ���. �������, ������ � ���������.\n"); count = 1;
				}
				if (q1 == 3 && q2 == 3 && count == 0)
				{
					printf("�� � ���-���������. ��������������, ����������������, ������ ������ ��������� ��������.\n"); count = 1;
				}
			}
			if (q2 == 3 && q1 == 3 && count == 0)
			{
				printf("�� � ���������� ��������������� ���.\n"); count = 1;
			}
			if (q2 == 4 && count == 0)
			{
				printf("�� � ����. ������ �������� �� ��������� � �������� ���������.\n"); count = 1;
			}
			if (count == 0)
			{
				printf("�� � �������� �������. �����, �������, ������ ������� ���������� ���� ������.\n"); count = 1;
			}
		}
	}
	if (count == 0)
	{
		printf("�� � ����������� ���. �� ����� �������� ���������, �� ���� ������� ����� � ������� �� ������.\n"); count = 1;
	}
}
void secret3()
{
	int N = 5, M = 5;
	int** massiv = calloc(N, sizeof(int*));
	for (int i = 0; i < N; i++)
	{
		printf("\n");
		massiv[i] = calloc(M, sizeof(int));
		for (int j = 0; j < M; j++)
		{
			if ((i == 0 && j == 1) || (i == 0 && j == 3) || (i == 1 && j == 0) || (i == 1 && j == 2) || (i == 1 && j == 4) ||
				(i == 2 && j == 0) || (i == 2 && j == 4) || (i == 3 && j == 1) || (i == 3 && j == 3) || (i == 4 && j == 2))
				printf(" 0");
			//�� �������
			if ((i == 0 && j == 0) || (i == 0 && j == 2) || (i == 0 && j == 4) || (i == 1 && j == 1) || (i == 1 && j == 3) || (i == 2 && j == 1) || (i == 2 && j == 2) ||
				(i == 2 && j == 3) || (i == 3 && j == 0) || (i == 3 && j == 2) || (i == 3 && j == 4) || (i == 4 && j == 0) || (i == 4 && j == 1) || (i == 4 && j == 3) || (i == 4 && j == 4))
				printf("  ");
		}
	}
	printf("\n");
}
void secret4()
{
	int luck = rand() % 2;
	switch (luck)
	{
	case(0): printf("������� ������� ����"); break;
	case(1): printf("������� ����� ������� ����"); break;
	}
}
void secret5()
{
	int end, citation;
	do
	{
		citation = rand() % 32;
		switch (citation)
		{
		case 0: printf("\n������ ���������: � ��� � ������ ����� �������, �� ��� ��� �� ������.\n"); break;
		case 1: printf("\n������� �� ���������.\n"); break;
		case 2: printf("\n�� ���� ���������� ������������, � ������������ ������� �� �����.\n"); break;
		case 3: printf("\n�� �����������, � ��� ���� �������!\n"); break;
		case 4: printf("\n������� �� ����� ��������� ��������� �������, ������� �� �� ���� �������.\n�������� � ��� ��, ��� �� �� ����� ���������.\n"); break;
		case 5: printf("\n����� �� � ���, ����� �� ������ �����, � � ���, ����� �� ������ ����� �� ���������� ������.\n"); break;
		case 6: printf("\n���� IT: ��������� ����������� �������� � ����� ��������.\n"); break;
		case 7: printf("\n��� ������ �� ������, ��� ������ �� �� ������. � �������� ����� ���������������� � �� �� ������������. �������� ������� ������� ������� ����������������.\n"); break;
		case 8: printf("\n���� ������� ����� �� ���������, �� �������� ����.\n"); break;
		case 9: printf("\n�������� ������� �� � �������� �������, ��� � ���������� �����������.\n"); break;
		case 10: printf("\n������� ��������, ����� �� ��������.\n"); break;
		case 11: printf("\n������� ������� ������������:\n � ��� ������ �������, � ������� � ��� ����, ������� �������� �������!\n"); break;
		case 12: printf("\n������� ���� �� �����, � ��������� ������� ����� �������� �������� �� ���������\n"); break;
		case 13: printf("\n��� �������� ������, � ��� �� ������ � ���� ������� ������.\n"); break;
		case 14: printf("\n������������� � Wi-Fi.\n"); break;
		case 15: printf("\n�������� � ���� ��� ����� ��������� � �������.\n"); break;
		case 16: printf("\n���� �� ������ �� �������, �� ������ �� ����������.\n"); break;
		case 17: printf("\n��������� �����������.\n"); break;
		case 18: printf("\n�������� � �����.\n�������� � ������ �����.\n���� ����� � ������ �����.\n"); break;
		case 19: printf("\n���� ����, ����� ���� ����, ������ ������� ����� �� ����?\n"); break;
		case 20: printf("\n� ����� ��� ���������?\n����� ������, ��� ��� ��� �� �����. ���� �� �� �� �������, �� �� �������, ��� ��� ��� �� �����.\n"); break;
		case 21: printf("\n����� ��� ������� ��������.\n"); break;
		case 22: printf("\n� ����� ������ ����� � ���� ��� �����. ����� ��� �������, �� ������ ����.\n"); break;
		case 23: printf("\n���� ��� ����, � ���������� � ��� ���� ������ �������� ������ ����.\n"); break;
		case 24: printf("\n������� ���������� ��������, ��. ����� �� ��������, ��� ������ ����������.\n"); break;
		case 25: printf("\n� ��� ����� ������?\n"); break;
		case 26: printf("\n��, ������ ���� �� ����������. �� ������ ���������� ���� ����� ��������.\n"); break;
		case 27: printf("\n� ��� ����� ������?\n"); break;
		case 28: printf("\n� ��� �����.\n� ��� ����� �� �����?\n� ��� ������������ ������, ������� ����� ���������� ��� �����.\n"); break;
		case 29: printf("\n����� ������ �� �����������, ����� ��������� � �������.\n� ������ ���� ���� � ��������� ������.\n"); break;
		case 30: printf("\n� � � ��� ���� ���������? ��� ��� ��������?\n � ��, ��� ��� ��� ��� ����� ��������. �����. �� ����� �������.\n"); break;
		case 31: printf("\n� ������ ���� ����. � ���� � ��� ����������.\n"); break;
		}
		if (citation >= 0 && citation <= 28)
			printf("(�) ������� �������������\n");
		else
		{
			printf("(�) ������� ����������\n");
		}
		printf("\n(1 - ��������� ������, 0 - �����)\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
//������
void task1()
{
	float x1, x2, y1, y2, l;//������������ ��� ������
	printf("������� ���������� ������ ����� (x1,y1):\n");
	scanf_s("%f %f", &x1, &y1);
	printf("������� ���������� ������ ����� (x2,y2):\n");
	scanf_s("%f %f", &x2, &y2);
	l = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); // sqrt - ������
	printf("���������� ����� ������� %.2f\n", l);
}
void task2()
{
	float h, R, S, V;
	printf("������� h � R:\n");
	scanf_s("%f %f", &h, &R);
	S = 2 * 3.14 * R * (h + R);
	V = 3.14 * R * R * h;
	printf("������� �������� = %.2f\n ����� �������� = %.2f\n", S, V);
}
void task3()
{
	float x1, y1, x2, y2, k, b;
	printf("������� ���������� ������ ����� (x1,y1):\n");
	scanf_s("%f %f", &x1, &y1);
	printf("������� ���������� ������ ����� (x2,y2):\n");
	scanf_s("%f %f", &x2, &y2);
	k = (y1 - y2) / (x1 - x2);
	b = y2 - k * x2;
	printf("y = %.2f + %.2f\n", k, b);
}
//�����
void cycle1()
{
	int n, sumch = 0, sumnech = 0;
	printf("������� �����:\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0) //���� i ������� �� 2 ������, �� ������. % - ����������� ������� �� �������
		{
			sumch = sumch + pow(i, 2); // pow - ���������� � ������� 
		}
		else
		{
			sumnech = sumnech + pow(i, 3);
		}
	}
	printf("����� ������ = %d\nC���� �������� = %d\n", sumch, sumnech);
}
void cycle2()
{
	int sum = 0, n, rost;
	printf("������� ���������� �������:\n");
	scanf_s("%d", &n);
	printf("������� ���� �����:\n");
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &rost);
		sum += rost;
	}
	printf("������� ���� = %d\n", sum / n);
}
void cycle3()
{
	int n;
	printf("������� ����� n\n");
	scanf_s("%d", &n);
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) //���� ����� ������� ��� �������, �� i - ��������
		{
			printf("�������� = %d\n", i);
		}
	}
}
void cycle4()
{
	int n, i, del, razr = 0;
	printf("������� �����\n");
	scanf_s("%d", &n);
	del = 10;
	do {
		i = n / del;
		del = del * 10;
		razr++;
	} while (i > 0);
	printf("�������� � ����� = %d\n", razr);
}
void cycle5()
{
	int a, b, c, otvet = 0, k;
	for (int k = 0; k < 10; k++)
	{
		a = rand() % 10;
		b = rand() % 10;
		printf("%d * %d = ", a, b);
		scanf_s("%d", &c);
		if (c == a * b)
		{
			printf("���������\n\n");
			otvet++;
		}
		else
		{
			printf("�����������, ������ �����: %d\n\n", a * b);
		}
	}
	printf("���� ������: ");
	if (otvet == 10)
	{
		printf("�������\n");
	}
	if (otvet < 10 && otvet > 7) //9 � 8
	{
		printf("������\n");
	}
	if (otvet < 8 && otvet>5) // 7 � 6
	{
		printf("�����������������\n");
	}
	else
	{
		printf("�����\n");
	}
}
//�������
void conditions1()
{
	int a, b, i;
	printf("������� a � b, ��� a < b:\n");
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		printf("��� ������ �����:\n");
		for (i = a; i <= b; i++)
		{
			if (i % 2 == 0) //��� ��������
			{
				printf(" %d", i);
			}
		}
	}
	else
	{
		printf("����������� ������� �����\n");
	}
}
void conditions2()
{
	int i = 1, n;
	printf("������� N:\n");
	scanf_s("%d", &n);
	printf("�������� �����, �� ������������� %d\n:", n);
	do {
		printf(" %d", i * i);
		i++;
	} while (i * i <= n); //while - ���� �������� ����������� ����� ������ N
}
void conditions3()
{
	int n, i, sum = 0;
	printf("������� N:\n");
	scanf_s("%d", &n);
	while (n > 0)
	{
		i = n % 10; // ����������� ������� (23/10=3)
		sum = sum + i;
		n = n / 10; //��������� ������
	}
	printf("����� ����� = %d\n", sum);
}
void conditions4()
{
	int n, a, k;
	printf("������� ������ �������:\n");
	scanf_s("%d", &n);
	printf("������� ������������������:\n");
	for (int i = 1; i <= n; i++) //���� �� ������� N
	{
		printf("\n");
		scanf_s("%d", &a);
		if (a == 0) //����� ��������� ����� ����� = 0
		{
			k = i - 1; //���������� ������ ������������������ (�� ������ 0)
		}
	}
	printf("���������� ������ ������������������: %d\n", k);
}
void conditions5()
{
	int a, b, c, d, min;
	printf("������� ������ �����\n");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	min = a; //����������� ������� ����� �������� min, ����� ���� ����� ����������
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}
	if (d < min)
	{
		min = d;
	}
	printf("���������� ����� = %d\n", min);
}
void conditions6()
{
	int n1, n2;
	printf("������� ��� �����:\n");
	scanf_s("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		printf("���������� �����: %d\n", n1);
	}
	if (n2 > n1)
	{
		printf("���������� �����: %d\n", n2);
	}
	else
	{
		printf("����� �����\n");
	}
}
void conditions7()
{
	int n1, n2, n3, count = 0;
	printf("������� ��� �����\n");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	if ((n2 == n3) | (n2 == n1) | (n1 == n3))
	{
		printf("0\n"); count = 1;
	}
	if (n1 > n2 && count == 0)
	{
		if (n1 > n3)
		{
			printf("���������� ����� ��� ������� 1\n"); count = 1;
		}
		else
		{
			printf("���������� ����� ��� ������� 3\n"); count = 1;
		}
	}
	if (n3 > n2 && count == 0) //�� n1 < n2
	{
		printf("���������� ����� ��� ������� 3\n"); count = 1;
	}
	else
	{
		printf("���������� ����� ��� ������� 2\n"); count = 1;
	}
}
void conditions8()
{
	int x, y, t, Ry = 3, Rx = 5;
	printf("������� ��������� �����:\n");
	scanf_s("%d %d", &x, &y);
	t = ((x * x) / (Rx * Rx)) + ((y * y) / (Ry * Ry));
	if (t < 1)
	{
		printf("����� ����� ������ �������\n");
	}
	else
	{
		printf("����� �� ����� ������ �������\n");
	}
}
//�������
void CreateRandArray(int* massiv, int* len) //�������� ���������� �������
{
	for (size_t i = 0; i < len; i++)
	{
		massiv[i] = rand() % abs(50);
		printf("a[%d] = %d\n", i, massiv[i]);
	}
	printf("\n");
}
void CreateArray(int* massiv, int* len) //�������� �������
{
	for (size_t i = 0; i < len; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &massiv[i]);
	}
	printf("\n");
}
void ArraySorting(int* massiv, int* len) //���������� �������
{
	int temp = 0;
	printf("��������������� ������:\n");
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (massiv[i] > massiv[j])
			{
				temp = massiv[i];
				massiv[i] = massiv[j];
				massiv[j] = temp;
			}
		}
		printf("a[%d] = %d\n", i, massiv[i]);
	}
	printf("\n");
}
void zadmas1()
{
	int i, x, y, r;
	printf("������� ��� �����\n");
	scanf_s("%d %d", &x, &y);
	if (abs(x) <= 100 && abs(y) <= 100) //abs - ��� ������
	{
		r = y - x;
		int* massiv = malloc(r, sizeof(int));
		for (i = 0; i <= r; i++)
		{
			massiv[i] = (x + i) * (x + i);
			printf("%d ", massiv[i]);
		}
	}
	else
	{
		printf("����������� ������� �������� x ��� y\n");
	}
}
void zadmas2()
{
	int n, i;
	printf("������� ������ �������\n");
	scanf_s("%d", &n);
	if (0 < n && n < 10000)
	{
		int* massiv = malloc(n, sizeof(int));
		for (i = 1; i <= n; i++)
		{
			massiv[i] = i; //������ ����� �������
			printf("%d ", massiv[i]);
		}
	}
	else
	{
		printf("����������� ������ ������ �������\n");
	}
}
void zadmas3()
{
	int n, P, temp = 0, count = 0;
	printf("������� ������ �������:\n");
	scanf("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //��������� ������������ ������
	printf("������� ����� P:\n");
	scanf_s("%d", &P);
	printf("\n");
	CreateRandArray(massiv, n);
	ArraySorting(massiv, n);
	int sum = massiv[0];
	for (int i = 0; i <= n; i++)
	{
		sum = sum + massiv[i];
		if (sum <= P) //������� ����������� �����
		{
			count++;
		}
	}
	printf("���������� �����, ����� ������� �� ��������� ����� P(%d) = %d\n", P, count); //������� ����������� �����, ����� ������� �� ��������� P
}
void zadmas4()
{
	int n, i, p, j, temp = 0, sumM = 0, srznach, count = 0;
	printf("������� ������ ������� \n");
	scanf_s("%d", &n); //������������ ������
	int* massiv = malloc(n, sizeof(int)); //��������� ���������� ������ ������
	CreateRandArray(massiv, n);
	for (i = 0; i < n; i++) //���������� �������� ��������������� �����
	{
		sumM = sumM + massiv[i]; //�������� ���� ���������
	}
	srznach = sumM / n;
	ArraySorting(massiv, n);
	printf("������� �������������� �������� �����: %d\n", srznach);
	int dev, devmin = massiv[n - 1], devmax = massiv[0], indmax = 0, indmin = 0; //dev - ����������
	for (i = 0; i < n; i++)
	{
		dev = abs(srznach - massiv[i]); //������ �� �������� - �� �������
		if (dev <= devmin) //����������� ����������
		{
			devmin = dev;
			indmin = i;
		}
		else if (dev >= devmax) //������������ ����������
		{
			devmax = dev;
			indmax = i;
		}
	}
	printf("������������ ����������: a[%d] = %d\n����������� ����������: a[%d] = %d\n", indmax, devmax, indmin, devmin);
	return 0;
}
void zadmas5()
{
	int n, i, count = 0, kolich = 0;
	printf("������� ������ �������\n");
	scanf_s("%d", &n);
	printf("\n");
	int* massiv = malloc(n, sizeof(int));
	CreateArray(massiv, n);
	for (int i = 0; i < n; i++) // ������� ����� �����
	{
		if (massiv[i] == 0)
		{
			count++;
		}
	}
	printf("\n");
	int count1 = 1, sum = 0;
	for (int i = 0; i < n; i++)
	{
		if ((massiv[i] == 0) && count1 < count)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (massiv[j] != 0)
				{
					sum = sum + massiv[j];
					kolich++;
				}
				else
				{
					count1++;
					break; // ������� ����� �����
				}
			}
		}
	}
	printf("����� ����� ����� ������ = %d\n���������� = %d\n", sum, kolich);
}
void zadmas6()
{
	int n, x, i, temp, count = 0;
	printf("������� n\n");  //���� ������� �������
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //��������� ���������� ������ ������
	CreateRandArray(massiv, n);
	ArraySorting(massiv, n);
	printf("������� x\n"); //���� �����
	scanf_s("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (massiv[i] == x)
		{
			count++;
		}
	}
	if (count == 2 || count == 3 || count == 4)
	{
		printf("��������� ����� ����������� � ������� %d ����\n", count);
	}
	else
	{
		printf("��������� ����� ����������� � ������� %d ���\n", count);
	}
}
void zadmas7()
{
	int n;
	printf("������� ���������� ��������� �������:\n");
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //��������� ������������ ������
	CreateRandArray(massiv, n);
	int j = 0;
	int min = massiv[0];
	for (int i = 0; i < n; i++)
	{
		if (massiv[i] < min)
		{
			min = massiv[i];
			j = i;
		}
	}
	massiv[j] = massiv[0];
	massiv[0] = min;
	for (size_t i = 0; i < n; i++)
	{
		printf("a[%d] = %d\n", i, massiv[i]);
	}
}
void zadmas8()

{
	int n, x, i, temp, count = 0;
	printf("������� n\n"); //���� ������� �������
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //��������� ���������� ������ ������
	CreateRandArray(massiv, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (massiv[i] < massiv[j])
			{
				temp = massiv[i];
				massiv[i] = massiv[j];
				massiv[j] = temp;
			}
		}
		printf("a[%d] = %d\n", i, massiv[i]);
	}
}
void zadmas9()
{
	int n;
	printf("������� ���������� ��������� �������:\n");
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //��������� ������������ ������
	for (size_t i = 0; i < n; i++)
	{
		massiv[i] = rand() % 100 + (-50); //�������� [-50;50] 
		printf("a[%d] = %d\n", i, massiv[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = %d ", i, massiv[i]);
		if (massiv[i] >= 0)
		{
			printf("(������������� � ");
		}
		else
		{
			printf("(������������� � ");
		}
		if (massiv[i] % 2 == 0) //������� � ��������, ����� ��������� �� ��������
		{
			printf("������)\n");
		}
		else
		{
			printf("��������)\n");
		}
	}
}
void zadmas10()
{
	int n, i;
	printf("������� n\n");  //���� ������� �������
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //��������� ������������ ������
	for (size_t i = 0; i < n; i++)
	{
		massiv[i] = rand() % 89 + (10); //�������� [10;99]
		printf("a[%d] = %d\n", i, massiv[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		int s = 0; // �������� �������� �����
		while (massiv[i] > 0) // ����� ��� ��������� ���� �� �� ��������
		{
			s = s + massiv[i] % 10;
			massiv[i] /= 10;
		}
		printf("a[%d] = %d\n", i, s);
	}
}
void zadmas11()

{
	int n;
	printf("������� n\n"); //���� ������� ��������
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //��������� ���������� ������ ������
	int* b = malloc(n, sizeof(int));
	printf("������ a:\n");
	for (size_t i = 0; i < n; i++)
	{
		massiv[i] = rand() % abs(10);
		printf("a[%d] = %d\n", i, massiv[i]);
	}
	printf("\n ������ b:\n");
	for (size_t i = 0; i < n; i++)
	{
		b[i] = rand() % abs(10);
		printf("b[%d] = %d\n", i, b[i]);
	}
	printf("\n ����� ������ a:\n");
	for (size_t i = 0; i < n; i++) //���������� �����
	{
		if (massiv[i] == b[i]) //���� 1 ������� ������� = 2 �������� ������� ��� ����� ��������
		{
			massiv[i] = 0; //��������
		}
		printf("a[%d] = %d\n", i, massiv[i]);
	}
}
//������
int CountS(char* str)
{
	int count = 0, i;
	for (i = 0; str[i] != '\0'; i++) //���� �������� �������� �� ������������ ����
	{
		count++; //������� ����������� ��������, ����� ����������� ������� �� �����������
	}
	return count;
}
int FirstS(char* str)
{
	int i, min = 0;
	for (i = 0; str[i] != '\0'; i++) // ���� ��� ������ ������� �������
	{
		if (str[i] != ' ') //����� ������� �������, �� = �������
		{
			min = i;
			break; //����� �� �����, ��� ������ ������ ������ ������
		}
	}
	return min;
} //�������� � �������
void zadStr1()
{
	char* str = calloc(100 + 1, sizeof(char)); //������ �� 100 �������� +\0 (����� ������ ������ �������, ��� ��������� sizeof(char))
	gets(str);
	int i = 0, count = 1, min = 0; //count = 1, �.�. ���� ������, ��� ��������.
	for (i = FirstS(str); str[i] != '\0'; i++) // ������ i = min
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') // ����� ������� ���� ����� (�� ������/����� ���)
		{
			count++;
		}
	}
	printf("���������� ���� � ������: %d\n", count);
}
void zadStr2()
{
	char* str = calloc(100 + 1, sizeof(char));
	gets(str);
	int count = 0, i = 0, max = 0;
	for (i = 0; str[i] != '\0'; i++) // i++ �� ������������ ����
	{
		if (str[i] != ' ')
		{
			count++; // ������� �������� �� �������
		}
		else
		{
			if (count > max)
			{
				max = count; // �������� ������������ ��������
			}
			count = 0; // �������� ����������� ��������
		}
		if (count > max) // �������� ���������� �����
		{
			max = count;
		}
	}
	printf("���������� �������� � ����� ������� �����: %d\n", max);
}
void zadStr3()
{
	char* str = calloc(100 + 1, sizeof(char));
	gets(str);
	int i, j;
	for (i = 0, j = 0; str[i] != '\0'; i++) //���� ��� �������� �������� �� ��������� ������
	{
		if (str[i] != ' ')
		{
			str[j++] = str[i]; //���������� ����� ������ ��������
		}
	}
	str[j] = '\0'; //������������ � ����� ������
	char* str2 = calloc(CountS(str) + 1, sizeof(char)); //������ ��������� ������ CountS(str)
	for (int i = 0, j = CountS(str) - 1; i < CountS(str); i++, j--) //������� ������ ������ ��������������� � �������� �������
	{
		str2[j] = str[i]; //������ ������� ��������� � �������� �������
	}
	if (strcmp(str, str2) == 0) //������ ������� ���������� ����� �� �������� ���� �����(��������)
	{
		printf("������ ������ ���������\n");
	}
	else
	{
		printf("������ �� �������� �����������\n");
	}
}
void zadStr4()
{
	char* str = calloc(100 + 1, sizeof(char));
	gets(str);
	int count = 0, povtor = 0, n = 0;
	char* str2 = calloc(CountS(str), sizeof(char));
	for (int i = 0; str[i] != '\0'; i++) //���� ��� ��������� ������ �������� � �������
	{
		for (int j = 0; str[j] != '\0'; j++)
		{
			if (i != j && str[i] == str[j]) //������� �����������
			{
				povtor = 1;
				break;
			}
		}
		if (povtor != 1) //������� ��������
		{
			str2[n] = str[i]; n++;
			count++;
		}
		povtor = 0; //�������� ��� �������� ���������� ��������
	}
	printf("���������� ���������� ��������: %d\n", count);
	printf("����� ���������� ������: %s\n", str2);
}
void zadStr5()
{
	char* str = calloc(255 + 1, sizeof(char));
	gets(str);
	int i = 0, min;
	for (i = FirstS(str); str[i] != '\0'; i++) // ������ i = min
	{
		if (str[i] != ' ')
		{
			printf("%c", str[i]);
		}
		else
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0') // ����� ������� ���� �����
			{
				printf(" ");
			}
		}
	}
}
void zadStr6()
{
	char* str = calloc(100 + 1, sizeof(char));
	gets(str);
	int i = 0, count� = 0, all = 0, count = 0;
	printf("�����:\n");
	for (i = 0; str[i] != 'R' && str[i] != '\0'; i++)
	{
		printf("%c", str[i]); //����� �
		count�++; //������� ���������� B
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'R') //����� R
		{
			printf("%c", str[i]);
		}
		else
		{
			all++; //������� ���� B
		}
	}
	count = all - count�;
	printf("\n���������� ��������� �: %d\n", count);
}
//��������� �������
int MaxArreyEl(int** massiv, int M, int N)
{
	int max = massiv[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (massiv[i][j] > max)
			{
				max = massiv[i][j];
			}
		}
	}
	return max;
}
int RandArrey2(int** massiv, int M, int N) //������� ��������� ��������� ������
{
	for (size_t i = 0; i < N; i++)
	{
		printf("\n");
		massiv[i] = calloc(M, sizeof(int));
		for (size_t j = 0; j < M; j++)
		{
			massiv[i][j] = (rand() % 10) + 1;
			printf("%d ", massiv[i][j]);
		}
	}
}
void zad2mas1()
{
	int N, M;
	printf_s("������� ���������� �����:\n");
	scanf("%d", &N);
	printf_s("������� ���������� ��������:\n");
	scanf("%d", &M);
	int** massiv = calloc(N, sizeof(int*)); //��������� ������ ��� ������
	RandArrey2(massiv, M, N);
	printf("\n������������ ������� �������: %d\n", MaxArreyEl(massiv, M, N));
}
void zad2mas2()
{
	int N, M, maxsum = 0, maxind = 0, sum = 0;
	printf_s("������� ���������� �����:\n");
	scanf("%d", &N);
	printf_s("������� ���������� ��������:\n");
	scanf("%d", &M);
	int** massiv = calloc(N, sizeof(int*));
	RandArrey2(massiv, M, N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			sum += massiv[i][j];
		}
		if (sum > maxsum)
		{
			maxsum = sum;
			maxind = i;
		}
		sum = 0; // ��������, ����� ������� ��������� ������
	}
	printf("\n������������ ����� �������: %d\n", maxsum);
	printf("��������: %d\n", maxind);
}
void zad2mas3()
{
	int N, M, maxel = 0, maxi = 0, maxj = 0;
	printf_s("������� ���������� �����:\n");
	scanf("%d", &N);
	printf_s("������� ���������� ��������:\n");
	scanf("%d", &M);
	int** massiv = calloc(N, sizeof(int*));
	RandArrey2(massiv, M, N);
	int maxsum = 0, maxind = 0, sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (massiv[i][j] > maxel)
			{
				maxel = massiv[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}
	printf("\n������������ �������: %d\n", maxel);
	printf("��� �������: %d %d\n", maxi, maxj);
}
void zad2mas4()
{
	int N, M, maxel = 0, count = 0;
	printf_s("������� ���������� �����:\n");
	scanf("%d", &N);
	printf_s("������� ���������� ��������:\n");
	scanf("%d", &M);
	int** massiv = calloc(N, sizeof(int*));
	RandArrey2(massiv, M, N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (massiv[i][j] >= maxel)
			{
				maxel = massiv[i][j];
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (maxel == massiv[i][j])
			{
				count++;
				j = M;
			}
		}
	}
	printf("\n����������� �����������: %d\n", count);
}
void zad2mas5()
{
	int N, M;
	printf_s("������� �����������:\n");
	scanf("%d", &N);
	M = N;
	int** massiv = calloc(N, sizeof(int*));
	for (int i = 0; i < N; i++)
	{
		printf("\n");
		massiv[i] = calloc(M, sizeof(int));
		for (int j = 0; j < M; j++)
		{
			printf("%d ", 1);
		}
		M--;
	}
}
void zad2mas6()
{
	int N, M;
	printf_s("������� ���������� �����:\n");
	scanf("%d", &N);
	printf_s("������� ���������� ��������:\n");
	scanf("%d", &M);
	int** massiv = calloc(N, sizeof(int*));
	for (int i = 0; i < N; i++)
	{
		massiv[i] = calloc(M, sizeof(int));
		for (int j = 0; j < M; j++)
		{
			if (i == 0 || j == 0)
			{
				massiv[i][j] = 1;
				printf("%3d ", massiv[i][j]);
			}
			else
			{
				massiv[i][j] = massiv[i - 1][j] + massiv[i][j - 1];
				printf("%3d ", massiv[i][j]);
			}
		}
		printf("\n");
	}
}
void zad2mas7()
{
	int N, M, i, j, spiral, x, left, down, right, up, n = 0;
	printf("������� �����:\n");
	scanf("%d", &spiral);
	M = N = spiral * 2 + 1; //������ �������, ��� N -���������� �����(��������)
	int** massiv = calloc(N, sizeof(int*)); //��������� ������
	for (i = 0; i < N; i++)
	{
		massiv[i] = calloc(M, sizeof(int));
	}
	i = j = spiral; //����������� �������
	massiv[i][j] = n; n++; //��������� ����� �����
	for (x = 1; x <= spiral; x++) //�������� �������
	{
		i--; massiv[i][j] = n; n++; //��� �����
		left = x * 2 - 1, down = x * 2, right = x * 2, up = x * 2;
		while (left > 0)
		{
			j--;
			massiv[i][j] = n; n++;//�����
			left--;
		}
		while (down > 0)
		{
			i++;
			massiv[i][j] = n; n++;//����
			down--;
		}
		while (right > 0)
		{
			j++;
			massiv[i][j] = n; n++;//������
			right--;
		}
		while (up > 0)
		{
			i--;
			massiv[i][j] = n; n++;//�����
			up--;
		}
	}
	for (i = 0; i < N; i++) //����� �������
	{
		for (j = 0; j < M; j++)
		{
			printf("%3d", massiv[i][j]);
		}
		printf("\n");
	}
}
//�����
void zadswitch1()
{
	int month;
	printf("������� ����� ������:\n");
	scanf_s("%d", &month);
	switch (month)
	{
	case(1): printf("winter\n"); break;
	case(2): printf("winter\n"); break;
	case(3): printf("spring\n"); break;
	case(4): printf("spring\n"); break;
	case(5): printf("spring\n"); break;
	case(6): printf("summer\n"); break;
	case(7): printf("summer\n"); break;
	case(8): printf("summer\n"); break;
	case(9): printf("autumn\n"); break;
	case(10): printf("autumn\n"); break;
	case(11): printf("autumn\n"); break;
	case(12): printf("winter\n"); break;
	default: printf("NO\n"); break;
	}
}
void zadswitch2()
{
	int month;
	printf("������� ����� ������:\n");
	scanf_s("%d", &month);
	switch (month)
	{
	case(1): case(3): case(5): case(7): case(8): case(10): case(12):
	{
		printf("31\n");	break;
	}
	case(4): case(6): case(9): case(11):
	{
		printf("30\n"); break;
	}
	case(2): printf("28\n"); break;
	default: printf("0\n"); break;
	}
}
void zadswitch3()
{
	const int begin = 1894; // ������ �����
	int check = begin; // ����������, ������� ����� ��������� 12�������� ����� �� ��������� ����
	int color, s, end; // ��������������� ���������� ��� �������� ��������� ������
	do {
		int n; // ���, ������� ����� ������������
		printf("������� ���:\n");
		scanf_s("%d", &n);
		printf("��� ��� ");
		color = n % 10;
		switch (color)
		{
		case(1): printf("���"); break;
		case(2): printf("�����"); break;
		case(3): printf("�����"); break;
		case(4): printf("����"); break;
		case(5): printf("����"); break;
		case(6): printf("�����"); break;
		case(7): printf("�����"); break;
		case(8): printf("���"); break;
		case(9): printf("���"); break;
		case(0): printf("���"); break;
		}
		s = n % 12;
		switch (s)
		{
		case(0): printf("�� ��������\n"); break;
		case(1): printf("��� ������\n"); break;
		case(2): printf("�� ������\n"); break;
		case(3): printf("�� ������\n"); break;
		case(4): printf("�� �����\n"); break;
		case(5): printf("��� ����\n"); break;
		case(6): printf("��� �����\n"); break;
		case(7): printf("��� �������\n"); break;
		case(8): printf("��� �������\n"); break;
		case(9): printf("�� ����\n"); break;
		case(10): printf("�� ������\n"); break;
		case(11): printf("�� ����\n"); break;
		case(12): printf("�� ��������\n"); break;
		}
		printf("������� 1 ����� ���������, 0 - ��������� ���������.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
//���������
struct Date //��������� ����
{
	int d;
	int m;
	int y;
};
struct FIO //��������� ���
{
	char* F;
	char* I;
	char* O;
	struct Date DT;
};
typedef struct FIO Info; //�������������� ���������, ��� ����� �������� ������
void PrintPerson(Info* Person, int n)
{
	for (int i = 0; i < n; i++)  //���� ��� ��������� (������ - ���)
	{
		printf("%s %s %s %d %d %d\n", Person[i].F, Person[i].I, Person[i].O, Person[i].DT.d, Person[i].DT.m, Person[i].DT.y);
	}
}
int Sorting(Info* Person, int n)
{
	Info temp;
	for (int i = 0; i < n; i++)  //���� ��� ��������� (������ - ���)
	{
		for (int j = i; j < n; j++) //c��������� � ��������� ������� ������
		{
			if (Person[i].DT.y > Person[j].DT.y)
			{
				temp = Person[i];
				Person[i] = Person[j];
				Person[j] = temp;
			}
			if (Person[i].DT.y == Person[j].DT.y)
			{
				if (Person[i].DT.m > Person[j].DT.m)
				{
					temp = Person[i];
					Person[i] = Person[j];
					Person[j] = temp;
				}
				if (Person[i].DT.m == Person[j].DT.m)
				{
					if (Person[i].DT.d > Person[j].DT.d)
					{
						temp = Person[i];
						Person[i] = Person[j];
						Person[j] = temp;
					}
				}
			}
		}
	}
}
int Poisk(Info* Person, int n, char* str)
{
	printf("���������� ������:\n");
	for (int i = 0; i < n; i++)  //���� ��� ��������� (������ - ���)
	{
		if ((Sravnenie(Person[i].F, str) == 1) || (Sravnenie(Person[i].O, str) == 1) || (Sravnenie(Person[i].I, str) == 1))
		{
			printf("%s %s %s %d.%d.%d\n", Person[i].F, Person[i].I, Person[i].O, Person[i].DT.d, Person[i].DT.m, Person[i].DT.y);
		}
	}
}
int Sravnenie(char* Person, char* str)
{
	int count = 0, rez = 0;
	for (int x = 0; x < strlen(str); x++)  //���� ��������� ������� � ��������
	{
		count = 0;
		for (int j = 0; j < strlen(Person); j++)  //������� ������� �� ���������
		{
			if (str[x] == Person[j])
			{
				if (str[x + 1] == Person[j + 1] && count != strlen(str) - 1)
				{
					count++;
					x++;
				}
				if (x == strlen(str) - 1)
				{
					count++;
					x++;
				}
			}
			if (count == strlen(str))
			{
				rez = 1;
				break;
			}
		}
	}
	return rez;
}
void struct1()
{
	int n, end = 1, sort;
	printf("������� ����������� �����:\n");
	scanf("%d", &n);
	Info* Person = calloc(n, sizeof(Info)); //��������� ������ ��� ������ � ������� ������� ���������
	for (int p = 0; p < n; p++)  //���� ��� ������ ������� � ����������
	{
		getchar(); //��������� �����
		Person[p].F = calloc(30, sizeof(Info));  //������ ������
		Person[p].I = calloc(30, sizeof(Info));
		Person[p].O = calloc(30, sizeof(Info));
		printf("������� ���: ");
		scanf("%s %s %s", Person[p].F, Person[p].I, Person[p].O);
		printf("������� ���� �������� (�������, ����� ������): ");
		scanf("%d %d %d", &Person[p].DT.d, &Person[p].DT.m, &Person[p].DT.y);
	}
	PrintPerson(Person, n);
	printf("��������� ���������� �� ����? (1 - ��, 0 - ���)\n");
	scanf_s("%d", &sort);
	if (sort == 1)
	{
		printf("��������������� ����������:\n");
		Sorting(Person, n);
		PrintPerson(Person, n);
	}
	while (end > 0)
	{
		char* str = calloc(30, sizeof(char));
		printf("������� ����� ��� ������:\n");
		getchar();
		gets(str);
		Poisk(Person, n, str);
		printf("1 - ���������� �����. 0 - �����.\n");
		scanf_s("%d", &end);
		free(str);
	}
}
//�����
void file1()
{
	FILE* myfile = fopen("file.txt", "w");//������� ��� ������
	printf("������� ������ � ����:\n");
	char* str = calloc(100, sizeof(char));
	getchar();
	gets(str);
	fprintf(myfile, "%s", str);
	fclose(myfile);//�������� �����
	printf("� ����� ��������:\n");
	char* str2 = calloc(100, sizeof(char));
	myfile = fopen("file.txt", "r");//������� ��� ������
	while (!feof(myfile)) //feof - ������� �� ��������� ������
	{
		fgets(str2, 100, myfile);// ����, �������, ������. ��������� �� ����� � ������� � ����������
		puts(str2); //�����
	}
	fclose(myfile); //��������  �����
}
void file2()
{
	int count = 0;
	float chislo, a, b, c, x1, x2, D;
	//���� ���������� � ����
	FILE* zad = fopen("yravnenie.txt", "w");//������� ��� ������
	printf("������� ��� �����:\n");
	while (count < 3)
	{
		scanf("%f", &chislo);
		fprintf(zad, "%.2f ", chislo); //������ � ����
		count++;
	}
	fclose(zad);//�������� �����
	a = 0, b = 0, c = 0;
	//���������� �� �����
	zad = fopen("yravnenie.txt", "r");//������� ��� ������
	fscanf(zad, "%f %f %f", &a, &b, &c);
	fclose(zad);
	//������� ��������� � ������ ������
	D = pow(b, 2) - 4 * a * c;
	FILE* otvet = fopen("otvet.txt", "w");
	if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		fprintf(otvet, "����� ���������: %.2f, %.2f", x1, x2); //������ ������ � ����
	}
	if (D == 0)
	{
		x1 = (-b) / (2 * a);
		fprintf(otvet, "������ ���������: %.2f", x1); //������ ������ � ����
	}
	if (D < 0)
	{
		fprintf(otvet, "������ ���"); //������ ������ � ����
	}
	fclose(otvet); //��������  �����
	//���������� ������ �� ����� � �����
	otvet = fopen("otvet.txt", "r");//������� ��� ������
	char* str = calloc(100, sizeof(char));
	fgets(str, 100, otvet);//��������� �� ����� ���� �������
	printf("%s", str); //�������
	fclose(otvet); //��������  �����
}
void file3()
{
	FILE* massiv = fopen("massiv.txt", "w");//������� ��� ������
	int n;
	printf("������� ������ �������:\n");
	scanf_s("%d", &n);
	fprintf(massiv, "%d ", n); //������ ������� �������
	getchar();
	printf("������� �������� �������\n");
	int* array = calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &array[i]);
		fprintf(massiv, "%d ", array[i]); //������ � ����
	}
	fclose(massiv);
}
void file4()
{
	int n;
	FILE* massiv = fopen("massiv.txt", "r"); //������� ��� ������
	fscanf(massiv, "%d", &n); //������� ������ ������� (������ �������)
	int* array = calloc(n, sizeof(int)); //��������� ������
	printf("������ �� �����:\n");
	for (int i = 0; i < n; i++)
	{
		fscanf(massiv, "%d", &array[i]); //��������� �������� �������
		printf("%d ", array[i]); //�������
	}
	fclose(massiv);
}
//��������� + �����
int CountStr(FILE* myfile) //������� ���������� �����
{
	myfile = fopen("fio.txt", "r"); //��������� �������� ����
	int count = 0;
	char* str = calloc(100, sizeof(char));
	while (!feof(myfile)) //feof - ������� �� ��������� ������
	{
		fgets(str, 100, myfile);// ����, �������, ������.
		count++;
	}
	return count;
}
void fileStruct1()
{
	FILE* myfile = fopen("fio.txt", "r");//������� ��� ������
	printf("���������� �����: %d\n", CountStr(myfile));
	fclose(myfile); //��������  �����
}
void fileStruct2()
{
	FILE* myfile = fopen("fio.txt", "a");//������� ��� ����������
	Info Person; //��������� ���������� ������
	printf("������� 0 ��� ����������.\n");
	do
	{
		Person.F = calloc(20, sizeof(Info));
		Person.I = calloc(20, sizeof(Info));
		Person.O = calloc(20, sizeof(Info));
		printf("������� ���: ");
		scanf("%s", Person.F);
		if (Person.F[0] == '0') break;
		scanf("%s%s", Person.I, Person.O);
		getchar();
		fprintf(myfile, "\n%s %s %s", Person.F, Person.I, Person.O); //������ � ����
	} while (Person.F[0] != '0');
	printf("�����");
	fclose(myfile); //��������  �����
}
void fileStruct3()
{
	int p = 0;
	FILE* myfile = fopen("fio.txt", "r");//������� ��� ������
	Info* Person = calloc(CountStr(myfile), sizeof(Info)); //��������� ������ ��� ������, ��� ������ = ����������� �����
	//while (!feof(myfile))
	for (p = 0; p < CountStr(myfile); p++)
	{
		Person[p].F = calloc(20, sizeof(Info));
		Person[p].I = calloc(20, sizeof(Info));
		Person[p].O = calloc(20, sizeof(Info));
		fscanf(myfile, "%s%s%s", Person[p].F, Person[p].I, Person[p].O); //��������� �� ����� � ���������� � ���������
	}
	fclose(myfile); //��������  �����
	Info temp;
	for (p = 0; p < CountStr(myfile); p++) //���� ��� ��������� ���
	{
		for (int i = 0; i < CountStr(myfile); i++) //c���������
		{
			if (strlen(Person[p].F) <= strlen(Person[i].F)) //���������� �� �����������
			{
				temp = Person[p];
				Person[p] = Person[i];
				Person[i] = temp;
			}
		}
	}
	for (p = 0; p < CountStr(myfile); p++)
	{
		printf("\n%s %s %s", Person[p].F, Person[p].I, Person[p].O);
	}
}
void fileStruct4()
{
	int n;
	FILE* myfile = fopen("fiobin.txt", "wb");//������� ��� ������ � �������� ����
	printf("������� ���������� ������, ������� ������ �������� � ����: ");
	scanf("%d", &n);
	Info* Person = calloc(n, sizeof(Info)); //��������� ������ ��� ������, ��� ������ = ����������� �����
	for (int i = 0; i < n; i++)
	{
		Person[i].F = calloc(20, sizeof(Info)); //������ ������
		Person[i].I = calloc(20, sizeof(Info));
		Person[i].O = calloc(20, sizeof(Info));
		printf("������� ���: ");
		scanf("%s%s%s", Person[i].F, Person[i].I, Person[i].O);
		getchar(); //��������� �����
		fwrite(&Person[i].F, sizeof(Info), 20, myfile); //������ � ����
		fwrite(&Person[i].I, sizeof(Info), 20, myfile); //������ � ����
		fwrite(&Person[i].O, sizeof(Info), 20, myfile); //������ � ����
	}
	fclose(myfile); //��������  �����
}
//��
void controlSM1()
{
	char* str = calloc(100 + 1, sizeof(char));
	printf("������� ������:\n");
	gets(str);
	for (int i = 0; str[i] != '\0'; i++) // i++ �� ������������ ����
	{
		switch (str[i])
		{
		case 'a': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf(""); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�':  printf("�"); break;
		case '�': printf("�\n"); break;
		}

	}
}
void controlSM2()
{
	char* str = calloc(100 + 1, sizeof(char));
	printf("������� ������:\n");
	gets(str);
	for (int i = 0; str[i] != '\0'; i++) // i++ �� ������������ ����
	{
		switch (str[i])
		{
		case 'a': printf("A"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�': printf("�"); break;
		case '�':  printf("�"); break;
		case '�': printf("�\n"); break;
		default: printf("%c", str[i]); break;
		}
	}
}
void controlSM3()
{
	int count = 0, j = 0;
	char* str = calloc(100 + 1, sizeof(char));
	printf("������� ������:\n");
	gets(str);
	char* str2 = calloc(100 + 1, sizeof(char));
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0 && count != 1)
		{
			printf("%c", str[i]);
			count = 1;
		}
		if ((i % 2) != 0 && count != 1)
		{
			str2[j] = str[i];
			j++;
			count = 1;
		}
		count = 0; //�������, ����� �� ��������� ��������� �������
	}
	printf("\n%s\n", str2);
}
void controlSM4()
{
	int N, count = 0;
	printf_s("������� ����������� �������:\n");
	scanf("%d", &N);
	int* massiv = calloc(N, sizeof(int));
	CreateRandArray(massiv, N);
	for (int i = 0; i < N; i++)
	{
		if (i == 0 && count != 1)
		{
			printf("%d (�� �������� ������ ��� ��������)\n", massiv[i]);
			count = 1;
		}
		if ((i % 2) == 0 && count != 1)
		{
			printf("%d\n", massiv[i] * 2);
			count = 1;
		}
		if ((i % 2) != 0 && count != 1)
		{
			printf("%d\n", massiv[i] * 3);
			count = 1;
		}
		count = 0; //�������, ����� �� ��������� ��������� �������
	}
}
void controlSM5()
{
	int N, M, count = 0;
	printf_s("������� ���������� �����:\n");
	scanf("%d", &N);
	printf_s("������� ���������� ��������:\n");
	scanf("%d", &M);
	int** massiv = calloc(N, sizeof(int*));
	RandArrey2(massiv, M, N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if ((massiv[i][j] % 2) == 0)
			{
				count++;
			}
		}
	}
	printf("\n���������� ������ ���������: %d\n", count);
}
int controlSM()
{
	int n, end;
	do
	{
		printf("\n�������� ������ ����:");
		printf("\n1. ������� �� ������ ��� �����, ����������� � ������ �������� ��������.");
		printf("\n2. ������ ��� �������� ����� �� ���������(����� case)");
		printf("\n3. ��������� �������� ������ �� ���: � ������ ���������� ��� ������ ����� �������� ������, �� ������ � ��������");
		printf("\n4. ��� �������� ������� � ������� ��������� ���������� �� 2, � ��������� �� 3");
		printf("\n5. ������� ���������� ������ ��������� � ��������� �������");
		printf("\n�������� ������� (1-5):\n");
		scanf("%d", &n);
		getchar();
		switch (n)
		{
		case 1: controlSM1(); break;
		case 2: controlSM2(); break;
		case 3: controlSM3(); break;
		case 4: controlSM4(); break;
		case 5: controlSM5(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
//��1-�����
struct participant1 //��������� ����������
{
	char* name; //���� ����� ����, ����� ������ �������
	int povtor;
	int min;
	int sec;
	int top;
};
typedef struct participant1 Man;
int SortingMan(Man* Person, int n)
{
	Man temp;
	//���������� �� ��������
	for (int i = 0; i < n; i++)  //���� ��� ��������� (n - ���������� ����������)
	{
		for (int j = i; j < n; j++)
		{
			if (Person[i].povtor < Person[j].povtor)
			{
				temp = Person[i];
				Person[i] = Person[j];
				Person[j] = temp;
			}
			//���� ���������� ���������� ����������, �� ��������� �������� ����, ��� �������� ���������� �� ����������� �����.
			if (Person[i].povtor == Person[j].povtor)
			{
				if (Person[i].min > Person[j].min)
				{
					temp = Person[i];
					Person[i] = Person[j];
					Person[j] = temp;
				}
				if (Person[i].min == Person[j].min)
				{
					if (Person[i].sec > Person[j].sec)
					{
						temp = Person[i];
						Person[i] = Person[j];
						Person[j] = temp;
					}
				}
			}
		}
	}
}
int TopMan(Man* Person, int n)
{
	for (int p = 0, t = 1; p < n; p++, t++) //c��������� ���������� ��������� ������� ������ � ����������� �����
	{
		if (Person[p].povtor == Person[p + 1].povtor)
		{
			if (Person[p].min == Person[p + 1].min)
			{
				while (Person[p].sec == Person[p + 1].sec)
				{
					Person[p].top = t; p++;
					Person[p].top = t;
				}
				if (Person[p].sec != Person[p + 1].sec)
					Person[p].top = t;
			}
			else Person[p].top = t;
		}
		else Person[p].top = t;
	}
}
void FScontrol1()
{
	int p = 0, k = 0, n1, n2, n3, m1, m2, m3, s1, s2, s3, ms;
	FILE* myfile = fopen("fio.txt", "r");//������� ��� ������
	Man* Person = calloc(CountStr(myfile), sizeof(Man)); //��������� ������ ��� ������, ��� ������ = ����������� ����� while (!feof(myfile))
	//��������� ��������� �� ����� ����� (CountStr)
	for (p = 0; p < CountStr(myfile); p++)
	{
		n1 = 0, n2 = 0, n3 = 0, m1 = 0, m2 = 0, m3 = 0, s1 = 0, s2 = 0, s3 = 0, ms = 0;
		Person[p].name = calloc(100, sizeof(Man));
		fgets(Person[p].name, 100, myfile);// ����, �������, ������.
		fscanf(myfile, "%d %d:%d %d %d:%d %d %d:%d\n", &n1, &m1, &s1, &n2, &m2, &s2, &n3, &m3, &s3);
		Person[p].povtor = n1 + n2 + n3; //���������� ����������
		ms = (s1 + s2 + s3) / 60; //������� ����� �� ������
		Person[p].sec = (s1 + s2 + s3) % 60; //�������
		Person[p].min = m1 + m2 + m3 + ms; //������
	}
	fclose(myfile);
	SortingMan(Person, (CountStr(myfile) / 2));
	TopMan(Person, (CountStr(myfile) / 2));
	printf("���������� ������������ ���� ��������� � ���� fioresult.txt\n");
	FILE* myfile2 = fopen("fioresult.txt", "w");//������� ��� ������
	for (k = 0, p = 0; p < (CountStr(myfile2) / 2); p++, k++)  //k - ���������� ��������� �� �� ������
	{
		fprintf(myfile2, "%s %d %d:%d %d", Person[p].name, Person[p].povtor, Person[p].min, Person[p].sec, Person[p].top); //������ � ����
		if (k < ((CountStr(myfile2) / 2) - 1))
		{
			fprintf(myfile2, "\n");
		}
	}
	fclose(myfile2);
}
//��2-�����
struct participant2 //��������� ���������� �������
{
	char* name;
	int povtor;
	int nogti;
	int top;
};
typedef struct participant2 Girl;
int SortingGirl(Girl* Person, int n)
{
	Girl temp;
	for (int i = 0; i < n; i++)  //n - ���������� ����������
	{
		for (int j = i; j < n; j++)
		{
			if (Person[i].povtor < Person[j].povtor)
			{
				temp = Person[i];
				Person[i] = Person[j];
				Person[j] = temp;
			}
			//���� ���������� ���������� ����������, �� ��������� �������� ��� ���������, ������� ������� ������ ������ �� ��� �������
			if (Person[i].povtor == Person[j].povtor)
			{
				if (Person[i].nogti < Person[j].nogti)
				{
					temp = Person[i];
					Person[i] = Person[j];
					Person[j] = temp;
				}
			}
		}
	}
}
int TopGirl(Girl* Person, int n)
{
	for (int p = 0, t = 1; p < n; p++, t++) //c��������� ���������� ��������� ������� ������ � ����������� �����
	{
		if (Person[p].povtor == Person[p + 1].povtor)
		{
			while (Person[p].nogti == Person[p + 1].nogti)
			{
				Person[p].top = t; p++;
				Person[p].top = t;
			}
			if (Person[p].nogti != Person[p + 1].nogti) Person[p].top = t;
		}
		else Person[p].top = t;
	}
}
int SortingDisGirl(Girl* Person, int n)
{
	Girl temp;
	for (int i = 0; i < n; i++)  //n - ���������� ����������
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = 0; k < strlen(Person[i].name) || k < strlen(Person[i].name); k++)
			{
				while (Person[i].name[k] == Person[j].name[k]) //��������� ��� �����, ����� ������ ����� ���������
				{
					k++;
					if (Person[i].name[k] > Person[j].name[k])
					{
						temp = Person[i];
						Person[i] = Person[j];
						Person[j] = temp;
					}
				}
				if (Person[i].name[k] > Person[j].name[k])
				{
					temp = Person[i];
					Person[i] = Person[j];
					Person[j] = temp;
					break;
				}
				else break;
			}
		}
	}
}
void FScontrol2()
{
	int p = 0, k = 0, i = 0, j = 0, Pcount = 0, DPcount = 0, n1, n2, n3, l1, l2, l3; // l - nogti
	FILE* myfile = fopen("fio.txt", "r");//������� ��� ������
	Girl* Person = calloc(CountStr(myfile), sizeof(Girl)); //��������� ������ ��� ������, ��� ������ = ����������� ����� while (!feof(myfile))
	Girl* DisPers = calloc(CountStr(myfile), sizeof(Girl)); //�������������������� ���������
	Girl* Temp = calloc(CountStr(myfile), sizeof(Girl)); //��������� ��������
	for (p = 0; p < CountStr(myfile); p++)
	{
		Temp[p].name = calloc(50, sizeof(Girl));
		n1 = 0, n2 = 0, n3 = 0, l1 = 0, l2 = 0, l3 = 0;
		fgets(Temp[p].name, 100, myfile);
		fscanf(myfile, "%d %d %d %d %d %d\n", &n1, &l1, &n2, &l2, &n3, &l3);
		Temp[p].povtor = n1 + n2 + n3; //���������� ����������
		Temp[p].nogti = l1 + l2 + l3; //���������� ��������� ������
	}
	for (p = 0; p < (CountStr(myfile) / 2); p++)
	{
		if (Temp[p].nogti <= 10)
		{
			Person[i].name = calloc(50, sizeof(Girl));
			Person[i] = Temp[p];
			Pcount++;
			i++;
		}
		else
		{
			DisPers[j].name = calloc(50, sizeof(Girl));
			DisPers[j] = Temp[p];
			DPcount++;
			j++;
		}
	}
	fclose(myfile); //��������  �����
	SortingGirl(Person, Pcount);
	TopGirl(Person, Pcount);
	SortingDisGirl(DisPers, DPcount);
	printf("���������� ������������ ���� ��������� � ���� fioresult2.txt\n");
	FILE* myfile2 = fopen("fioresult2.txt", "w");//������� ��� ������
	for (k = 0, p = 0; p < Pcount; p++, k++)
	{
		fprintf(myfile2, "%s %d %d %d", Person[p].name, Person[p].povtor, Person[p].nogti, Person[p].top);
		if (k < Pcount)
		{
			fprintf(myfile2, "\n");
		}
	}
	for (k = 0, p = 0; p < DPcount; p++, k++)
	{
		fprintf(myfile2, "%s %d %d", DisPers[p].name, DisPers[p].povtor, DisPers[p].nogti);
		if (k < (DPcount - 1))
		{
			fprintf(myfile2, "\n");
		}
	}
	fclose(myfile2);
}
int controlFS()
{
	int n, end;
	do
	{
		printf("\n��� ������ �������� �������� ���� ������������ \"fio\" � ��������� � ����� ������� � ��������� ANSI");
		printf("\n1. ������� ���� ���������� �����");
		printf("\n2. ������� ���� ���������� �����");
		printf("\n�������� ������� (1-2):\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: FScontrol1(); break;
		case 2: FScontrol2(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
//����� �����
int secret()
{
	int n, end;
	do
	{
		printf("\n�������� ����� (1-5):\n");
		printf("\n�� ����� ��������!");
		printf("\n1. ��.");
		printf("\n2. ���� �� ������.");
		printf("\n3. ������ ��������.");
		printf("\n4. ����� ������� ����?");
		printf("\n5. ������ �� ������� �������������� � �� ������!");
		scanf("%d", &n);
		switch (n)
		{
		case 1: secret1(); break;
		case 2: secret2(); break;
		case 3: secret3(); break;
		case 4: secret4(); break;
		case 5: secret5(); break;
		default: printf("Error\n"); break;
		}
		printf("\n������� 1 - ������� ������ ��������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int task()
{
	int n, end;
	do
	{
		printf("\n�������� ����� ������� (1-3):");
		printf("\n1. ������� ���������� ����� ����� �������.");
		printf("\n2. ������� ������� � ����� ��������.");
		printf("\n3. ������� ��������� ������, ���������� ����� ��� ����� (k � b).\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:	task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int cycle()
{
	int n, end;
	do
	{
		printf("\n�������� ����� ������� (1-5):");
		printf("\n1. ������� ����� ��������� ������ � ����� �������� ����� �� 1 �� N.");
		printf("\n2. ����������� �������� ����� N �������.");
		printf("\n3. ���������� ���� ���������, ����� 1 � ������ �����.");
		printf("\n4. ����������� �������� � �����.");
		printf("\n5. �������� ������ ������� ���������.\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: cycle1(); break;
		case 2:	cycle2(); break;
		case 3: cycle3(); break;
		case 4: cycle4(); break;
		case 5: cycle5(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int conditions()
{
	int n, end;
	do
	{
		printf("\n�������� ����� ������� (1-8):");
		printf("\n1. ������� ������ ����� � ��������� �� a �� b.");
		printf("\n2. ������� ��� ������ �������� ����������� �����, �� ������������� N");
		printf("\n3. ������� ����� ���� ����� N.");
		printf("\n4. ������� ����������� ������ ������������������ �� ����� 0.");
		printf("\n5. ������� ���������� �� 4 �����.");
		printf("\n6. ������� ���������� �� 2 �����.");
		printf("\n7. ������� ����� ����������� �� 3 ����� ��� 0.");
		printf("\n8. ���������, ����� �� ����� ������ ������� � ������� � ������ ��������� � Rx = 5, Ry = 3.\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: conditions1(); break;
		case 2: conditions2(); break;
		case 3: conditions3(); break;
		case 4: conditions4(); break;
		case 5: conditions5(); break;
		case 6: conditions6(); break;
		case 7: conditions7(); break;
		case 8: conditions8(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int massiv()
{
	int n, end;
	do
	{
		printf("\n�������� ����� ������� (1-11):");
		printf("\n1. ������� ������ � ��������� �� � �� b, �������� �������� ����� ��������� ����� ��������");
		printf("\n2. ��������� ������ ������� ������������ ������� �� 1 �� N � ������� ���.");
		printf("\n3. ������� �����, ����� ������� �� ��������� P.");
		printf("\n4. ������� �������� � �������� ������������� �� �������� ��������������� �����, ��������� ����� � �� ������ � ��������� ����������.");
		printf("\n5. ������� ����� � ����������� ����� ������������� ����� ��������� ������.");
		printf("\n6. ���������� ������� ��� ����������� ��������� ������������� ����� � �������.");
		printf("\n7. ����� ����������� ������� � ������� � �������� ��� ������� � 1 ���������.");
		printf("\n8. ������������� ������ �� ��������.");
		printf("\n9. ��������� ������ [-50;50]. ��� ������� �������� ������� ������� ������/�������� � �������������/�������������");
		printf("\n10. ��������� ������ [10;99]. ��������� ������, ���������� �������� ����� ��������, ���������� ������ ���� ��������� ��������� �������.");
		printf("\n11. �������� ������ �� �������� ������� �������, ������� ���� �� ������.\n");
		scanf_s("%d", &n);
		switch (n)
		{
		case 1: zadmas1(); break;
		case 2: zadmas2(); break;
		case 3: zadmas3(); break;
		case 4:	zadmas4(); break;
		case 5:	zadmas5(); break;
		case 6:	zadmas6(); break;
		case 7: zadmas7(); break;
		case 8: zadmas8(); break;
		case 9: zadmas9(); break;
		case 10: zadmas10(); break;
		case 11: zadmas11(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int string()
{
	int n, end;
	do
	{
		printf("\n������� ����� ������� (1-6):");
		printf("\n1. ���������� ���������� ���� � ������.");
		printf("\n2. ���������� ���������� �������� � ����� ������� �����.");
		printf("\n3. ����������, �������� �� ������ �����������.");
		printf("\n4. ���������� ���������� ��������� �������� � ������ � ��������� ������ ���������� ������.");
		printf("\n5. ������� ������ �������.");
		printf("\n6. ������� �������, ������ ������ � ����� R, ������� ������� ������ �, � ����� ������ R.\n");
		scanf("%d", &n);
		getchar();
		printf("������� ������:\n");
		switch (n)
		{
		case 1: zadStr1(); break;
		case 2: zadStr2(); break;
		case 3: zadStr3(); break;
		case 4: zadStr4(); break;
		case 5: zadStr5(); break;
		case 6: zadStr6(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int massiv2()
{
	int n, end;
	do
	{
		printf("\n�������� ����� ������� (1-7):");
		printf("\n1. ������� ��������� ��������� ������ � ������������ �������.");
		printf("\n2. ������� ����� ������ � ���������� ������ ��������� � ���.");
		printf("\n3. ������� ������������ ������� � ������� ��� ������, �������.");
		printf("\n4. ������� ���������� ����������� � ���������� �����������.");
		printf("\n5. ������� ����������� �������.");
		printf("\n6. ������� ������, ��� ����� ������/������� 0 = 1, � ������ ����� ���� ��������� ������ � ����� �� ����.");
		printf("\n7. ������� ������� ������ ������� �������.\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: zad2mas1(); break;
		case 2: zad2mas2(); break;
		case 3: zad2mas3(); break;
		case 4: zad2mas4(); break;
		case 5: zad2mas5(); break;
		case 6: zad2mas6(); break;
		case 7: zad2mas7(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int switchi()
{
	int n, end;
	do
	{
		printf("\n�������� ����� ������� (1-3):");
		printf("\n1. ������� �������� ������� ���� �� ���������� �� ������ ������.");
		printf("\n2. ������� ����������� ���� � ������.");
		printf("\n3. ������� ������ � ���� ����.\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: zadswitch1(); break;
		case 2: zadswitch2(); break;
		case 3: zadswitch3(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int struc()
{
	int end;
	do
	{
		struct1();
		printf("\n������� 1 - ����������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int file()
{
	int n, end;
	do
	{
		printf("\n�������� ����� ������� (1-4):");
		printf("\n1. ���������� � ��������� ���� ����� � ��������� ��� �� ���������� �����");
		printf("\n2. ������� ����������� ���������. a, b � � (����� ������) ����������� �� ���������� �����, ����� ������������ � ������ ��������� ����.");
		printf("\n3.������ ������� � ��������� ����.");
		printf("\n4.������ ������� �� ������� �����.\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: file1(); break;
		case 2: file2(); break;
		case 3: file3(); break;
		case 4: file4(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int FileStruc()
{
	int n, end;
	printf("\n��� ������ ������ �������� � ����� � �������� �������� ���� \"fio\" � ��������� ���\n");
	do
	{
		printf("\n�������� ����� ������� (1-4):");
		printf("\n1. � ��������� ����� �������� ��������� ����� � ��� �������������, ���������� ���������� �����(feof).");
		printf("\n2. ����������� ������� ���������� � ��������� ���� ��������� ����� � ���(����). ������� ������ �� ����� - 0");
		printf("\n3. ������� ������ ��������, ���������� ���. ������������� �� ����������� ����� �������. ������ � ������ �������������� ������� �� ���������� �����.");
		printf("\n4. ������ �������� �������� � �������� ����.\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: fileStruct1(); break;
		case 2: fileStruct2(); break;
		case 3: fileStruct3(); break;
		case 4: fileStruct4(); break;
		default: printf("������ ������� ���\n"); break;
		}
		printf("\n������� 1 - ������� ������ �������, 0 - ����� � ����.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int control()
{
	int n, end;
	do
	{
		printf("\n�������� ������ ������:");
		printf("\n1. ����������� ������ ������&�������");
		printf("\n2. ����������� ������ �� ������&����������\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: controlSM(); break;
		case 2: controlFS(); break;
		default: printf("����� �� ���\n"); break;
		}
		printf("\n�� ������ ��������� ������ �����������? (1 - ��, 0 - ���).\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
//������� ������� ������
int main(void)
{
	//setlocale(LC_ALL, ".1251");
	system("chcp 1251>nul"); //��� ������ � ������� ������
	/*char a = '�';
	char � = '�';
	char b = '�';
	printf("%d %d � %d", a, �, b);*/
	//srand(clock()); //����� ����� � ������� �� �����������
	int n, end;
	do
	{
		printf("\n�������� ������ ����:");
		printf("\n1. ������");
		printf("\n2. �����");
		printf("\n3. �������");
		printf("\n4. �������");
		printf("\n5. ������");
		printf("\n6. ��������� �������");
		printf("\n7. �����");
		printf("\n8. ���������");
		printf("\n9. �����");
		printf("\n10. ����� � ���������");
		printf("\n11. ����������� ������");
		printf("\n777 - ��������\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: task(); break;
		case 2: cycle(); break;
		case 3: conditions(); break;
		case 4: massiv(); break;
		case 5: string(); break;
		case 6: massiv2(); break;
		case 7: switchi(); break;
		case 8: struc(); break;
		case 9: file(); break;
		case 10: FileStruc(); break;
		case 11: control(); break;
		case 777: secret(); break;
		default: printf("����� ���� ���\n"); break;
		}
		printf("\n�� ������ ������� ������ ����? (1 - ��, 0 - ���).\n");
		scanf_s("%d", &end);
	} while (end > 0);
	return 0;
}
