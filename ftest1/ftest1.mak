# Microsoft Developer Studio Generated NMAKE File, Based on ftest1.dsp
!IF "$(CFG)" == ""
CFG=ftest1 - Win32 Debug
!MESSAGE No configuration specified. Defaulting to ftest1 - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "ftest1 - Win32 Release" && "$(CFG)" != "ftest1 - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "ftest1.mak" CFG="ftest1 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "ftest1 - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "ftest1 - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "ftest1 - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

ALL : "$(OUTDIR)\ftest1.exe"


CLEAN :
	-@erase "$(INTDIR)\DrawMyWnd.obj"
	-@erase "$(INTDIR)\DrawWnd.obj"
	-@erase "$(INTDIR)\ftest1.obj"
	-@erase "$(INTDIR)\ftest1.pch"
	-@erase "$(INTDIR)\ftest1.res"
	-@erase "$(INTDIR)\ftest1Dlg.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(OUTDIR)\ftest1.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\ftest1.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /win32 
RSC_PROJ=/l 0x804 /fo"$(INTDIR)\ftest1.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\ftest1.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no /pdb:"$(OUTDIR)\ftest1.pdb" /machine:I386 /out:"$(OUTDIR)\ftest1.exe" 
LINK32_OBJS= \
	"$(INTDIR)\ftest1.obj" \
	"$(INTDIR)\ftest1Dlg.obj" \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\ftest1.res" \
	"$(INTDIR)\DrawWnd.obj" \
	"$(INTDIR)\DrawMyWnd.obj"

"$(OUTDIR)\ftest1.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "ftest1 - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

ALL : "$(OUTDIR)\ftest1.exe"


CLEAN :
	-@erase "$(INTDIR)\DrawMyWnd.obj"
	-@erase "$(INTDIR)\DrawWnd.obj"
	-@erase "$(INTDIR)\ftest1.obj"
	-@erase "$(INTDIR)\ftest1.pch"
	-@erase "$(INTDIR)\ftest1.res"
	-@erase "$(INTDIR)\ftest1Dlg.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(INTDIR)\vc60.pdb"
	-@erase "$(OUTDIR)\ftest1.exe"
	-@erase "$(OUTDIR)\ftest1.ilk"
	-@erase "$(OUTDIR)\ftest1.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\ftest1.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ   /c 
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /win32 
RSC_PROJ=/l 0x804 /fo"$(INTDIR)\ftest1.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\ftest1.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes /pdb:"$(OUTDIR)\ftest1.pdb" /debug /machine:I386 /out:"$(OUTDIR)\ftest1.exe" /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\ftest1.obj" \
	"$(INTDIR)\ftest1Dlg.obj" \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\ftest1.res" \
	"$(INTDIR)\DrawWnd.obj" \
	"$(INTDIR)\DrawMyWnd.obj"

"$(OUTDIR)\ftest1.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<


!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("ftest1.dep")
!INCLUDE "ftest1.dep"
!ELSE 
!MESSAGE Warning: cannot find "ftest1.dep"
!ENDIF 
!ENDIF 


!IF "$(CFG)" == "ftest1 - Win32 Release" || "$(CFG)" == "ftest1 - Win32 Debug"
SOURCE=.\DrawMyWnd.cpp

"$(INTDIR)\DrawMyWnd.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ftest1.pch"


SOURCE=.\DrawWnd.cpp

"$(INTDIR)\DrawWnd.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ftest1.pch"


SOURCE=.\ftest1.cpp

"$(INTDIR)\ftest1.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ftest1.pch"


SOURCE=.\ftest1.rc

"$(INTDIR)\ftest1.res" : $(SOURCE) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\ftest1Dlg.cpp

"$(INTDIR)\ftest1Dlg.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ftest1.pch"


SOURCE=.\StdAfx.cpp

!IF  "$(CFG)" == "ftest1 - Win32 Release"

CPP_SWITCHES=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\ftest1.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\ftest1.pch" : $(SOURCE) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "ftest1 - Win32 Debug"

CPP_SWITCHES=/nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\ftest1.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ   /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\ftest1.pch" : $(SOURCE) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

