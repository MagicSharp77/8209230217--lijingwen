#include<iostream>
class Point
{
private:
	int x, y;
public:
	Point(int xa = 0,int ya = 0)
	{
		x = xa;
		y = ya;
	}
	void setPoint()
	{
		int x1,y1;
		std::cin >> x1 >> y1;
		x = x + x1;
		y = y + y1;
	}
	void display()
	{
		std::cout << "(" << x << "," << y << ")";
	}
};
int main()
{
	Point p(60, 80);
	p.setPoint();
	p.display();

	return 0;
}
