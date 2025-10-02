#include <iostream>
using namespace std;

class Elevator
{
	int topFloor;
	int groundFloor;
	bool OnOff;
	bool works;
	int position;

public: 
	Elevator(int ground, int top);
	void onOff();
	void SetPosition(int position);
	int GetPosition();
	void Call();

};

Elevator::Elevator(int ground, int top)
{
	groundFloor = ground;
	topFloor = top;
	OnOff = false;
	works = false;
	position = 0;
}

void Elevator::onOff()
{
	OnOff = !OnOff;
}

void Elevator::SetPosition(int position)
{
	this->position = position;
}

int Elevator::GetPosition()
{
	return position;
}

void Elevator::Call()
{
	cout << "Enter number of floor before" << groundFloor << " after" << topFloor << endl;
	cin >> position;
	if (position > groundFloor && position < topFloor)
	{
		cout << "Your floor = " << position << endl;
	}
	else
	{
		cout << "Change your number";
	}
}
	

int main()
{
	Elevator el(1, 16);
	el.onOff();
	el.Call();
}


