// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.5.0 by WSRD Tencent.
// Generated from `Role.jce'
// **********************************************************************

#include "Role.h"
#include "jce/wup.h"
#include "servant/BaseF.h"

using namespace wup;

namespace ServerEngine
{

    taf::Int32 RoleProxy::delRole(const ServerEngine::PKRole &keyData, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(keyData, 1);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"delRole", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void Role::async_response_delRole(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void RoleProxy::async_delRole(RolePrxCallbackPtr callback,const ServerEngine::PKRole &keyData,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(keyData, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"delRole", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 RoleProxy::getRole(const ServerEngine::PKRole &keyData, ServerEngine::PIRole &roleInfo, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(keyData, 1);
        _os.write(roleInfo, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"getRole", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(roleInfo, 2, true);
        return _ret;
    }

    void Role::async_response_getRole(taf::JceCurrentPtr current, taf::Int32 _ret, const ServerEngine::PIRole &roleInfo)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("roleInfo", roleInfo);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(roleInfo, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void RoleProxy::async_getRole(RolePrxCallbackPtr callback,const ServerEngine::PKRole &keyData,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(keyData, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"getRole", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 RoleProxy::newRole(const std::string &strAccount, taf::Int32 nPos, taf::Int32 nWorldID, const std::string &strName, const ServerEngine::PIRole &roleInfo, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(strAccount, 1);
        _os.write(nPos, 2);
        _os.write(nWorldID, 3);
        _os.write(strName, 4);
        _os.write(roleInfo, 5);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"newRole", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void Role::async_response_newRole(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void RoleProxy::async_newRole(RolePrxCallbackPtr callback,const std::string &strAccount,taf::Int32 nPos,taf::Int32 nWorldID,const std::string &strName,const ServerEngine::PIRole &roleInfo,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(strAccount, 1);
        _os.write(nPos, 2);
        _os.write(nWorldID, 3);
        _os.write(strName, 4);
        _os.write(roleInfo, 5);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"newRole", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 RoleProxy::updateRole(const ServerEngine::PKRole &keyData, const ServerEngine::PIRole &roleInfo, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(keyData, 1);
        _os.write(roleInfo, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"updateRole", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void Role::async_response_updateRole(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void RoleProxy::async_updateRole(RolePrxCallbackPtr callback,const ServerEngine::PKRole &keyData,const ServerEngine::PIRole &roleInfo,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(keyData, 1);
        _os.write(roleInfo, 2);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"updateRole", _os.getByteBuffer(), context, _mStatus, callback);
    }

    RoleProxy* RoleProxy::taf_hash(int64_t key)
    {
        return (RoleProxy*)ServantProxy::taf_hash(key);
    }

    static ::std::string __ServerEngine__Role_all[]=
    {
        "delRole",
        "getRole",
        "newRole",
        "updateRole"
    };

    int RolePrxCallback::onDispatch(taf::ReqMessagePtr msg)
    {
        pair<string*, string*> r = equal_range(__ServerEngine__Role_all, __ServerEngine__Role_all+4, msg->request.sFuncName);
        if(r.first == r.second) return taf::JCESERVERNOFUNCERR;
        switch(r.first - __ServerEngine__Role_all)
        {
            case 0:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_delRole_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_delRole(_ret);
                return taf::JCESERVERSUCCESS;

            }
            case 1:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_getRole_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                ServerEngine::PIRole roleInfo;
                _is.read(roleInfo, 2, true);
                callback_getRole(_ret, roleInfo);
                return taf::JCESERVERSUCCESS;

            }
            case 2:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_newRole_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_newRole(_ret);
                return taf::JCESERVERSUCCESS;

            }
            case 3:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_updateRole_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_updateRole(_ret);
                return taf::JCESERVERSUCCESS;

            }
        }
        return taf::JCESERVERNOFUNCERR;
    }

    int Role::onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer)
    {
        pair<string*, string*> r = equal_range(__ServerEngine__Role_all, __ServerEngine__Role_all+4, _current->getFuncName());
        if(r.first == r.second) return taf::JCESERVERNOFUNCERR;
        switch(r.first - __ServerEngine__Role_all)
        {
            case 0:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                ServerEngine::PKRole keyData;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("keyData", keyData);
                }
                else
                {
                    _is.read(keyData, 1, true);
                }
                taf::Int32 _ret = delRole(keyData, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 1:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                ServerEngine::PKRole keyData;
                ServerEngine::PIRole roleInfo;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("keyData", keyData);
                    tafAttr.getByDefault("roleInfo", roleInfo, roleInfo);
                }
                else
                {
                    _is.read(keyData, 1, true);
                    _is.read(roleInfo, 2, false);
                }
                taf::Int32 _ret = getRole(keyData,roleInfo, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("roleInfo", roleInfo);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(roleInfo, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 2:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                std::string strAccount;
                taf::Int32 nPos;
                taf::Int32 nWorldID;
                std::string strName;
                ServerEngine::PIRole roleInfo;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("strAccount", strAccount);
                    tafAttr.get("nPos", nPos);
                    tafAttr.get("nWorldID", nWorldID);
                    tafAttr.get("strName", strName);
                    tafAttr.get("roleInfo", roleInfo);
                }
                else
                {
                    _is.read(strAccount, 1, true);
                    _is.read(nPos, 2, true);
                    _is.read(nWorldID, 3, true);
                    _is.read(strName, 4, true);
                    _is.read(roleInfo, 5, true);
                }
                taf::Int32 _ret = newRole(strAccount,nPos,nWorldID,strName,roleInfo, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 3:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                ServerEngine::PKRole keyData;
                ServerEngine::PIRole roleInfo;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("keyData", keyData);
                    tafAttr.get("roleInfo", roleInfo);
                }
                else
                {
                    _is.read(keyData, 1, true);
                    _is.read(roleInfo, 2, true);
                }
                taf::Int32 _ret = updateRole(keyData,roleInfo, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
        }
        return taf::JCESERVERNOFUNCERR;
    }


}

