#include "pch.h"
#include "LoginState.h"

CLoginState::CLoginState()
{

}

CLoginState::~CLoginState()
{

}

LRESULT CLoginState::OnCommand(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled) 
{
	return 0 ; 
}

LRESULT CLoginState::OnPaint(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled) 
{
	PAINTSTRUCT ps ;
	HDC hDC = BeginPaint(&ps) ; 
	
	

	EndPaint(&ps) ;
	return 0 ; 
}

LRESULT CLoginState::OnDestory(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled) 
{
	return 0 ; 
}

