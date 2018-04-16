#pragma once
#include <thread>
#include <memory>

class clsTwo
{
public:
	clsTwo();
	~clsTwo();

	void Cnt2(int Num);

	bool GetFinsh();

	int m_iCnt;

	bool m_bFinish;

private:

};
class clsTwoOut
{
public:
	clsTwoOut();
	~clsTwoOut();

	void OutThred();

	std::unique_ptr<clsTwo> m_smpTwoOut;

private:

};