#include <iostream>
#include <string>
using namespace std;

class Air_seat{
	string seat[8];
public:
	Air_seat() { ; } //�⺻ ������
	~Air_seat() { ; } //�⺻ �Ҹ���
	
	void init();		//�¼� �ʱ�ȭ �Լ�
	void show();

	void set_seat_num_and_name(int num, string name);
	void cancel(int num, string name);

};

void Air_seat::init() {
	for (int i = 0; i < 8; i++)
	{
		this->seat[i] = "---" ;
	}
}

void Air_seat::show()
{
	for (int i = 0; i < 8; i++)
	{
		cout << this->seat[i]<<'\t';
		
	}

	cout << endl;
}

void Air_seat::set_seat_num_and_name(int num, string name) {
	this->seat[num - 1] = name;
}

void Air_seat::cancel(int num, string name)
{
	if(this->seat[num - 1] == name)
		this->seat[num - 1] = "---";
}

int main()
{
	int button = 0, time, seat_num;
	string name;
	
	Air_seat seven;
	Air_seat high_noon;
	Air_seat five;

	seven.init();
	high_noon.init();
	five.init();

	cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ�. *****" << endl;
	cout << endl;

	while (button != 4) {
		cout << "����:1, ���:2, ����:3, ������:4>>";
		cin >> button;

		if (button == 1)		//����
		{
			cout << "07��:1, 12��:2, 17��:3>> ";
			cin >> time;

			if (time == 1)		//07��
			{
				cout << "07��:\t";
				seven.show();

				cout << "�¼� ��ȣ>>";
				cin >> seat_num;
				
				cout << "�̸� �Է�>>";
				cin >> name;

				seven.set_seat_num_and_name(seat_num, name);
				cout << endl;
				
			}

			else if (time == 2)		//12��
			{
				cout << "12��:\t";
				high_noon.show();

				cout << "�¼� ��ȣ>>";
				cin >> seat_num;

				cout << "�̸� �Է�>>";
				cin >> name;

				high_noon.set_seat_num_and_name(seat_num, name);
				cout << endl;
			}

			else if (time == 3)		//17��
			{
				cout << "07��:\t";
				five.show();

				cout << "�¼� ��ȣ>>";
				cin >> seat_num;

				cout << "�̸� �Է�>>";
				cin >> name;

				five.set_seat_num_and_name(seat_num, name);
				cout << endl;
			}

			else
				cout << "�ð��� 1~3�� �� �Է����ּ���" << endl;
		}

		else if (button == 2)	//���
		{
			cout << "07��:1, 12��:2, 17��:3>> ";
			cin >> time;

			if (time == 1)		//07��
			{
				cout << "07��:\t";
				seven.show();

				cout << "�¼� ��ȣ>>";
				cin >> seat_num;

				cout << "�̸� �Է�>>";
				cin >> name;

				seven.cancel(seat_num, name);
				cout << endl;

			}

			else if (time == 2)		//12��
			{
				cout << "12��:\t";
				high_noon.show();

				cout << "�¼� ��ȣ>>";
				cin >> seat_num;

				cout << "�̸� �Է�>>";
				cin >> name;

				high_noon.cancel(seat_num, name);
				cout << endl;
			}

			else if (time == 3)		//17��
			{
				cout << "07��:\t";
				five.show();

				cout << "�¼� ��ȣ>>";
				cin >> seat_num;

				cout << "�̸� �Է�>>";
				cin >> name;

				five.cancel(seat_num, name);
				cout << endl;
			}
		}

		else if (button == 3) //���
		{
			seven.show();
			high_noon.show();
			five.show();
			cout << endl;
		}

		else if (button == 4)
		{
			cout << "���� �ý����� �����մϴ�." << endl;
		}

		//switch (button == 1)	//switch �� ����
		//{
		//case 1:; break;
		//case 2:; break;
		//case 3:; break;
		//
		//default:
		//	break;
		//}
	}
	

}