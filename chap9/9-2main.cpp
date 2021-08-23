#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;	//src를 다른 단위로 변환한다/
	virtual string getSourceString() = 0;	//src 단위 명칭
	virtual string getDeststring() = 0;		//dest 단위 명칭 셋다 전부 가상 함수

public:
	Converter(double ratio) { this->ratio = ratio; }		//생성자
	void run() {
		double src;
		cout << getSourceString() << "을" << getDeststring() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDeststring() << endl;
	}
};

class KmToMile : public Converter {
public:
	KmToMile(double km) : Converter(km) {; }
	double convert(double src);
	string getSourceString();
	string getDeststring();
};

double KmToMile::convert(double src) {		//km->mile변환 함수
	double mile = src / 1.609344;
	return mile;

}

string KmToMile::getSourceString() {
	/*cout<< "Km";*/
	return "Km";
}

string KmToMile::getDeststring() {
	/*cout<< "Mile";*/
	return "Mile";
}



int main()
{
	KmToMile toMile(1.609344);
	toMile.run();
}
