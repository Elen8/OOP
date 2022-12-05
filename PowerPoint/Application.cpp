#include "Application.h"


CApplication* CApplication::PApp = 0;

CApplication* CApplication::Instance()
{
	if (PApp == 0)
	{
		PApp = new CApplication;
	}
	return PApp;
}
