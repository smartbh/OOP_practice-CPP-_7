#include <iostream>
#include <string>
using namespace std;

class Air_seat{
	string seat[8];
public:
	Air_seat() { ; } //기본 생성자
	~Air_seat() { ; } //기본 소멸자
	
	void init();		//좌석 초기화 함수
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

	cout << "***** 한성항공에 오신것을 환영합니다. *****" << endl;
	cout << endl;

	while (button != 4) {
		cout << "예약:1, 취소:2, 보기:3, 끝내기:4>>";
		cin >> button;

		if (button == 1)		//예약
		{
			cout << "07시:1, 12시:2, 17시:3>> ";
			cin >> time;

			if (time == 1)		//07시
			{
				cout << "07시:\t";
				seven.show();

				cout << "좌석 번호>>";
				cin >> seat_num;
				
				cout << "이름 입력>>";
				cin >> name;

				seven.set_seat_num_and_name(seat_num, name);
				cout << endl;
				
			}

			else if (time == 2)		//12시
			{
				cout << "12시:\t";
				high_noon.show();

				cout << "좌석 번호>>";
				cin >> seat_num;

				cout << "이름 입력>>";
				cin >> name;

				high_noon.set_seat_num_and_name(seat_num, name);
				cout << endl;
			}

			else if (time == 3)		//17시
			{
				cout << "07시:\t";
				five.show();

				cout << "좌석 번호>>";
				cin >> seat_num;

				cout << "이름 입력>>";
				cin >> name;

				five.set_seat_num_and_name(seat_num, name);
				cout << endl;
			}

			else
				cout << "시간은 1~3번 만 입력해주세요" << endl;
		}

		else if (button == 2)	//취소
		{
			cout << "07시:1, 12시:2, 17시:3>> ";
			cin >> time;

			if (time == 1)		//07시
			{
				cout << "07시:\t";
				seven.show();

				cout << "좌석 번호>>";
				cin >> seat_num;

				cout << "이름 입력>>";
				cin >> name;

				seven.cancel(seat_num, name);
				cout << endl;

			}

			else if (time == 2)		//12시
			{
				cout << "12시:\t";
				high_noon.show();

				cout << "좌석 번호>>";
				cin >> seat_num;

				cout << "이름 입력>>";
				cin >> name;

				high_noon.cancel(seat_num, name);
				cout << endl;
			}

			else if (time == 3)		//17시
			{
				cout << "07시:\t";
				five.show();

				cout << "좌석 번호>>";
				cin >> seat_num;

				cout << "이름 입력>>";
				cin >> name;

				five.cancel(seat_num, name);
				cout << endl;
			}
		}

		else if (button == 3) //출력
		{
			seven.show();
			high_noon.show();
			five.show();
			cout << endl;
		}

		else if (button == 4)
		{
			cout << "예약 시스템을 종료합니다." << endl;
		}

		//switch (button == 1)	//switch 문 연습
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