int[] a;
int[] array_test;
int f() {
	int a = 1.1; // 1、错误的常量类型
	float b;
	1 = 2; // 2、需要左值
	a = b; // 3、类型不匹配
	d = 1; // 4、未定义的变量
	array_test[-1] = 1; // 4、索引不能为负
	array_test[-b]; // 5、索引类型不为int 
	if (continue) { // 6、缺少bool表达式
		continue; // 19、continue位置错误
		break; // 7、break位置错误
	}
	a = -'a'; // 20、char类型不能进行取负号操作
	a = !b; // 21、 float不能进行取反操作
	
	g(); // 8、未定义的函数
	f(1,2,3); // 9、参数列表不匹配
	// 10、没有返回值
}

int a; // 11、变量重复定义

int fx(int a, float a) { // 12、参数名重复定义
	float f;
	int c = 100000000000000000000000000000000; // 13、常量越界
	a(); // 14、不是一个函数

	f = 1.0 / 0; // 15、除0错误
	
	c = f + 'c'; // 16、不能计算的表达式
	return 3.; // 17、返回类型错误
}

// 18、没有main函数

