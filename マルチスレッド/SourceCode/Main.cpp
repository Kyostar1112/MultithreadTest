#include"Main.h"

using namespace std;

int g_iNum = 0;

clsMain::clsMain()
{
	Cnt = 0;
}

clsMain::~clsMain()
{
}

int main(int argc, char **argv)
{
	m_smpMain = make_unique<clsMain>();

	m_smpMain->cMain();

	return 0;
}

void clsMain::Work1()
{
	//cout << "Work1 " << g_iNum << endl;
	g_iNum++;
}

void clsMain::Work2()
{
	//cout << "Work2 " << g_iNum << endl;
	g_iNum++;
}

void clsMain::Work3()
{
	//cout << "Work3 " << g_iNum << endl;
	g_iNum++;
}

void clsMain::Work4()
{
	//cout << "Work4 " << g_iNum << endl;
	g_iNum++;
}

void clsMain::cMain()
{
	while (1)
	{
		Cnt++;
		if (Cnt % 60 == 0)
		{
			//getchar();
			thread th1(&m_smpMain->Work1);

			//getchar();
			thread th2(&m_smpMain->Work2);

			//getchar();
			thread th3(&m_smpMain->Work3);

			//getchar();
			thread th4(&m_smpMain->Work4);

			th1.join();
			th2.join();
			th3.join();
			th4.join();
		}
		if (Cnt % 20 == 0)
		{
			cout << g_iNum << endl;
		}
	}
	getchar();
}