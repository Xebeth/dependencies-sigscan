/**************************************************************************
	created		:	2013-04-08
	filename	: 	MemoryScanner.h
	author		:	Xebeth`
	copyright	:	North Edge (2013)
	purpose		:	
**************************************************************************/
#ifndef __MEMORY_SCANNER_H__
#define __MEMORY_SCANNER_H__

#include <NonCopyable.h>
#include <StringUtils.h>
#include <vector>
#include <map>

#define _MEMORY_SCANNER_SDK_INCLUDE_

#include <SigScan.h>
#include <ScanResult.h>
#include <ProcessImage.h>

#ifdef _DEBUG
	#ifdef _M_X64
		#pragma comment(lib, "SigScan.x64d.lib")
	#else
		#pragma comment(lib, "SigScan.x86d.lib")
	#endif
#else
	#ifdef _M_X64
		#pragma comment(lib, "SigScan.x64.lib")
	#else
		#pragma comment(lib, "SigScan.x86.lib")
	#endif
#endif // _DEBUG
#undef _MEMORY_SCANNER_SDK_INCLUDE_

#endif//__MEMORY_SCANNER_H__
