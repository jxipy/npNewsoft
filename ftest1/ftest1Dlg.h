// ftest1Dlg.h : header file
//

#if !defined(AFX_FTEST1DLG_H__E3F40493_206E_4808_BF74_2C120FFC15C6__INCLUDED_)
#define AFX_FTEST1DLG_H__E3F40493_206E_4808_BF74_2C120FFC15C6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "DrawMyWnd.h"
/////////////////////////////////////////////////////////////////////////////
// CFtest1Dlg dialog

class CFtest1Dlg : public CDialog
{
// Construction
public:
	CFtest1Dlg(CWnd* pParent = NULL);	// standard constructor
    CDrawMyWnd m_myWnd;
// Dialog Data
	//{{AFX_DATA(CFtest1Dlg)
	enum { IDD = IDD_FTEST1_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFtest1Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CFtest1Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FTEST1DLG_H__E3F40493_206E_4808_BF74_2C120FFC15C6__INCLUDED_)
