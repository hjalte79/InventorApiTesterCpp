// SimpleExe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ThisRule.h"

// Forward declarations
static CComPtr<Application> GetInventor();

// Main. Note that all COM related activity (including the automatic 'release' within smart
// pointers) MUST take place BEFORE CoUnitialize(). Hence the function 'block' within which
// the smart-pointers construct and destruct (and AddRef and Release) keeping the CoUnitialize
// safely out of the way.



int _tmain(int argc, _TCHAR* argv[])
{
	HRESULT Result = NOERROR;
  
	Result = CoInitialize (NULL);

	ThisRule rule;
	rule.ThisApplication = GetInventor();
	rule.Main();

	cout << "\r\n\r\n------------------------------------------------------------------------------------";

	CoUninitialize(); 

	return 0;
}

static CComPtr<Application> GetInventor() {
	HRESULT Result = NOERROR;

	CLSID InvAppClsid;
	Result = CLSIDFromProgID(L"Inventor.Application", &InvAppClsid);

	CComPtr<IUnknown> pInvAppUnk;
	Result = ::GetActiveObject(InvAppClsid, NULL, &pInvAppUnk);

	CComPtr<Application> pInvApp;
	Result = pInvAppUnk->QueryInterface(__uuidof(Application), (void**)&pInvApp);
	return pInvApp;
}
