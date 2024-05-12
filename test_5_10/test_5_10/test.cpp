#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	Time sum(const Time& t1) const;
	Time operator+(const Time& t1);
	void show_time() const;
	friend void operator <<(ostream &os,Time t1) {
		os << t1.hour << ":" << t1.minute << endl;
	}
	/*friend ostream& operator <<(ostream& os, Time t1) {
		os << t1.hour << ":" << t1.minute << endl;
		return os;
	}*/
	//���������ص������ǣ������cout << "Time t4 is " << t4 << "over"��ʱ��
	// �����t4��ʱ�򣬷������ͱ����void�����������"over"
};
int main() {
	Time t1, t2;
	t1 = Time(12, 35);
	t2 = Time(1, 46);
	Time t3 = t1.sum(t2);
	Time t4 = t1 + t2;
	t3.show_time();
	/*cout << "Time t4 is " << t4 << "over";*/  //��һ�ֻᱨ��

	return 0;
}
Time::Time() {
	hour = minute = 0;
}
Time::Time(int h, int m) {
	hour = h;
	minute = m;
}
void Time::AddMin(int m) {
	minute += m;
	hour += minute % 60;
	minute %= 60;
}
void Time::AddHr(int h) {
	hour += h;
}
Time Time::sum(const Time& t1) const{
	Time sum;
	sum.minute = minute + t1.minute;
	sum.hour = hour +t1.hour+ t1.minute / 60;
	sum.minute %= 60;
	return sum;
}
void Time::show_time()const {
	cout << hour << ":" << minute << endl;
}
Time Time::operator+(const Time& t1){
	Time sum;
	sum.minute = minute + t1.minute;
	sum.hour = hour +t1.hour+ t1.minute / 60;
	sum.minute %= 60;
	return sum;
}
