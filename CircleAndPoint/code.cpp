#include<iostream>
using namespace std;

//���һ��Բ����͵���
//����Բ�κ͵�Ĺ�ϵ

//��Ľṹ��
struct point {
	int x;
	int y;
};

//Բ����
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


//�����
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

//����㵽Բ�ĵľ���
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
	
	//����㵽Բ�ĵľ���distance
	double distance = caculateDis(p1,c1);

	//�жϵ��Բ�Ĺ�ϵ
	//1�����distance���㵽Բ�ĵľ��룩���ڰ뾶�������Բ��
	//2������㵽Բ�ĵľ���С�ڰ뾶����㵽Բ��
	//3������㵽Բ�ĵľ�����ڰ뾶�������Բ��


	//����뾶��ƽ��
	double radius2 = (c1.getRadius() * c1.getRadius());
	if (distance <= radius2)
	{
		if (distance<radius2)
		{
			cout << "����Բ��" << endl;
		}
		else
		{
			cout << "����Բ��" << endl;
		}
	}
	else 
	{
		cout << "����Բ��" << endl;
	}

	

	system("pause");
	return 0;
}