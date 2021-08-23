#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;	//src�� �ٸ� ������ ��ȯ�Ѵ�/
	virtual string getSourceString() = 0;	//src ���� ��Ī
	virtual string getDeststring() = 0;		//dest ���� ��Ī �´� ���� ���� �Լ�

public:
	Converter(double ratio) { this->ratio = ratio; }		//������
	void run() {
		double src;
		cout << getSourceString() << "��" << getDeststring() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDeststring() << endl;
	}
};

class KmToMile : public Converter {
public:
	KmToMile(double km) : Converter(km) {; }
	double convert(double src);
	string getSourceString();
	string getDeststring();
};

double KmToMile::convert(double src) {		//km->mile��ȯ �Լ�
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
