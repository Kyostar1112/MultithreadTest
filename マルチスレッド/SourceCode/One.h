#pragma once
#include <thread>

class clsOne
{
public:
	clsOne();
	~clsOne();

	void thread1(int Num);

	bool GetFinsh();
	bool m_bFinish;
private:

	void Cnt(int Num);
	int m_iCnt;

};