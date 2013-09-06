#if !defined(AFX_DRAWWND_H__4BB65441_1AB3_45B9_B68D_CAB9720A761D__INCLUDED_)
#define AFX_DRAWWND_H__4BB65441_1AB3_45B9_B68D_CAB9720A761D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DrawWnd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDrawWnd window

class CDrawWnd : public CWnd
{
// Construction
public:
	CDrawWnd();

// Attributes
public:
protected:
	CDC			m_dcMem;
	CBitmap		m_bmpMem;

	COLORREF	m_colBK;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDrawWnd)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual void SetBKColor(COLORREF colBK);
	virtual void DrawContent() =0;
	virtual void DeleteUserDC();
	virtual void InitUserDC();
	virtual BOOL Create(DWORD dwStyle, CRect &rect, CWnd *pParent, UINT id);
	virtual ~CDrawWnd();

	// Generated message map functions
protected:
	//{{AFX_MSG(CDrawWnd)
	afx_msg void OnDestroy();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAWWND_H__4BB65441_1AB3_45B9_B68D_CAB9720A761D__INCLUDED_)
