#include<iostream>
using namespace std;

//设计一个圆形类和点类
//计算圆形和点的关系

//点的结构体
struct point {
	int x;
	int y;
};

//圆的类
class Circle {
private:
	struct point c_center;
	int c_radius;

public:
	void setCenter(int x, int y) {
		c_center.x = x;
		c_center.y = y;
	}
	struct point getCenter() {
		return c_center;
	}

	void setRadius(int radius) {
		c_radius = radius;
	}
	int getRadius() {
		return c_radius;
	}
};


//点的类
class Point {
private:
	struct point pos;
public:
	void setPoint(int x,int y) {
		pos.x = x;
		pos.y = y;
	}
	struct point getPoint() {
		return pos;
	}
};

//计算点到圆心的距离
double distance;
double caculateDis(Point pos,Circle center) {
	double distance;
	return distance = (pos.getPoint().x - center.getCenter().x) * (pos.getPoint().x - center.getCenter().x) + (pos.getPoint().y - center.getCenter().y) * (pos.getPoint().y - center.getCenter().y);
}
int main() {

	Circle c1;
	c1.setCenter(0, 0);
	c1.setRadius(1);

	Point p1;
	p1.setPoint(0,1);
	
	//计算点到圆心的距离distance
	double distance = caculateDis(p1,c1);

	//判断点和圆的关系
	//1、如果distance（点到圆心的距离）大于半径，则点在圆外
	//2、如果点到圆心的距离小于半径，则点到圆内
	//3、如果点到圆心的距离等于半径，则点在圆上


	//求出半径的平方
	double radius2 = (c1.getRadius() * c1.getRadius());
	if (distance <= radius2)
	{
		if (distance<radius2)
		{
			cout << "点在圆内" << endl;
		}
		else
		{
			cout << "点在圆上" << endl;
		}
	}
	else 
	{
		cout << "点在圆外" << endl;
	}

	

	system("pause");
	return 0;
}