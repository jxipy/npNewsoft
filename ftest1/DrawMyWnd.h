#if !defined(AFX_DRAWMYWND_H__B53BE7B3_BA01_4754_BCDD_7DAB3780ED45__INCLUDED_)
#define AFX_DRAWMYWND_H__B53BE7B3_BA01_4754_BCDD_7DAB3780ED45__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DrawMyWnd.h : header file
//
#include "DrawWnd.h"
/////////////////////////////////////////////////////////////////////////////
// CDrawMyWnd window

class CDrawMyWnd : public CDrawWnd
{
// Construction
public:
	CDrawMyWnd();

// Attributes
public:

	CFont m_ruleFont;
// Operations
public:
	deletefont();
    setRulefont(int szTitle = 10);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDrawMyWnd)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDrawMyWnd();
	virtual void DrawContent();

	// Generated message map functions
protected:
	//{{AFX_MSG(CDrawMyWnd)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAWMYWND_H__B53BE7B3_BA01_4754_BCDD_7DAB3780ED45__INCLUDED_)
