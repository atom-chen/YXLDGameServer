// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 4.6.0 by WSRD Tencent.
// Generated from `DalCommDef.jce'
// **********************************************************************

#ifndef __DALCOMMDEF_H_
#define __DALCOMMDEF_H_

#include <map>
#include <string>
#include <vector>
#include "jce/Jce.h"
using namespace std;


namespace Aegis
{
    enum DALRet
    {
        RET_DAL_NODATA = 1,
        RET_DAL_SUCC = 0,
        RET_DAL_SYSERR = -1,
        RET_DAL_EXCEPTION = -2,
        RET_DAL_DCVERMISMATCH = -3,
    };
    inline string etos(const DALRet & e)
    {
        switch(e)
        {
            case RET_DAL_NODATA: return "RET_DAL_NODATA";
            case RET_DAL_SUCC: return "RET_DAL_SUCC";
            case RET_DAL_SYSERR: return "RET_DAL_SYSERR";
            case RET_DAL_EXCEPTION: return "RET_DAL_EXCEPTION";
            case RET_DAL_DCVERMISMATCH: return "RET_DAL_DCVERMISMATCH";
            default: return "";
        }
        return "";
    }
    inline int stoe(const string & s, DALRet & e)
    {
        if(s == "RET_DAL_NODATA")  { e=RET_DAL_NODATA; return 0;}
        if(s == "RET_DAL_SUCC")  { e=RET_DAL_SUCC; return 0;}
        if(s == "RET_DAL_SYSERR")  { e=RET_DAL_SYSERR; return 0;}
        if(s == "RET_DAL_EXCEPTION")  { e=RET_DAL_EXCEPTION; return 0;}
        if(s == "RET_DAL_DCVERMISMATCH")  { e=RET_DAL_DCVERMISMATCH; return 0;}

        return -1;
    }


}



#endif
