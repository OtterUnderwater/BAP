#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <string.h>
#include <time.h>
#include <locale.h> 
//пасхалки
void secret1()
{
	int znak, n, day, month;
	printf("Ваш знак зодиака - Водолей? (1 - Да, 0 - Нет)\n");
	scanf("%d", &znak);
	if (znak == 1)
	{
		do {
			day = (rand() % 31) + 1;
			month = (rand() % 2) + 1;
			printf("Вы родились %d.%d?\n", day, month);
			scanf("%d", &n);
		} while (n != 1);
		printf("Ваш день рождения %d.%d!\n", day, month);
	}
	else
	{
		printf("Что вы тут делаете?\n");
	}
}
void secret2()
{
	int q1, q2, q3, q4, q5, count = 0;
	printf("Тест: Если бы ты был собакой, то какой породы?\n");
	printf("Вопрос 1. Какая погода вам больше нравится? (Выберите один из вариантов ответа)\n 1. солнце \n 2. дождь \n 3. никакая\n");
	scanf_s("%d", &q1);
	printf("Вопрос 2. На что вы можете смотреть бесконечно?\n 1. горение огня\n 2. течение воды\n 3. на то, как другие работают\n 4. телевизор \n");
	scanf_s("%d", &q2);
	printf("Вопрос 3. Вам нравится Хатико?\n 1. да\n 2. нет\n");
	scanf_s("%d", &q3);
	printf("Вопрос 4. Какие у вас волосы?\n 1. кудрявые\n 2. прямые\n");
	scanf_s("%d", &q4);
	printf("Вопрос 5. Как вас зовут?\n 1. Юлия\n 2. не Юлия\n 3. Елизавета\n");
	scanf_s("%d", &q5);
	printf("\n");
	if (q5 == 1 && count == 0)
	{
		if (q4 == 1 && count == 0)
		{
			printf("Вы — Пудель. Элегантная и умная собака с живым характером, славящаяся своей необычной кудрявой шерстью.\n"); count = 1;
		}
		if (q4 == 2 && count == 0)
		{
			printf("Error\n"); count = 1;
		}
	}
	if (q5 == 3 && count == 0)
	{
		printf("Вы — Папильон. Красивые интеллектуалы, обладающие добродушным характером.\n"); count = 1;
	}
	if (q5 == 2 && count == 0)
	{
		if (q4 == 1 && count == 0)
		{
			if (q1 == 1 && q2 == 1 && q3 == 1 && count == 0)
			{
				printf("Вы — Мальтипу. Маленькие собачки с большим сердцем, обожающие тепло.\n"); count = 1;
			}
			if (q1 == 1 && q2 == 2 && count == 0)
			{
				printf("Вы — Золотистый ретривер. Уравновешенный и коммуникабельный, любите долгие спокойные прогулки.\n"); count = 1;
			}
			if (q1 == 1 && q2 == 4 && count == 0)
			{
				printf("Вы — Лабрадудль. Дружелюбный, умный и необычайно ласковый.\n"); count = 1;
			}
			if (q1 == 2 && q2 == 1 && count == 0)
			{
				printf("Вы — Барбет. Безумно редкая порода, со спортивными качествами и верностью семье и друзьям.\n"); count = 1;
			}
			if (q1 == 2 && q2 == 2 && count == 0)
			{
				printf("Вы — Португальская водная собака. Имеете хорошую интуицию и очень любите купаться.\n"); count = 1;
			}
			if (q1 == 2 && q2 == 3 && count == 0)
			{
				printf("Вы — Болоньезе. Почти как паста, но на деле собака.\n"); count = 1;
			}
			if (q1 == 3 && q2 == 3 && count == 0)
			{
				printf("Вы — Американский кокер-спаниель. Не любите громкий шум и обладаете искусством манипуляции.\n"); count = 1;
			}
			if (q1 == 3 && q2 == 4 && count == 0)
			{
				printf("Вы — Лабрадудль. У вас сильный характер и вы смелые духом.\n"); count = 1;
			}
			if (count == 0)
			{
				printf("Вы — Бишон фризе. Общительные, милые и озорные.\n"); count = 1;
			}
		}
		if (q4 == 2 && count == 0)
		{
			if (q3 == 1 && count == 0)
			{
				if (q1 == 1 && count == 0)
				{
					printf("Вы — Швейцарская овчарка. Верная, активная, яркая и бесстрашная, как Вольт.\n"); count = 1;
				}
				if (q1 == 2 && count == 0)
				{
					printf("Вы — Акита Ину. Сильная, гордая и преданная.\n"); count = 1;
				}
				if (q1 == 3 && q2 == 3 && count == 0)
				{
					printf("Вы — Пти-брабансон. Уравновешенный, коммуникабельный, любите долгие спокойные прогулки.\n"); count = 1;
				}
			}
			if (q2 == 3 && q1 == 3 && count == 0)
			{
				printf("Вы — Британский короткошерстный кот.\n"); count = 1;
			}
			if (q2 == 4 && count == 0)
			{
				printf("Вы — Мопс. Любите валяться на диванчике и смотреть телевизор.\n"); count = 1;
			}
			if (count == 0)
			{
				printf("Вы — Немецкая овчарка. Умная, быстрая, всегда готовая предложить лапу помощи.\n"); count = 1;
			}
		}
	}
	if (count == 0)
	{
		printf("Вы — беспородный пес. Не самая заметная дворняжка, но зато сильная духом и бегущая за мечтой.\n"); count = 1;
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
			//не рисунок
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
	case(0): printf("Сегодня удачный день"); break;
	case(1): printf("Сегодня очень удачный день"); break;
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
		case 0: printf("\nСпособ донесения: я вам с Января фигню затираю, вы все еще не поняли.\n"); break;
		case 1: printf("\nЗависит от контекста.\n"); break;
		case 2: printf("\nНе люди составляют человечество, а человечество состоит из людей.\n"); break;
		case 3: printf("\nНе переживайте, я вас всех отчислю!\n"); break;
		case 4: printf("\nЧеловек не может управлять процессом времени, поэтому он от него зависим.\nЦенность — это то, чем мы не можем управлять.\n"); break;
		case 5: printf("\nСмысл не в том, чтобы не делать фигню, а в том, чтобы не делать фигню на постоянной основе.\n"); break;
		case 6: printf("\nЦель IT: уменьшить присутствие человека в жизни человека.\n"); break;
		case 7: printf("\nЧем больше вы знаете, тем больше вы не знаете. В попытках снять неопределенность — вы ее увеличиваете. Внесение ясности рождает большую неопределенность.\n"); break;
		case 8: printf("\nЕсли мнением людей не управлять, то начнется хаос.\n"); break;
		case 9: printf("\nИстинная свобода не в истинной свободе, она в правильном ограничении.\n"); break;
		case 10: printf("\nЧеловек работает, чтобы не работать.\n"); break;
		case 11: printf("\nПравила техники безопасности:\n У вас десять пальцев, а ножницы у нас одни, поэтому берегите ножницы!\n"); break;
		case 12: printf("\nВариант «это не важно», в некоторых случаях круче варианта «зависит от контекста»\n"); break;
		case 13: printf("\nЧто является прямой, а что не прямой — тоже хороший вопрос.\n"); break;
		case 14: printf("\nМикроволновка — Wi-Fi.\n"); break;
		case 15: printf("\nМиграция — взял под мышку системник и побежал.\n"); break;
		case 16: printf("\nЕсли мы ничего не напишем, то ничего не произойдет.\n"); break;
		case 17: printf("\nСкопление человеников.\n"); break;
		case 18: printf("\nДвижение — жизнь.\nДвижение — Яндекс такси.\nВаша жизнь — Яндекс такси.\n"); break;
		case 19: printf("\nРади того, чтобы было лень, знаешь сколько всего не лень?\n"); break;
		case 20: printf("\n— Зачем нам философия?\nЧтобы понять, что она вам не нужна. Пока вы ее не изучите, вы не поймете, что она вам не нужна.\n"); break;
		case 21: printf("\nНужно вам словарь подарить.\n"); break;
		case 22: printf("\nС точки зрения стола у него нет цвета. Столу без разницы, он просто стол.\n"); break;
		case 23: printf("\nВесь мир есть, а математика — это лишь способ описания нашего мира.\n"); break;
		case 24: printf("\nФормула приведения страшная, да. Такая же страшная, как другие приведения.\n"); break;
		case 25: printf("\nВ чем смысл смысла?\n"); break;
		case 26: printf("\nДа, обычно этим не занимаются. Вы будете заниматься этим очень необычно.\n"); break;
		case 27: printf("\nВ чем смысл смысла?\n"); break;
		case 28: printf("\n— Это фигня.\n— Что такое не фигня?\n— Это некорректный вопрос, сначала нужно определить что фигня.\n"); break;
		case 29: printf("\nЖизнь вообще не справедлива, нужно привыкать с детства.\nВ садике тоже кашу с комочками давали.\n"); break;
		case 30: printf("\n— А у вас есть любимчики? Кто вам нравится?\n — Ну, мне вот мой кот очень нравится. Морис. Он зимой толстый.\n"); break;
		case 31: printf("\nУ графов есть душа. И душа — это изоморфизм.\n"); break;
		}
		if (citation >= 0 && citation <= 28)
			printf("(©) Николай Александрович\n");
		else
		{
			printf("(©) Людмила Васильевна\n");
		}
		printf("\n(1 - следующая цитата, 0 - выйти)\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
//ЗАДАЧИ
void task1()
{
	float x1, x2, y1, y2, l;//вещественный тип данных
	printf("Введите координаты первой точки (x1,y1):\n");
	scanf_s("%f %f", &x1, &y1);
	printf("Введите координаты второй точки (x2,y2):\n");
	scanf_s("%f %f", &x2, &y2);
	l = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); // sqrt - корень
	printf("Расстояние между точками %.2f\n", l);
}
void task2()
{
	float h, R, S, V;
	printf("Введите h и R:\n");
	scanf_s("%f %f", &h, &R);
	S = 2 * 3.14 * R * (h + R);
	V = 3.14 * R * R * h;
	printf("Площадь цилиндра = %.2f\n Объем цилиндра = %.2f\n", S, V);
}
void task3()
{
	float x1, y1, x2, y2, k, b;
	printf("Введите координаты первой точки (x1,y1):\n");
	scanf_s("%f %f", &x1, &y1);
	printf("Введите координаты второй точки (x2,y2):\n");
	scanf_s("%f %f", &x2, &y2);
	k = (y1 - y2) / (x1 - x2);
	b = y2 - k * x2;
	printf("y = %.2f + %.2f\n", k, b);
}
//ЦИКЛЫ
void cycle1()
{
	int n, sumch = 0, sumnech = 0;
	printf("Введите число:\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0) //если i делится на 2 нацело, то четное. % - определение остатка от деления
		{
			sumch = sumch + pow(i, 2); // pow - возведение в степень 
		}
		else
		{
			sumnech = sumnech + pow(i, 3);
		}
	}
	printf("Сумма чётных = %d\nCумма нечётных = %d\n", sumch, sumnech);
}
void cycle2()
{
	int sum = 0, n, rost;
	printf("Введите количество человек:\n");
	scanf_s("%d", &n);
	printf("Введите рост людей:\n");
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &rost);
		sum += rost;
	}
	printf("Средний рост = %d\n", sum / n);
}
void cycle3()
{
	int n;
	printf("Введите число n\n");
	scanf_s("%d", &n);
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) //если число делится без остатка, то i - делитель
		{
			printf("Делитель = %d\n", i);
		}
	}
}
void cycle4()
{
	int n, i, del, razr = 0;
	printf("Введите число\n");
	scanf_s("%d", &n);
	del = 10;
	do {
		i = n / del;
		del = del * 10;
		razr++;
	} while (i > 0);
	printf("Разрядов в числе = %d\n", razr);
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
			printf("правильно\n\n");
			otvet++;
		}
		else
		{
			printf("неправильно, верный ответ: %d\n\n", a * b);
		}
	}
	printf("Ваша оценка: ");
	if (otvet == 10)
	{
		printf("Отлично\n");
	}
	if (otvet < 10 && otvet > 7) //9 и 8
	{
		printf("Хорошо\n");
	}
	if (otvet < 8 && otvet>5) // 7 и 6
	{
		printf("Удовлетворительно\n");
	}
	else
	{
		printf("Плохо\n");
	}
}
//УСЛОВИЯ
void conditions1()
{
	int a, b, i;
	printf("Введите a и b, где a < b:\n");
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		printf("Все четные числа:\n");
		for (i = a; i <= b; i++)
		{
			if (i % 2 == 0) //опр четности
			{
				printf(" %d", i);
			}
		}
	}
	else
	{
		printf("Неправильно введены числа\n");
	}
}
void conditions2()
{
	int i = 1, n;
	printf("Введите N:\n");
	scanf_s("%d", &n);
	printf("Квадраты чисел, не превосходящие %d\n:", n);
	do {
		printf(" %d", i * i);
		i++;
	} while (i * i <= n); //while - пока квадраты натуральных чисел меньше N
}
void conditions3()
{
	int n, i, sum = 0;
	printf("Введите N:\n");
	scanf_s("%d", &n);
	while (n > 0)
	{
		i = n % 10; // определение остатка (23/10=3)
		sum = sum + i;
		n = n / 10; //уменьшаем разряд
	}
	printf("Сумма чисел = %d\n", sum);
}
void conditions4()
{
	int n, a, k;
	printf("Введите размер массива:\n");
	scanf_s("%d", &n);
	printf("Введите последовательность:\n");
	for (int i = 1; i <= n; i++) //цикл до размера N
	{
		printf("\n");
		scanf_s("%d", &a);
		if (a == 0) //когда введенное число будет = 0
		{
			k = i - 1; //количество членов последовательности (не считая 0)
		}
	}
	printf("Количество членов последовательности: %d\n", k);
}
void conditions5()
{
	int a, b, c, d, min;
	printf("Введите четыре числа\n");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	min = a; //присваиваем первому число значение min, чтобы было легче сравнивать
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
	printf("Наименьшее число = %d\n", min);
}
void conditions6()
{
	int n1, n2;
	printf("Введите два числа:\n");
	scanf_s("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		printf("Наибольшее число: %d\n", n1);
	}
	if (n2 > n1)
	{
		printf("Наибольшее число: %d\n", n2);
	}
	else
	{
		printf("Числа равны\n");
	}
}
void conditions7()
{
	int n1, n2, n3, count = 0;
	printf("Введите три числа\n");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	if ((n2 == n3) | (n2 == n1) | (n1 == n3))
	{
		printf("0\n"); count = 1;
	}
	if (n1 > n2 && count == 0)
	{
		if (n1 > n3)
		{
			printf("Наибольшее число под номером 1\n"); count = 1;
		}
		else
		{
			printf("Наибольшее число под номером 3\n"); count = 1;
		}
	}
	if (n3 > n2 && count == 0) //то n1 < n2
	{
		printf("Наибольшее число под номером 3\n"); count = 1;
	}
	else
	{
		printf("Наибольшее число под номером 2\n"); count = 1;
	}
}
void conditions8()
{
	int x, y, t, Ry = 3, Rx = 5;
	printf("Введите кординаты точки:\n");
	scanf_s("%d %d", &x, &y);
	t = ((x * x) / (Rx * Rx)) + ((y * y) / (Ry * Ry));
	if (t < 1)
	{
		printf("Точка лежит внутри эллипса\n");
	}
	else
	{
		printf("Точка не лежит внутри эллипса\n");
	}
}
//МАССИВЫ
void CreateRandArray(int* massiv, int* len) //создание рандомного массива
{
	for (size_t i = 0; i < len; i++)
	{
		massiv[i] = rand() % abs(50);
		printf("a[%d] = %d\n", i, massiv[i]);
	}
	printf("\n");
}
void CreateArray(int* massiv, int* len) //создание массива
{
	for (size_t i = 0; i < len; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &massiv[i]);
	}
	printf("\n");
}
void ArraySorting(int* massiv, int* len) //сортировка массива
{
	int temp = 0;
	printf("Отсортированный массив:\n");
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
	printf("Введите два числа\n");
	scanf_s("%d %d", &x, &y);
	if (abs(x) <= 100 && abs(y) <= 100) //abs - это модуль
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
		printf("неправильно введено значение x или y\n");
	}
}
void zadmas2()
{
	int n, i;
	printf("Введите размер массива\n");
	scanf_s("%d", &n);
	if (0 < n && n < 10000)
	{
		int* massiv = malloc(n, sizeof(int));
		for (i = 1; i <= n; i++)
		{
			massiv[i] = i; //задаем числа массива
			printf("%d ", massiv[i]);
		}
	}
	else
	{
		printf("Неправильно введен размер массива\n");
	}
}
void zadmas3()
{
	int n, P, temp = 0, count = 0;
	printf("Введите размер массива:\n");
	scanf("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //объявляем динамический массив
	printf("Введите число P:\n");
	scanf_s("%d", &P);
	printf("\n");
	CreateRandArray(massiv, n);
	ArraySorting(massiv, n);
	int sum = massiv[0];
	for (int i = 0; i <= n; i++)
	{
		sum = sum + massiv[i];
		if (sum <= P) //считаем колличество чисел
		{
			count++;
		}
	}
	printf("Количество чисел, сумма которых не превышает число P(%d) = %d\n", P, count); //выводит колличество чисел, сумма которых не первышает P
}
void zadmas4()
{
	int n, i, p, j, temp = 0, sumM = 0, srznach, count = 0;
	printf("Введите размер массива \n");
	scanf_s("%d", &n); //динамический массив
	int* massiv = malloc(n, sizeof(int)); //выделение введенного объема памяти
	CreateRandArray(massiv, n);
	for (i = 0; i < n; i++) //нахождение среднего арифметического числа
	{
		sumM = sumM + massiv[i]; //сложение всех элементов
	}
	srznach = sumM / n;
	ArraySorting(massiv, n);
	printf("Среднее арифметическое значение чисел: %d\n", srznach);
	int dev, devmin = massiv[n - 1], devmax = massiv[0], indmax = 0, indmin = 0; //dev - отклонение
	for (i = 0; i < n; i++)
	{
		dev = abs(srznach - massiv[i]); //Модуль ср значения - эл массива
		if (dev <= devmin) //Минимальное отклонение
		{
			devmin = dev;
			indmin = i;
		}
		else if (dev >= devmax) //Максимальное отклонение
		{
			devmax = dev;
			indmax = i;
		}
	}
	printf("Максимальное отклонение: a[%d] = %d\nМинимальное отклонение: a[%d] = %d\n", indmax, devmax, indmin, devmin);
	return 0;
}
void zadmas5()
{
	int n, i, count = 0, kolich = 0;
	printf("Введите размер массива\n");
	scanf_s("%d", &n);
	printf("\n");
	int* massiv = malloc(n, sizeof(int));
	CreateArray(massiv, n);
	for (int i = 0; i < n; i++) // считаем сумму нулей
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
					break; // считаем сумму нулей
				}
			}
		}
	}
	printf("Сумма чисел между нулями = %d\nКоличество = %d\n", sum, kolich);
}
void zadmas6()
{
	int n, x, i, temp, count = 0;
	printf("Введите n\n");  //ввод размера массива
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //выделение введенного объема памяти
	CreateRandArray(massiv, n);
	ArraySorting(massiv, n);
	printf("Введите x\n"); //ввод числа
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
		printf("Введенное число встречается в массиве %d раза\n", count);
	}
	else
	{
		printf("Введенное число встречается в массиве %d раз\n", count);
	}
}
void zadmas7()
{
	int n;
	printf("Введите количество элементов массива:\n");
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //Объявляем динамический массив
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
	printf("Введите n\n"); //ввод размера массива
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //выделение введенного объема памяти
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
	printf("Введите количество элементов массива:\n");
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //Объявляем динамический массив
	for (size_t i = 0; i < n; i++)
	{
		massiv[i] = rand() % 100 + (-50); //Диапазон [-50;50] 
		printf("a[%d] = %d\n", i, massiv[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = %d ", i, massiv[i]);
		if (massiv[i] >= 0)
		{
			printf("(Положительное и ");
		}
		else
		{
			printf("(Отрицательное и ");
		}
		if (massiv[i] % 2 == 0) //деление с остатком, чтобы проверить на четность
		{
			printf("четное)\n");
		}
		else
		{
			printf("нечетное)\n");
		}
	}
}
void zadmas10()
{
	int n, i;
	printf("Введите n\n");  //ввод размера массива
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //Объявляем динамический массив
	for (size_t i = 0; i < n; i++)
	{
		massiv[i] = rand() % 89 + (10); //Диапазон [10;99]
		printf("a[%d] = %d\n", i, massiv[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		int s = 0; // обнуляем значение суммы
		while (massiv[i] > 0) // после усл запускаем цикл со сл индексом
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
	printf("Введите n\n"); //ввод размера массивов
	scanf_s("%d", &n);
	int* massiv = malloc(n, sizeof(int)); //выделение введенного объема памяти
	int* b = malloc(n, sizeof(int));
	printf("Массив a:\n");
	for (size_t i = 0; i < n; i++)
	{
		massiv[i] = rand() % abs(10);
		printf("a[%d] = %d\n", i, massiv[i]);
	}
	printf("\n Массив b:\n");
	for (size_t i = 0; i < n; i++)
	{
		b[i] = rand() % abs(10);
		printf("b[%d] = %d\n", i, b[i]);
	}
	printf("\n Новый массив a:\n");
	for (size_t i = 0; i < n; i++) //сравниваем числа
	{
		if (massiv[i] == b[i]) //если 1 элемент массива = 2 элементу массива под одним индексом
		{
			massiv[i] = 0; //обнуляем
		}
		printf("a[%d] = %d\n", i, massiv[i]);
	}
}
//СТРОКИ
int CountS(char* str)
{
	int count = 0, i;
	for (i = 0; str[i] != '\0'; i++) //цикл подсчета символов до завершающего нуля
	{
		count++; //считаем колличество символов, чтобы сортировать индексы от наибольшего
	}
	return count;
}
int FirstS(char* str)
{
	int i, min = 0;
	for (i = 0; str[i] != '\0'; i++) // цикл для поиска первого символа
	{
		if (str[i] != ' ') //Поиск первого символа, не = пробелу
		{
			min = i;
			break; //выход из цикла, как только найден первый символ
		}
	}
	return min;
} //вставить в функции
void zadStr1()
{
	char* str = calloc(100 + 1, sizeof(char)); //строка до 100 символов +\0 (можно писать размер символа, или указатель sizeof(char))
	gets(str);
	int i = 0, count = 1, min = 0; //count = 1, т.к. слов больше, чем пробелов.
	for (i = FirstS(str); str[i] != '\0'; i++) // задаем i = min
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') // после пробела идет слово (не пробел/конец стр)
		{
			count++;
		}
	}
	printf("Количество слов в строке: %d\n", count);
}
void zadStr2()
{
	char* str = calloc(100 + 1, sizeof(char));
	gets(str);
	int count = 0, i = 0, max = 0;
	for (i = 0; str[i] != '\0'; i++) // i++ до завершающего нуля
	{
		if (str[i] != ' ')
		{
			count++; // подсчет символов до пробела
		}
		else
		{
			if (count > max)
			{
				max = count; // заменяем максимальное значение
			}
			count = 0; // обнуляем колличество символов
		}
		if (count > max) // проверка последнего слова
		{
			max = count;
		}
	}
	printf("Количество символов в самом длинном слове: %d\n", max);
}
void zadStr3()
{
	char* str = calloc(100 + 1, sizeof(char));
	gets(str);
	int i, j;
	for (i = 0, j = 0; str[i] != '\0'; i++) //цикл для удаления пробелов из введенной строки
	{
		if (str[i] != ' ')
		{
			str[j++] = str[i]; //записываем новую строку символов
		}
	}
	str[j] = '\0'; //приравниваем к концу строки
	char* str2 = calloc(CountS(str) + 1, sizeof(char)); //размер введенной строки CountS(str)
	for (int i = 0, j = CountS(str) - 1; i < CountS(str); i++, j--) //создаем второй массив пронумерованный в обратном порядке
	{
		str2[j] = str[i]; //меняем индексы элементов в обратном порядке
	}
	if (strcmp(str, str2) == 0) //данная функция сравнивает равны ли элементы двух строк(массивов)
	{
		printf("данная строка палиндром\n");
	}
	else
	{
		printf("строка не является палиндромом\n");
	}
}
void zadStr4()
{
	char* str = calloc(100 + 1, sizeof(char));
	gets(str);
	int count = 0, povtor = 0, n = 0;
	char* str2 = calloc(CountS(str), sizeof(char));
	for (int i = 0; str[i] != '\0'; i++) //цикл для сравнение одного элемента с другими
	{
		for (int j = 0; str[j] != '\0'; j++)
		{
			if (i != j && str[i] == str[j]) //элемент повторяется
			{
				povtor = 1;
				break;
			}
		}
		if (povtor != 1) //элемент уникален
		{
			str2[n] = str[i]; n++;
			count++;
		}
		povtor = 0; //обнуляем для проверки следующего элемента
	}
	printf("Количество уникальных символов: %d\n", count);
	printf("Новая уникальная строка: %s\n", str2);
}
void zadStr5()
{
	char* str = calloc(255 + 1, sizeof(char));
	gets(str);
	int i = 0, min;
	for (i = FirstS(str); str[i] != '\0'; i++) // задаем i = min
	{
		if (str[i] != ' ')
		{
			printf("%c", str[i]);
		}
		else
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0') // после пробела идет слово
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
	int i = 0, countВ = 0, all = 0, count = 0;
	printf("Ответ:\n");
	for (i = 0; str[i] != 'R' && str[i] != '\0'; i++)
	{
		printf("%c", str[i]); //Вывод В
		countВ++; //Подсчет выведенных B
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'R') //Вывод R
		{
			printf("%c", str[i]);
		}
		else
		{
			all++; //Подсчет всех B
		}
	}
	count = all - countВ;
	printf("\nКоличество удаленных В: %d\n", count);
}
//ДВУМЕРНЫЕ МАССИВЫ
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
int RandArrey2(int** massiv, int M, int N) //выводит рандомный двумерный массив
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
	printf_s("Введите количество строк:\n");
	scanf("%d", &N);
	printf_s("Введите количество столбцов:\n");
	scanf("%d", &M);
	int** massiv = calloc(N, sizeof(int*)); //выделение памяти под массив
	RandArrey2(massiv, M, N);
	printf("\nМаксимальный элемент массива: %d\n", MaxArreyEl(massiv, M, N));
}
void zad2mas2()
{
	int N, M, maxsum = 0, maxind = 0, sum = 0;
	printf_s("Введите количество строк:\n");
	scanf("%d", &N);
	printf_s("Введите количество столбцов:\n");
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
		sum = 0; // обнуляем, далее считаем следующий массив
	}
	printf("\nМаксимальная сумма бросков: %d\n", maxsum);
	printf("Участник: %d\n", maxind);
}
void zad2mas3()
{
	int N, M, maxel = 0, maxi = 0, maxj = 0;
	printf_s("Введите количество строк:\n");
	scanf("%d", &N);
	printf_s("Введите количество столбцов:\n");
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
	printf("\nМаксимальный элемент: %d\n", maxel);
	printf("Его индексы: %d %d\n", maxi, maxj);
}
void zad2mas4()
{
	int N, M, maxel = 0, count = 0;
	printf_s("Введите количество строк:\n");
	scanf("%d", &N);
	printf_s("Введите количество столбцов:\n");
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
	printf("\nКолличество победителей: %d\n", count);
}
void zad2mas5()
{
	int N, M;
	printf_s("Введите размерность:\n");
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
	printf_s("Введите количество строк:\n");
	scanf("%d", &N);
	printf_s("Введите количество столбцов:\n");
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
	printf("Введите центр:\n");
	scanf("%d", &spiral);
	M = N = spiral * 2 + 1; //размер массива, где N -количество строк(массивов)
	int** massiv = calloc(N, sizeof(int*)); //выделение памяти
	for (i = 0; i < N; i++)
	{
		massiv[i] = calloc(M, sizeof(int));
	}
	i = j = spiral; //центральный элемент
	massiv[i][j] = n; n++; //заполняем центр нулем
	for (x = 1; x <= spiral; x++) //создание спирали
	{
		i--; massiv[i][j] = n; n++; //шаг вверх
		left = x * 2 - 1, down = x * 2, right = x * 2, up = x * 2;
		while (left > 0)
		{
			j--;
			massiv[i][j] = n; n++;//Влево
			left--;
		}
		while (down > 0)
		{
			i++;
			massiv[i][j] = n; n++;//Вниз
			down--;
		}
		while (right > 0)
		{
			j++;
			massiv[i][j] = n; n++;//Вправо
			right--;
		}
		while (up > 0)
		{
			i--;
			massiv[i][j] = n; n++;//Вверх
			up--;
		}
	}
	for (i = 0; i < N; i++) //вывод массива
	{
		for (j = 0; j < M; j++)
		{
			printf("%3d", massiv[i][j]);
		}
		printf("\n");
	}
}
//СВИЧИ
void zadswitch1()
{
	int month;
	printf("Введите номер месяца:\n");
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
	printf("Введите номер месяца:\n");
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
	const int begin = 1894; // начало цикла
	int check = begin; // переменная, которая будет проверять 12тилетние циклы до введённого года
	int color, s, end; // вспомогательные переменные для проверки окончания циклов
	do {
		int n; // год, который введёт пользователь
		printf("Введите год:\n");
		scanf_s("%d", &n);
		printf("Это год ");
		color = n % 10;
		switch (color)
		{
		case(1): printf("бел"); break;
		case(2): printf("голуб"); break;
		case(3): printf("голуб"); break;
		case(4): printf("зелён"); break;
		case(5): printf("зелён"); break;
		case(6): printf("красн"); break;
		case(7): printf("красн"); break;
		case(8): printf("жёлт"); break;
		case(9): printf("жёлт"); break;
		case(0): printf("бел"); break;
		}
		s = n % 12;
		switch (s)
		{
		case(0): printf("ой обезьяны\n"); break;
		case(1): printf("ого петуха\n"); break;
		case(2): printf("ой собаки\n"); break;
		case(3): printf("ой свиньи\n"); break;
		case(4): printf("ой крысы\n"); break;
		case(5): printf("ого быка\n"); break;
		case(6): printf("ого тигра\n"); break;
		case(7): printf("ого кролика\n"); break;
		case(8): printf("ого дракона\n"); break;
		case(9): printf("ой змеи\n"); break;
		case(10): printf("ой лошади\n"); break;
		case(11): printf("ой овцы\n"); break;
		case(12): printf("ой обезьяны\n"); break;
		}
		printf("Введите 1 чтобы подолжить, 0 - завершить программу.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
//СТРУКТУРЫ
struct Date //структура дата
{
	int d;
	int m;
	int y;
};
struct FIO //структура фио
{
	char* F;
	char* I;
	char* O;
	struct Date DT;
};
typedef struct FIO Info; //переименование структуры, для более короткой записи
void PrintPerson(Info* Person, int n)
{
	for (int i = 0; i < n; i++)  //цикл для структуры (строка - фио)
	{
		printf("%s %s %s %d %d %d\n", Person[i].F, Person[i].I, Person[i].O, Person[i].DT.d, Person[i].DT.m, Person[i].DT.y);
	}
}
int Sorting(Info* Person, int n)
{
	Info temp;
	for (int i = 0; i < n; i++)  //цикл для структуры (строка - фио)
	{
		for (int j = i; j < n; j++) //cравниваем у прошедших условие отбора
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
	printf("Результаты поиска:\n");
	for (int i = 0; i < n; i++)  //цикл для структуры (строка - фио)
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
	for (int x = 0; x < strlen(str); x++)  //цикл сравнения фамилии с веденной
	{
		count = 0;
		for (int j = 0; j < strlen(Person); j++)  //перебор фамилии из структуры
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
	printf("Введите колличество людей:\n");
	scanf("%d", &n);
	Info* Person = calloc(n, sizeof(Info)); //выделение памяти под массив и подсчет размера структуры
	for (int p = 0; p < n; p++)  //цикл для вввода фамилий с клавиатуры
	{
		getchar(); //Закрывает сканф
		Person[p].F = calloc(30, sizeof(Info));  //массив строки
		Person[p].I = calloc(30, sizeof(Info));
		Person[p].O = calloc(30, sizeof(Info));
		printf("Введите ФИО: ");
		scanf("%s %s %s", Person[p].F, Person[p].I, Person[p].O);
		printf("Введите дату рождения (цифрами, через пробел): ");
		scanf("%d %d %d", &Person[p].DT.d, &Person[p].DT.m, &Person[p].DT.y);
	}
	PrintPerson(Person, n);
	printf("Выполнить сортировку по дате? (1 - да, 0 - нет)\n");
	scanf_s("%d", &sort);
	if (sort == 1)
	{
		printf("Отсортированные результаты:\n");
		Sorting(Person, n);
		PrintPerson(Person, n);
	}
	while (end > 0)
	{
		char* str = calloc(30, sizeof(char));
		printf("Введите слово для поиска:\n");
		getchar();
		gets(str);
		Poisk(Person, n, str);
		printf("1 - продолжить поиск. 0 - выход.\n");
		scanf_s("%d", &end);
		free(str);
	}
}
//ФАЙЛЫ
void file1()
{
	FILE* myfile = fopen("file.txt", "w");//открыли для записи
	printf("Введите запись в файл:\n");
	char* str = calloc(100, sizeof(char));
	getchar();
	gets(str);
	fprintf(myfile, "%s", str);
	fclose(myfile);//закрытие файла
	printf("В файле записано:\n");
	char* str2 = calloc(100, sizeof(char));
	myfile = fopen("file.txt", "r");//открыли для чтения
	while (!feof(myfile)) //feof - переход на следующую строку
	{
		fgets(str2, 100, myfile);// куда, сколько, откуда. считываем из файла и заносим в переменную
		puts(str2); //вывод
	}
	fclose(myfile); //закрытие  файла
}
void file2()
{
	int count = 0;
	float chislo, a, b, c, x1, x2, D;
	//ВВОД ПЕРЕМЕННЫХ В ФАЙЛ
	FILE* zad = fopen("yravnenie.txt", "w");//открыли для записи
	printf("Введите три числа:\n");
	while (count < 3)
	{
		scanf("%f", &chislo);
		fprintf(zad, "%.2f ", chislo); //запись в файл
		count++;
	}
	fclose(zad);//закрытие файла
	a = 0, b = 0, c = 0;
	//СЧИТЫВАНИЕ ИЗ ФАЙЛА
	zad = fopen("yravnenie.txt", "r");//открыли для чтения
	fscanf(zad, "%f %f %f", &a, &b, &c);
	fclose(zad);
	//РЕШЕНИЕ УРАВНЕНИЯ И ЗАПИСЬ ОТВЕТА
	D = pow(b, 2) - 4 * a * c;
	FILE* otvet = fopen("otvet.txt", "w");
	if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		fprintf(otvet, "Корни уравнения: %.2f, %.2f", x1, x2); //запись ответа в файл
	}
	if (D == 0)
	{
		x1 = (-b) / (2 * a);
		fprintf(otvet, "Корень уравнения: %.2f", x1); //запись ответа в файл
	}
	if (D < 0)
	{
		fprintf(otvet, "Корней нет"); //запись ответа в файл
	}
	fclose(otvet); //закрытие  файла
	//СЧИТЫВАНИЕ ОТВЕТА ИЗ ФАЙЛА И ВЫВОД
	otvet = fopen("otvet.txt", "r");//открыли для чтения
	char* str = calloc(100, sizeof(char));
	fgets(str, 100, otvet);//считываем из файла одну строчку
	printf("%s", str); //выводим
	fclose(otvet); //закрытие  файла
}
void file3()
{
	FILE* massiv = fopen("massiv.txt", "w");//открыли для записи
	int n;
	printf("Введите размер массива:\n");
	scanf_s("%d", &n);
	fprintf(massiv, "%d ", n); //запись размера массива
	getchar();
	printf("Введите элементы массива\n");
	int* array = calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &array[i]);
		fprintf(massiv, "%d ", array[i]); //запись в файл
	}
	fclose(massiv);
}
void file4()
{
	int n;
	FILE* massiv = fopen("massiv.txt", "r"); //открыли для чтения
	fscanf(massiv, "%d", &n); //считали размер массива (первый элемент)
	int* array = calloc(n, sizeof(int)); //объявляем массив
	printf("Массив из файла:\n");
	for (int i = 0; i < n; i++)
	{
		fscanf(massiv, "%d", &array[i]); //считываем элементы массива
		printf("%d ", array[i]); //выводим
	}
	fclose(massiv);
}
//СТРУКТУРЫ + ФАЙЛЫ
int CountStr(FILE* myfile) //считает количество строк
{
	myfile = fopen("fio.txt", "r"); //открываем принятый файл
	int count = 0;
	char* str = calloc(100, sizeof(char));
	while (!feof(myfile)) //feof - переход на следующую строку
	{
		fgets(str, 100, myfile);// куда, сколько, откуда.
		count++;
	}
	return count;
}
void fileStruct1()
{
	FILE* myfile = fopen("fio.txt", "r");//открыли для чтения
	printf("Количество строк: %d\n", CountStr(myfile));
	fclose(myfile); //закрытие  файла
}
void fileStruct2()
{
	FILE* myfile = fopen("fio.txt", "a");//открыли для дополнения
	Info Person; //объявляем переменную персон
	printf("Введите 0 для завершения.\n");
	do
	{
		Person.F = calloc(20, sizeof(Info));
		Person.I = calloc(20, sizeof(Info));
		Person.O = calloc(20, sizeof(Info));
		printf("Введите ФИО: ");
		scanf("%s", Person.F);
		if (Person.F[0] == '0') break;
		scanf("%s%s", Person.I, Person.O);
		getchar();
		fprintf(myfile, "\n%s %s %s", Person.F, Person.I, Person.O); //запись в файл
	} while (Person.F[0] != '0');
	printf("КОНЕЦ");
	fclose(myfile); //закрытие  файла
}
void fileStruct3()
{
	int p = 0;
	FILE* myfile = fopen("fio.txt", "r");//открыли для чтения
	Info* Person = calloc(CountStr(myfile), sizeof(Info)); //выделение памяти под массив, где размер = колличество строк
	//while (!feof(myfile))
	for (p = 0; p < CountStr(myfile); p++)
	{
		Person[p].F = calloc(20, sizeof(Info));
		Person[p].I = calloc(20, sizeof(Info));
		Person[p].O = calloc(20, sizeof(Info));
		fscanf(myfile, "%s%s%s", Person[p].F, Person[p].I, Person[p].O); //считываем из файла и записываем в структуру
	}
	fclose(myfile); //закрытие  файла
	Info temp;
	for (p = 0; p < CountStr(myfile); p++) //цикл для структуры фио
	{
		for (int i = 0; i < CountStr(myfile); i++) //cравниваем
		{
			if (strlen(Person[p].F) <= strlen(Person[i].F)) //сортировка по возрастанию
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
	FILE* myfile = fopen("fiobin.txt", "wb");//открыли для записи в бинарный файл
	printf("Введите количество персон, которых хотите записать в файл: ");
	scanf("%d", &n);
	Info* Person = calloc(n, sizeof(Info)); //выделение памяти под массив, где размер = колличество строк
	for (int i = 0; i < n; i++)
	{
		Person[i].F = calloc(20, sizeof(Info)); //массив строки
		Person[i].I = calloc(20, sizeof(Info));
		Person[i].O = calloc(20, sizeof(Info));
		printf("Введите ФИО: ");
		scanf("%s%s%s", Person[i].F, Person[i].I, Person[i].O);
		getchar(); //Закрывает сканф
		fwrite(&Person[i].F, sizeof(Info), 20, myfile); //запись в файл
		fwrite(&Person[i].I, sizeof(Info), 20, myfile); //запись в файл
		fwrite(&Person[i].O, sizeof(Info), 20, myfile); //запись в файл
	}
	fclose(myfile); //закрытие  файла
}
//КР
void controlSM1()
{
	char* str = calloc(100 + 1, sizeof(char));
	printf("Введите строку:\n");
	gets(str);
	for (int i = 0; str[i] != '\0'; i++) // i++ до завершающего нуля
	{
		switch (str[i])
		{
		case 'a': printf(""); break;
		case 'б': printf(""); break;
		case 'в': printf(""); break;
		case 'г': printf(""); break;
		case 'д': printf(""); break;
		case 'е': printf(""); break;
		case 'ё': printf(""); break;
		case 'ж': printf(""); break;
		case 'з': printf(""); break;
		case 'и': printf(""); break;
		case 'й': printf(""); break;
		case 'к': printf(""); break;
		case 'л': printf(""); break;
		case 'м': printf(""); break;
		case 'н': printf(""); break;
		case 'о': printf(""); break;
		case 'п': printf(""); break;
		case 'р': printf("р"); break;
		case 'с': printf("с"); break;
		case 'т': printf("т"); break;
		case 'у': printf("у"); break;
		case 'ф': printf("ф"); break;
		case 'х': printf("х"); break;
		case 'ц': printf("ц"); break;
		case 'ч': printf("ч"); break;
		case 'ш': printf("ш"); break;
		case 'щ': printf("щ"); break;
		case 'ъ': printf("ъ"); break;
		case 'ы': printf("ы"); break;
		case 'ь': printf("ь"); break;
		case 'э': printf("э"); break;
		case 'ю':  printf("ю"); break;
		case 'я': printf("я\n"); break;
		}

	}
}
void controlSM2()
{
	char* str = calloc(100 + 1, sizeof(char));
	printf("Введите строку:\n");
	gets(str);
	for (int i = 0; str[i] != '\0'; i++) // i++ до завершающего нуля
	{
		switch (str[i])
		{
		case 'a': printf("A"); break;
		case 'б': printf("Б"); break;
		case 'в': printf("В"); break;
		case 'г': printf("Г"); break;
		case 'д': printf("Д"); break;
		case 'е': printf("Е"); break;
		case 'ё': printf("Ё"); break;
		case 'ж': printf("Ж"); break;
		case 'з': printf("З"); break;
		case 'и': printf("И"); break;
		case 'й': printf("Й"); break;
		case 'к': printf("К"); break;
		case 'л': printf("Л"); break;
		case 'м': printf("М"); break;
		case 'н': printf("Н"); break;
		case 'о': printf("О"); break;
		case 'п': printf("П"); break;
		case 'р': printf("Р"); break;
		case 'с': printf("С"); break;
		case 'т': printf("Т"); break;
		case 'у': printf("У"); break;
		case 'ф': printf("Ф"); break;
		case 'х': printf("Х"); break;
		case 'ц': printf("Ц"); break;
		case 'ч': printf("Ч"); break;
		case 'ш': printf("Ш"); break;
		case 'щ': printf("Щ"); break;
		case 'ъ': printf("Ъ"); break;
		case 'ы': printf("Ы"); break;
		case 'ь': printf("Ь"); break;
		case 'э': printf("Э"); break;
		case 'ю':  printf("Ю"); break;
		case 'я': printf("Я\n"); break;
		default: printf("%c", str[i]); break;
		}
	}
}
void controlSM3()
{
	int count = 0, j = 0;
	char* str = calloc(100 + 1, sizeof(char));
	printf("Введите строку:\n");
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
		count = 0; //счетчик, чтобы не совпадало несколько условий
	}
	printf("\n%s\n", str2);
}
void controlSM4()
{
	int N, count = 0;
	printf_s("Введите размерность массива:\n");
	scanf("%d", &N);
	int* massiv = calloc(N, sizeof(int));
	CreateRandArray(massiv, N);
	for (int i = 0; i < N; i++)
	{
		if (i == 0 && count != 1)
		{
			printf("%d (не является четным или нечетным)\n", massiv[i]);
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
		count = 0; //счетчик, чтобы не совпадало несколько условий
	}
}
void controlSM5()
{
	int N, M, count = 0;
	printf_s("Введите количество строк:\n");
	scanf("%d", &N);
	printf_s("Введите количество столбцов:\n");
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
	printf("\nКоличество четных элементов: %d\n", count);
}
int controlSM()
{
	int n, end;
	do
	{
		printf("\nВыберите нужную тему:");
		printf("\n1. Удаляет из строки все буквы, относящиеся к первой половине алфавита.");
		printf("\n2. Меняет все строчные буквы на прописные(через case)");
		printf("\n3. Разбивает исходную строку на две: в первой содержатся все четные буквы исходной строки, во второй – нечетные");
		printf("\n4. Все элементы массива с четными индексами умножаются на 2, с нечетными на 3");
		printf("\n5. Находит количество четных элементов в двумерном массиве");
		printf("\nВыберите задание (1-5):\n");
		scanf("%d", &n);
		getchar();
		switch (n)
		{
		case 1: controlSM1(); break;
		case 2: controlSM2(); break;
		case 3: controlSM3(); break;
		case 4: controlSM4(); break;
		case 5: controlSM5(); break;
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
//КР1-Салют
struct participant1 //структура участников
{
	char* name; //ввод через гетс, чтобы считал пробелы
	int povtor;
	int min;
	int sec;
	int top;
};
typedef struct participant1 Man;
int SortingMan(Man* Person, int n)
{
	Man temp;
	//Сортировка по убыванию
	for (int i = 0; i < n; i++)  //цикл для структуры (n - количество участников)
	{
		for (int j = i; j < n; j++)
		{
			if (Person[i].povtor < Person[j].povtor)
			{
				temp = Person[i];
				Person[i] = Person[j];
				Person[j] = temp;
			}
			//Если количество повторений одинаковое, то приоритет отдается тому, кто выполнил упражнения за минимальное время.
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
	for (int p = 0, t = 1; p < n; p++, t++) //cравниваем участников прошедших условие отбора и присваиваем места
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
	FILE* myfile = fopen("fio.txt", "r");//открыли для чтения
	Man* Person = calloc(CountStr(myfile), sizeof(Man)); //выделение памяти под массив, где размер = колличество строк while (!feof(myfile))
	//Считываем структуру до конца файла (CountStr)
	for (p = 0; p < CountStr(myfile); p++)
	{
		n1 = 0, n2 = 0, n3 = 0, m1 = 0, m2 = 0, m3 = 0, s1 = 0, s2 = 0, s3 = 0, ms = 0;
		Person[p].name = calloc(100, sizeof(Man));
		fgets(Person[p].name, 100, myfile);// куда, сколько, откуда.
		fscanf(myfile, "%d %d:%d %d %d:%d %d %d:%d\n", &n1, &m1, &s1, &n2, &m2, &s2, &n3, &m3, &s3);
		Person[p].povtor = n1 + n2 + n3; //количество повторений
		ms = (s1 + s2 + s3) / 60; //остаток минут от секунд
		Person[p].sec = (s1 + s2 + s3) % 60; //секунды
		Person[p].min = m1 + m2 + m3 + ms; //минуты
	}
	fclose(myfile);
	SortingMan(Person, (CountStr(myfile) / 2));
	TopMan(Person, (CountStr(myfile) / 2));
	printf("Результаты соревнований были запиисаны в файл fioresult.txt\n");
	FILE* myfile2 = fopen("fioresult.txt", "w");//открыли для записи
	for (k = 0, p = 0; p < (CountStr(myfile2) / 2); p++, k++)  //k - количество переходов на сл строку
	{
		fprintf(myfile2, "%s %d %d:%d %d", Person[p].name, Person[p].povtor, Person[p].min, Person[p].sec, Person[p].top); //запись в файл
		if (k < ((CountStr(myfile2) / 2) - 1))
		{
			fprintf(myfile2, "\n");
		}
	}
	fclose(myfile2);
}
//КР2-Салют
struct participant2 //структура участников девушек
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
	for (int i = 0; i < n; i++)  //n - количество участников
	{
		for (int j = i; j < n; j++)
		{
			if (Person[i].povtor < Person[j].povtor)
			{
				temp = Person[i];
				Person[i] = Person[j];
				Person[j] = temp;
			}
			//Если количество повторений одинаковое, то приоритет отдается той участнице, которая сломала больше ногтей за три попытки
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
	for (int p = 0, t = 1; p < n; p++, t++) //cравниваем участников прошедших условие отбора и присваиваем места
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
	for (int i = 0; i < n; i++)  //n - количество участников
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = 0; k < strlen(Person[i].name) || k < strlen(Person[i].name); k++)
			{
				while (Person[i].name[k] == Person[j].name[k]) //проверяем все слово, когда первые буквы совпадают
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
	FILE* myfile = fopen("fio.txt", "r");//открыли для чтения
	Girl* Person = calloc(CountStr(myfile), sizeof(Girl)); //выделение памяти под массив, где размер = колличество строк while (!feof(myfile))
	Girl* DisPers = calloc(CountStr(myfile), sizeof(Girl)); //дисквалифицированные участники
	Girl* Temp = calloc(CountStr(myfile), sizeof(Girl)); //временная проверка
	for (p = 0; p < CountStr(myfile); p++)
	{
		Temp[p].name = calloc(50, sizeof(Girl));
		n1 = 0, n2 = 0, n3 = 0, l1 = 0, l2 = 0, l3 = 0;
		fgets(Temp[p].name, 100, myfile);
		fscanf(myfile, "%d %d %d %d %d %d\n", &n1, &l1, &n2, &l2, &n3, &l3);
		Temp[p].povtor = n1 + n2 + n3; //количество повторений
		Temp[p].nogti = l1 + l2 + l3; //количество сломанных ногтей
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
	fclose(myfile); //закрытие  файла
	SortingGirl(Person, Pcount);
	TopGirl(Person, Pcount);
	SortingDisGirl(DisPers, DPcount);
	printf("Результаты соревнований были запиисаны в файл fioresult2.txt\n");
	FILE* myfile2 = fopen("fioresult2.txt", "w");//открыли для записи
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
		printf("\nДля начала подсчета назовите файл соревнований \"fio\" и сохраните в папке проекта в кодировке ANSI");
		printf("\n1. Мужская лига ассоциации САЛюТ");
		printf("\n2. Женская лига ассоциации САЛюТ");
		printf("\nВыберите задание (1-2):\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: FScontrol1(); break;
		case 2: FScontrol2(); break;
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
//ОБЩИЙ ВЫВОД
int secret()
{
	int n, end;
	do
	{
		printf("\nВыбирите номер (1-5):\n");
		printf("\nВы нашли пасхалки!");
		printf("\n1. ДР.");
		printf("\n2. Тест на породу.");
		printf("\n3. Массив сердечка.");
		printf("\n4. Какой сегодня день?");
		printf("\n5. Цитаты от Николая Александровича и не только!");
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
		printf("\nВведите 1 - выбрать другую пасхалку, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int task()
{
	int n, end;
	do
	{
		printf("\nВыбирите номер задания (1-3):");
		printf("\n1. Выводит расстояние между двумя точками.");
		printf("\n2. Выводит площадь и объем цилиндра.");
		printf("\n3. Выводит уравнение прямой, проходящий через две точки (k и b).\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:	task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int cycle()
{
	int n, end;
	do
	{
		printf("\nВыбирите номер задания (1-5):");
		printf("\n1. Выводит сумму квадратов четных и кубов нечетных чисел от 1 до N.");
		printf("\n2. Определение среднего роста N человек.");
		printf("\n3. Нахождение всех делителей, кроме 1 и самого числа.");
		printf("\n4. Определение разрядов в числе.");
		printf("\n5. Проверка знаний таблицы умножения.\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: cycle1(); break;
		case 2:	cycle2(); break;
		case 3: cycle3(); break;
		case 4: cycle4(); break;
		case 5: cycle5(); break;
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int conditions()
{
	int n, end;
	do
	{
		printf("\nВыбирите номер задания (1-8):");
		printf("\n1. Выводит четные числа в диапазоне от a до b.");
		printf("\n2. Выводит все точные квадраты натуральных чисел, не превосходящих N");
		printf("\n3. Выводит сумму цифр числа N.");
		printf("\n4. Выводит колличество членов последовательности до числа 0.");
		printf("\n5. Выводит наименьшее из 4 чисел.");
		printf("\n6. Выводит наибольшее из 2 чисел.");
		printf("\n7. Выводит номер наибольшего из 3 чисел или 0.");
		printf("\n8. Проверяет, лежит ли точка внутри эллипса с центром в начале координат и Rx = 5, Ry = 3.\n");
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
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int massiv()
{
	int n, end;
	do
	{
		printf("\nВыбирите номер задания (1-11):");
		printf("\n1. Выводит массив с индексами от а до b, элементы которого равны квадратам своих индексов");
		printf("\n2. Заполняет массив первыми натуральными числами от 1 до N и выводит его.");
		printf("\n3. Находит числа, сумма которых не превышает P.");
		printf("\n4. Находит наименее и наиболее отклоняющиеся от среднего арифметического чисел, найденные числа и их номера с указанием отклонения.");
		printf("\n5. Находит сумму и колличество чисел расположенных между соседними нулями.");
		printf("\n6. Определить сколько раз встречается введенное пользователем число в массиве.");
		printf("\n7. Найти минимальный элемент в массиве и поменять его местами с 1 элементом.");
		printf("\n8. Отсортировать массив по убыванию.");
		printf("\n9. Заполнить массив [-50;50]. Для каждого элемента массива вывести четный/нечетный и положительный/отрицательный");
		printf("\n10. Заполнить массив [10;99]. Составить массив, элементами которого будут значения, являющиеся суммой цифр элементов исходного массива.");
		printf("\n11. Заменить нулями те элементы первого массива, которые есть во втором.\n");
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
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int string()
{
	int n, end;
	do
	{
		printf("\nВведите номер задания (1-6):");
		printf("\n1. Подсчитать количество слов в строке.");
		printf("\n2. Определить количество символов в самом длинном слове.");
		printf("\n3. Определить, является ли строка палиндромом.");
		printf("\n4. Определить количество различных символов в строке и составить вторую уникальную строку.");
		printf("\n5. Удалить лишние пробелы.");
		printf("\n6. Вывести цепочку, удалив лишние В между R, оставив сначала только В, а потом только R.\n");
		scanf("%d", &n);
		getchar();
		printf("Введите строку:\n");
		switch (n)
		{
		case 1: zadStr1(); break;
		case 2: zadStr2(); break;
		case 3: zadStr3(); break;
		case 4: zadStr4(); break;
		case 5: zadStr5(); break;
		case 6: zadStr6(); break;
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int massiv2()
{
	int n, end;
	do
	{
		printf("\nВыбирите номер задания (1-7):");
		printf("\n1. Выводит рандомный двумерный массив и максимальный элемент.");
		printf("\n2. Выводит номер строки с наибольшей суммой элементов в ней.");
		printf("\n3. Выводит максимальный элемент и индексы его строки, столбца.");
		printf("\n4. Выводит колличесво победителей с наибольшим результатом.");
		printf("\n5. Выводит треугольную матрицу.");
		printf("\n6. Выводит массив, где числа строки/столбца 0 = 1, а другие сумме двух элементов сверху и слева от него.");
		printf("\n7. Выводит спираль против часовой стрелки.\n");
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
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int switchi()
{
	int n, end;
	do
	{
		printf("\nВыбирите номер задания (1-3):");
		printf("\n1. Выводит название времени года на английском по номеру месяца.");
		printf("\n2. Выводит колличество дней в месяце.");
		printf("\n3. Выводит символ и цвет года.\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: zadswitch1(); break;
		case 2: zadswitch2(); break;
		case 3: zadswitch3(); break;
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int struc()
{
	int end;
	do
	{
		struct1();
		printf("\nВведите 1 - продолжить, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int file()
{
	int n, end;
	do
	{
		printf("\nВыбирите номер задания (1-4):");
		printf("\n1. Напечатать в текстовый файл текст и прочитать его из текстового файла");
		printf("\n2. Решение квадратного уравнения. a, b и с (через пробел) считываются из текстового файла, ответ записывается в другой текстовый файл.");
		printf("\n3.Запись массива в текстовый файл.");
		printf("\n4.Чтение массива из данного файла.\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: file1(); break;
		case 2: file2(); break;
		case 3: file3(); break;
		case 4: file4(); break;
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int FileStruc()
{
	int n, end;
	printf("\nДля начала работы создайте в папке с проектом тестовый файл \"fio\" и заполните ФИО\n");
	do
	{
		printf("\nВыбирите номер задания (1-4):");
		printf("\n1. В текстовом файле хранятся несколько строк с ФИО пользователей, определить количество строк(feof).");
		printf("\n2. Реализовать функцию добавления в текстовый файл текстовых строк с ФИО(цикл). Условие выхода из цикла - 0");
		printf("\n3. Создать массив структур, содержащий ФИО. Отсортировать по возрастанию длины фамилии. Данные в массив предварительно считать из текстового файла.");
		printf("\n4. Массив структур записать в бинарный файл.\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: fileStruct1(); break;
		case 2: fileStruct2(); break;
		case 3: fileStruct3(); break;
		case 4: fileStruct4(); break;
		default: printf("Такого задания нет\n"); break;
		}
		printf("\nВведите 1 - выбрать другое задание, 0 - выйти в меню.\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
int control()
{
	int n, end;
	do
	{
		printf("\nВыберите нужную работу:");
		printf("\n1. Контрольная работа строки&массивы");
		printf("\n2. Контрольные работы по файлам&структурам\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1: controlSM(); break;
		case 2: controlFS(); break;
		default: printf("Такой КР нет\n"); break;
		}
		printf("\nВы хотите проверить другую контрольную? (1 - да, 0 - нет).\n");
		scanf_s("%d", &end);
	} while (end > 0);
}
//Главная функция вывода
int main(void)
{
	//setlocale(LC_ALL, ".1251");
	system("chcp 1251>nul"); //для работы с русским языком
	/*char a = 'а';
	char с = 'б';
	char b = 'и';
	printf("%d %d и %d", a, с, b);*/
	//srand(clock()); //Чтобы числа в рандоме не повторялись
	int n, end;
	do
	{
		printf("\nВыберите нужную тему:");
		printf("\n1. Задачи");
		printf("\n2. Циклы");
		printf("\n3. Условия");
		printf("\n4. Массивы");
		printf("\n5. Строки");
		printf("\n6. Двумерные массивы");
		printf("\n7. Свичи");
		printf("\n8. Структуры");
		printf("\n9. Файлы");
		printf("\n10. Файлы и структуры");
		printf("\n11. Контрольные работы");
		printf("\n777 - пасхалки\n");
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
		default: printf("Такой темы нет\n"); break;
		}
		printf("\nВы хотите выбрать другую тему? (1 - да, 0 - нет).\n");
		scanf_s("%d", &end);
	} while (end > 0);
	return 0;
}
