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

void clsTwo::thread2(int Num)
{
	thread th2(&clsTwo::Cnt,Num);
	if (th2.joinable())
	{
		th2.join();
	}
}

void clsTwo::Cnt(int Num)
{
	if (m_iCnt>Num)
	{
		m_bFinish = true;
	}
	m_iCnt++;
}