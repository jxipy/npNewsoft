; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDrawMyWnd
LastTemplate=generic CWnd
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ftest1.h"

ClassCount=5
Class1=CFtest1App
Class2=CFtest1Dlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class5=CDrawMyWnd
Resource3=IDD_FTEST1_DIALOG

[CLS:CFtest1App]
Type=0
HeaderFile=ftest1.h
ImplementationFile=ftest1.cpp
Filter=N

[CLS:CFtest1Dlg]
Type=0
HeaderFile=ftest1Dlg.h
ImplementationFile=ftest1Dlg.cpp
Filter=D

[CLS:CAboutDlg]
Type=0
HeaderFile=ftest1Dlg.h
ImplementationFile=ftest1Dlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_FTEST1_DIALOG]
Type=1
Class=CFtest1Dlg
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:CDrawMyWnd]
Type=0
HeaderFile=DrawMyWnd.h
ImplementationFile=DrawMyWnd.cpp
BaseClass=generic CWnd
Filter=W

