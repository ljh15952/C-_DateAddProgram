#include <iostream>

using namespace std;


class Date
{
private:
	int year;
	int month;
	int day;
public:
	void SetDate(int _year, int _month, int _day) //맨 처음
	{
		year = _year;
		month = _month;
		day = _day;
	}
	void AddYear(int addYear)
	{
		year += addYear;
	}
	void AddMonth(int addMonth)
	{
		while (addMonth > 0)
		{
			month++;
			addMonth--;
			if (month > 12)
			{
				month = 1;
				AddYear(1);
			}
		}
	}
	void AddDay(int addday)
	{
		while (addday > 0)
		{
			day++;
			addday--;
			switch (month)
			{
			case 1:
				if (day >31)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 2:
				if (day >28)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 3:
				if (day >31)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 4:
				if (day >30)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 5:
				if (day >31)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 6:
				if (day >30)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 7:
				if (day >31)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 8:
				if (day >31)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 9:
				if (day >30)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 10:
				if (day >31)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 11:
				if (day >30)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			case 12:
				if (day >31)
				{
					day = 1;
					AddMonth(1);
				}
				break;
			}
		}
	}
	void GetDate()
	{
		cout << year << "년 " << month << "달 " << day << "일";
	}
};

int main()
{
	int a;
	int y, m, d;
	int addnum;
	Date D;
	while (true)
	{
		cin >> a;
		switch (a)
		{
		case 1:
			cin >> y >> m >> d;
			D.SetDate(y, m, d);
			break;
		case 2:
			D.GetDate();
			break;
		case 3:
			cin >> addnum;
			D.AddYear(addnum);
			break;
		case 4:
			cin >> addnum;
			D.AddMonth(addnum);
			break;
		case 5:
			cin >> addnum;
			D.AddDay(addnum);
			break;
		default:
			return 0;
			break;
		}
	}
}