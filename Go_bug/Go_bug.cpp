#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef struct Point {
	int x;
	int y;
}POINT;

int main() {
	int count = 0;
	srand(time(NULL));
	vector <POINT> v;
	
	POINT pt;
	pt.x = 0;
	pt.y = 0;
	v.push_back(pt);
	
	while (1) {

		pt.x += rand() % 5 - 2;
		pt.y += rand() % 5 - 2;

		if (pt.x < 0) pt.x = 0;
		else if (pt.x > 18) pt.x = 18;
		if (pt.y < 0) pt.y = 0;
		else if (pt.y > 18) pt.y = 18;
		count++;
		v.push_back(pt);
		if (pt.x == 18 && pt.y == 18)
		break;
	}

	for (int i = 0; i <= count;i++)
	{
		printf("count : %d, x : %d, y : %d\n", i, v[i].x, v[i].y);
	}
	return 0;
}