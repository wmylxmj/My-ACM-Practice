/*
例题1_1 圆柱体的表面积
题目要求：
输入底面半径r和高h，输出圆柱体的表面积，保留3位小数，格式见样例。
样例输入：
3.5 9
样例输出：
Area = 274.889
*/

#include<stdio.h>
#include<math.h>

int main()
{
	//尽量用const关键字声明常数
	const double pi = acos(-1.0);
	double r, h, s1, s2, s;
	scanf("%lf%lf", &r,&h);
	s1 = pi*r*r;
	s2 = 2*pi*r*h;
	s = s1*2.0 + s2;
	printf("Area = %.3f\n", s);
	return 0;
}
