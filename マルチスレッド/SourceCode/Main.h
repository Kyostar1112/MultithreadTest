#pragma once
#include<iostream>
#include<memory>
#include <thread>
#include <vector>
#include <Windows.h>

class clsMain
{
public:
	clsMain();
	~clsMain();

	void cMain();
	virtual void Work1();

private:

};

std::unique_ptr<clsMain> m_smpMain;