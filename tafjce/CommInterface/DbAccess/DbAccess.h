// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 4.6.0 by WSRD Tencent.
// Generated from `DbAccess.jce'
// **********************************************************************

#ifndef __DBACCESS_H_
#define __DBACCESS_H_

#include <map>
#include <string>
#include <vector>
#include "jce/Jce.h"
using namespace std;
#include "servant/ServantProxy.h"
#include "servant/Servant.h"


namespace ServerEngine
{
    enum eOpResult
    {
        eDbSucc,
        eDbRecordNotExist,
        eDbError,
        eDbNotImplement,
        eDbJceDecodeError,
        eDbUnknownError,
    };
    inline string etos(const eOpResult & e)
    {
        switch(e)
        {
            case eDbSucc: return "eDbSucc";
            case eDbRecordNotExist: return "eDbRecordNotExist";
            case eDbError: return "eDbError";
            case eDbNotImplement: return "eDbNotImplement";
            case eDbJceDecodeError: return "eDbJceDecodeError";
            case eDbUnknownError: return "eDbUnknownError";
            default: return "";
        }
        return "";
    }
    inline int stoe(const string & s, eOpResult & e)
    {
        if(s == "eDbSucc")  { e=eDbSucc; return 0;}
        if(s == "eDbRecordNotExist")  { e=eDbRecordNotExist; return 0;}
        if(s == "eDbError")  { e=eDbError; return 0;}
        if(s == "eDbNotImplement")  { e=eDbNotImplement; return 0;}
        if(s == "eDbJceDecodeError")  { e=eDbJceDecodeError; return 0;}
        if(s == "eDbUnknownError")  { e=eDbUnknownError; return 0;}

        return -1;
    }


    /* callback of async proxy for client */
    class DbAccessPrxCallback: public taf::ServantProxyCallback
    {
    public:
        virtual ~DbAccessPrxCallback(){}
        virtual void callback_setString(taf::Int32 ret)
        { throw std::runtime_error("callback_setString() overloading incorrect."); }
        virtual void callback_setString_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_setString_exception() overloading incorrect."); }

        virtual void callback_delString(taf::Int32 ret)
        { throw std::runtime_error("callback_delString() overloading incorrect."); }
        virtual void callback_delString_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_delString_exception() overloading incorrect."); }

        virtual void callback_getString(taf::Int32 ret,  const std::string& strValue)
        { throw std::runtime_error("callback_getString() overloading incorrect."); }
        virtual void callback_getString_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_getString_exception() overloading incorrect."); }

    public:
        int onDispatch(taf::ReqMessagePtr msg);
    };
    typedef taf::TC_AutoPtr<DbAccessPrxCallback> DbAccessPrxCallbackPtr;

    /* proxy for client */
    class DbAccessProxy : public taf::ServantProxy
    {
    public:
        typedef map<string, string> TAF_CONTEXT;
        taf::Int32 setString(const std::string & strKey,const std::string & strValue,const map<string, string> &context = TAF_CONTEXT());
        void async_setString(DbAccessPrxCallbackPtr callback,const std::string & strKey,const std::string & strValue,const map<string, string> &context = TAF_CONTEXT());

        taf::Int32 delString(const std::string & strKey,const map<string, string> &context = TAF_CONTEXT());
        void async_delString(DbAccessPrxCallbackPtr callback,const std::string & strKey,const map<string, string> &context = TAF_CONTEXT());

        taf::Int32 getString(const std::string & strKey,std::string &strValue,const map<string, string> &context = TAF_CONTEXT());
        void async_getString(DbAccessPrxCallbackPtr callback,const std::string & strKey,const map<string, string> &context = TAF_CONTEXT());

        DbAccessProxy* taf_hash(int64_t key);
    };
    typedef taf::TC_AutoPtr<DbAccessProxy> DbAccessPrx;

    /* servant for server */
    class DbAccess : public taf::Servant
    {
    public:
        virtual ~DbAccess(){}
        virtual taf::Int32 setString(const std::string & strKey,const std::string & strValue,taf::JceCurrentPtr current) = 0;
        static void async_response_setString(taf::JceCurrentPtr current, taf::Int32 _ret);

        virtual taf::Int32 delString(const std::string & strKey,taf::JceCurrentPtr current) = 0;
        static void async_response_delString(taf::JceCurrentPtr current, taf::Int32 _ret);

        virtual taf::Int32 getString(const std::string & strKey,std::string &strValue,taf::JceCurrentPtr current) = 0;
        static void async_response_getString(taf::JceCurrentPtr current, taf::Int32 _ret, const std::string &strValue);

    public:
        int onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer);
    };


}



#endif
