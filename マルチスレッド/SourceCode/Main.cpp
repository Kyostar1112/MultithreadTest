#include"Main.h"

using namespace std;

clsMain::clsMain()
{
}

clsMain::~clsMain()
{
}

int main(int argc, char **argv)
{
	m_smpMain = make_unique<clsMain>();
	thread th1(m_smpMain->Work1);
	th1.join();

	getchar();
	return 0;
}

void clsMain::Work1()
{
	int Num = 0;
	bool Enable = false;
	char  ch;

	while (Enable) {
		cout << "Work1" << Num << endl;
		Num++;
		if (cin.get(ch))
		{
			Enable = true;
		}
	}
}


void clsMain::cMain()
{
	m_smpMain->cMain();
}