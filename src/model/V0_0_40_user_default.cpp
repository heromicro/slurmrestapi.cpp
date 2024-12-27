/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_40_user_default.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_40_user_default::V0_0_40_user_default()
{
    m_Account = utility::conversions::to_string_t("");
    m_AccountIsSet = false;
    m_Wckey = utility::conversions::to_string_t("");
    m_WckeyIsSet = false;
}

V0_0_40_user_default::~V0_0_40_user_default()
{
}

void V0_0_40_user_default::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_user_default::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AccountIsSet)
    {
        val[utility::conversions::to_string_t(U("account"))] = ModelBase::toJson(m_Account);
    }
    if(m_WckeyIsSet)
    {
        val[utility::conversions::to_string_t(U("wckey"))] = ModelBase::toJson(m_Wckey);
    }

    return val;
}

bool V0_0_40_user_default::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("account"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("account")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccount);
            setAccount(refVal_setAccount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wckey"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wckey")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWckey;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWckey);
            setWckey(refVal_setWckey);
        }
    }
    return ok;
}

void V0_0_40_user_default::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AccountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("account")), m_Account));
    }
    if(m_WckeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wckey")), m_Wckey));
    }
}

bool V0_0_40_user_default::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("account"))))
    {
        utility::string_t refVal_setAccount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("account"))), refVal_setAccount );
        setAccount(refVal_setAccount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wckey"))))
    {
        utility::string_t refVal_setWckey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wckey"))), refVal_setWckey );
        setWckey(refVal_setWckey);
    }
    return ok;
}

utility::string_t V0_0_40_user_default::getAccount() const
{
    return m_Account;
}

void V0_0_40_user_default::setAccount(const utility::string_t& value)
{
    m_Account = value;
    m_AccountIsSet = true;
}

bool V0_0_40_user_default::accountIsSet() const
{
    return m_AccountIsSet;
}

void V0_0_40_user_default::unsetAccount()
{
    m_AccountIsSet = false;
}
utility::string_t V0_0_40_user_default::getWckey() const
{
    return m_Wckey;
}

void V0_0_40_user_default::setWckey(const utility::string_t& value)
{
    m_Wckey = value;
    m_WckeyIsSet = true;
}

bool V0_0_40_user_default::wckeyIsSet() const
{
    return m_WckeyIsSet;
}

void V0_0_40_user_default::unsetWckey()
{
    m_WckeyIsSet = false;
}
}
}
}
}


