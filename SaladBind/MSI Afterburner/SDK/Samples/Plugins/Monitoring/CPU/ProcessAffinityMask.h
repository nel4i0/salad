// created by Unwinder
/////////////////////////////////////////////////////////////////////////////
#pragma once
//////////////////////////////////////////////////////////////////////
class CProcessAffinityMask
{
public:
	CProcessAffinityMask(DWORD dwCpuCount, DWORD dwCpu);
	~CProcessAffinityMask();

protected:
	DWORD	m_dwCpuCount;
	DWORD	m_dwCpu;
	HANDLE	m_hProcess;
	DWORD	m_dwProcessAffinityMask;
	DWORD	m_dwSystemAffinityMask;
};
//////////////////////////////////////////////////////////////////////