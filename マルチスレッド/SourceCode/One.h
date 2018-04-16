#pragma once
#include <thread>

class clsOne
{
public:
	clsOne();
	~clsOne();

	bool GetFinsh();

	void Thread1(int Num);

	void Cnt1(int Num);

private:

	int  m_iCnt;

	bool m_bFinish;

};