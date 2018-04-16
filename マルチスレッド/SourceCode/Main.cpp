#include"Main.h"

using namespace std;

int g_iNum = 0;

clsMain::clsMain()
{
	m_smpOne = make_unique<clsOne>();
	m_smpTwo = make_unique<clsTwo>();
	m_iCnt = 0;
}

clsMain::~clsMain()
{
}

const int SleepTime = 2000;

int main(int argc, char **argv)
{
	m_smpMain = make_unique<clsMain>();

	m_smpMain->cMain();

	return 0;
}

void clsMain::cMain()
{
	while (1)
	{
		m_iCnt++;
		m_smpOne->Thread1(200);
		m_smpTwo->Thread2(1000);
		DispNum(m_iCnt);
	}

}
void clsMain::DispNum(int Num)
{
	if (m_smpOne->GetFinsh())
	{
		cout << "�X���b�h1�I��" << endl;
	}
	if (m_smpTwo->GetFinsh())
	{
		cout << "�X���b�h2�I��" << endl;
	}
	cout << Num << endl << endl;
}
