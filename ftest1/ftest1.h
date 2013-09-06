// ftest1.h : main header file for the FTEST1 application
//

#if !defined(AFX_FTEST1_H__2A20FE1B_72DF_4909_BA90_370722EDAADD__INCLUDED_)
#define AFX_FTEST1_H__2A20FE1B_72DF_4909_BA90_370722EDAADD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CFtest1App:
// See ftest1.cpp for the implementation of this class
//

class CFtest1App : public CWinApp
{
public:
	CFtest1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFtest1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CFtest1App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FTEST1_H__2A20FE1B_72DF_4909_BA90_370722EDAADD__INCLUDED_)
