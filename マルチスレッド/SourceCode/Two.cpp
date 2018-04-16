#include "Two.h"

using namespace std;
clsTwo::clsTwo()
{
	m_bFinish = false;
	m_iCnt = 0;
}

clsTwo::~clsTwo()
{
}
bool clsTwo::GetFinsh()
{
	return m_bFinish;
}

void clsTwo::Cnt2(int Num)
{
	if (m_iCnt>Num)
	{
		m_bFinish = true;
	}
	m_iCnt++;
}

void clsTwo::Thread2(int Num)
{
	thread th2(&clsTwo::Cnt2,Num/*[] {}*/);
	if (th2.joinable())
	{
		th2.join();
	}
}
