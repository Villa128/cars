// CARS.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CARS
{
public:
	string manufacturer;
	string model;
	int year;
	float engine_volume;
	int pr$ce;
	int id;
	CARS(string Mnf,string MD, int Yr,float Vol,int P$,int ids)
	{
		manufacturer = Mnf;
		model = MD;
		year = Yr;
		engine_volume = Vol;
		pr$ce = P$;
		id = ids;
	};
	//~CARS();

private:

};


int main()
{
   
	vector <CARS> List;
	CARS Example("Shevroleet", "MosguitoC++", 2011, 6.4, 38000,0);
	List.push_back(Example);
	//for (int i = 0; i < 1; i++)
	
		//cout << List[0].manufacturer;
	
	cout << "Hello!" << endl;
	cout << "What you want to do?" << endl;
	cout << "1 - add car, 2 - show all cars, 3 - sort by price, 4 - sort by year, 5 - search by year, 6 search by price" << endl;
	cout << "print for 7 delete by id" << endl;
	cout << "print zero to close programm" << endl;
	string manufacturerin;
	string modelin;
	int yearin;
	float engine_volumein;
	int pr$cein;
	int idin;

	while (true)
	{
		int ct;
		cin >> ct;
		switch (ct)
		{

		case 1:
		{
			cout << "print a manufacturer" << endl;
			cin >> manufacturerin;
			cout << "print a model" << endl;
			cin >> modelin;
			cout << "print year of issue" << endl;
			cin >> yearin;
			cout << "print a engine volume" << endl;
			cin >> engine_volumein;
			cout << "print a price" << endl;
			cin >> pr$cein;
			cout << "print a id" << endl;
			cin >> idin;
			CARS objin(manufacturerin, modelin, yearin, engine_volumein, pr$cein,idin);
			List.push_back(objin);
			break;
		}

		case 2:
		{


			int siz1;
			siz1 = List.size();
			cout << "total count - " << siz1 << endl;
			for (int i = 0; i < siz1; i++)
			{
				cout << List[i].manufacturer << " " << List[i].model << " " << List[i].year << " " << List[i].engine_volume << " " << List[i].pr$ce << " " << List[i].id << endl;
			}
			break;
		}
		case 3:
		{
			int siz2;
			CARS temp(Example);
			siz2 = List.size();
			int i2;
			for (i2 = 0; i2 < siz2 - 1; i2++) {
				for (int j1 = 0; j1 < siz2 - i2 - 1; j1++) {
					if (List[j1].pr$ce > List[j1 + 1].pr$ce) {
						// меняем элементы местами
						temp = List[j1];
						List[j1] = List[j1 + 1];
						List[j1 + 1] = temp;
					}
				}
			}
			break;
			//for (int i = 0; i < siz2; i++)
			//{
				//cout << List[i].manufacturer << " " << List[i].model << " " << List[i].year << " " << List[i].engine_volume << " " << List[i].pr$ce << endl;
			//}
		}

		case 4:
		{
			int siz3;
			CARS temp(Example);
			siz3 = List.size();
			int i3;
			for (i3 = 0; i3 < siz3 - 1; i3++) {
				for (int j2 = 0; j2 < siz3 - i3 - 1; j2++) {
					if (List[j2].year > List[j2 + 1].year) {
						// меняем элементы местами
						temp = List[j2];
						List[j2] = List[j2 + 1];
						List[j2 + 1] = temp;
					}
				}
			}

			//for (int i = 0; i < siz3; i++)
			//{
				//cout << List[i].manufacturer << " " << List[i].model << " " << List[i].year << " " << List[i].engine_volume << " " << List[i].pr$ce << endl;
			//}
			break;
		}
		case 5:
			int siz4;
			int srch1;
			siz4 = List.size();
			cout << "print year" << endl;
			cin >> srch1;
			for (int i = 0; i < siz4; i++)
			{
				if (List[i].year == srch1)
				{
					cout << List[i].manufacturer << " " << List[i].model << " " << List[i].year << " " << List[i].engine_volume << " " << List[i].pr$ce << " " << List[i].id << endl;
				}
				
				
			}
			break;
		case 6:
			int siz5;
			int srch2max;
			int srch2min;
			siz5 = List.size();
			cout << "print max $" << endl;
			cin >> srch2max;
			cout << "print min $" << endl;
			cin >> srch2min;
			for (int i = 0; i < siz5; i++)
			{
				if (List[i].pr$ce < srch2max && List[i].pr$ce > srch2min)
				{
					cout << List[i].manufacturer << " " << List[i].model << " " << List[i].year << " " << List[i].engine_volume << " " << List[i].pr$ce << " " << List[i].id << endl;
				}
			}
			break;
		case 7:
			int siz6;
			int srchid;
			cout << "print id" << endl;
			cin >> srchid;
			siz6 = List.size();
			
			cin >> srch1;
			for (int i = 0; i < siz6; i++)
			{
				if (List[i].id == srchid)
				{
					List.erase(List.begin() + i);
				}
			}
			break;
		case 0:
			return 0;
		default:
			break;
			return 0;
		}
	}
		
}
