// DrawWnd.cpp : implementation file
//

#include "stdafx.h"
//#include "SDI_Collection.h"
#include "DrawWnd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDrawWnd

CDrawWnd::CDrawWnd()
{
	m_colBK		= RGB(0,0,0);
}

CDrawWnd::~CDrawWnd()
{
}


BEGIN_MESSAGE_MAP(CDrawWnd, CWnd)
	//{{AFX_MSG_MAP(CDrawWnd)
	ON_WM_DESTROY()
	ON_WM_ERASEBKGND()
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CDrawWnd message handlers

BOOL CDrawWnd::Create(DWORD dwStyle, CRect &rect, CWnd *pParent, UINT id)
{
	BOOL ret;

	ret = CWnd::CreateEx(NULL,//WS_EX_STATICEDGE , 
						 NULL, NULL, dwStyle, 
						 rect.left, rect.top, rect.Width(), rect.Height(),
						 pParent->GetSafeHwnd(), (HMENU)id);

	return ret;
}

void CDrawWnd::InitUserDC()
{
	DeleteUserDC();

	CDC *pDC = GetDC();
	CRect rc;
	GetClientRect(rc);

	m_dcMem.CreateCompatibleDC(pDC);
	m_bmpMem.CreateCompatibleBitmap(pDC, rc.Width(), rc.Height());
	m_dcMem.SelectObject(&m_bmpMem);
	m_dcMem.FillSolidRect(rc, m_colBK);

	ReleaseDC(pDC);
}

void CDrawWnd::DeleteUserDC()
{
	if(m_dcMem.GetSafeHdc() != NULL)
	{
		m_bmpMem.DeleteObject();
		m_dcMem.DeleteDC();
	}
}

void CDrawWnd::OnDestroy() 
{
	DeleteUserDC();
	CWnd::OnDestroy();
	
	// TODO: Add your message handler code here
	
}

BOOL CDrawWnd::OnEraseBkgnd(CDC* pDC) 
{
	// TODO: Add your message handler code here and/or call default
	
	return TRUE;//CWnd::OnEraseBkgnd(pDC);
}

void CDrawWnd::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	CRect rc;
	GetClientRect(rc);

	dc.BitBlt(0, 0, rc.Width(), rc.Height(), &m_dcMem, 0, 0, SRCCOPY);	
	// Do not call CWnd::OnPaint() for painting messages
}

void CDrawWnd::SetBKColor(COLORREF colBK)
{
	m_colBK = colBK;
	DrawContent();
}
