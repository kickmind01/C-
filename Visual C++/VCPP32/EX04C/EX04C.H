// ex04c.h : Haupt-Header-Datei f�r die Anwendung EX04C
//

#if !defined(AFX_EX04C_H__9BBE5BB6_D48F_11D0_A68E_00009290A263__INCLUDED_)
#define AFX_EX04C_H__9BBE5BB6_D48F_11D0_A68E_00009290A263__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CEx04cApp:
// Siehe ex04c.cpp f�r die Implementierung dieser Klasse
//

class CEx04cApp : public CWinApp
{
public:
	CEx04cApp();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx04cApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung

	//{{AFX_MSG(CEx04cApp)
	afx_msg void OnAppAbout();
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio f�gt zus�tzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX04C_H__9BBE5BB6_D48F_11D0_A68E_00009290A263__INCLUDED_)
