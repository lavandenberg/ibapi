/* Copyright (C) 2013 Interactive Brokers LLC. All rights reserved. This code is subject to the terms
 * and conditions of the IB API Non-Commercial License or the IB API Commercial License, as applicable. */

#ifndef ibstring_h__INCLUDED
#define ibstring_h__INCLUDED

#ifdef IB_USE_STD_STRING
#include <string>
typedef std::string IBString;
#else
#include <string>
typedef std::string IBString;
#endif

#include <stdlib.h>

inline bool IsEmpty(const IBString& str)
{
#ifdef IB_USE_STD_STRING
	return str.empty();
#else
	return str.empty();
#endif
};

inline void Empty(IBString& str)
{
#ifdef IB_USE_STD_STRING
	str.erase();
#else
	str.erase();
#endif
};

inline bool Compare(IBString str, const char* strToCompare)
{
#ifdef IB_USE_STD_STRING
	return str.compare(strToCompare);
#else
	return str.compare(strToCompare);
#endif
};

inline bool Compare(IBString str, IBString strToCompare)
{
#ifdef IB_USE_STD_STRING
	return str.compare(strToCompare);
#else
	return str.compare(strToCompare);
#endif
};

inline double Atof(IBString str)
{
#ifdef IB_USE_STD_STRING
	return atof(str.c_str());
#else
    return atof(str.c_str());
#endif
};

inline int Atoi(IBString str)
{
#ifdef IB_USE_STD_STRING
	return atoi(str.c_str());
#else
    return atoi(str.c_str());
#endif
};

#endif


