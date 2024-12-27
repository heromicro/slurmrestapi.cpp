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



#include "slurmrestapi/model/V0_0_41_openapi_users_add_cond_resp_user.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_41_openapi_users_add_cond_resp_user::V0_0_41_openapi_users_add_cond_resp_user()
{
    m_AdminlevelIsSet = false;
    m_Defaultaccount = utility::conversions::to_string_t("");
    m_DefaultaccountIsSet = false;
    m_Defaultwckey = utility::conversions::to_string_t("");
    m_DefaultwckeyIsSet = false;
}

V0_0_41_openapi_users_add_cond_resp_user::~V0_0_41_openapi_users_add_cond_resp_user()
{
}

void V0_0_41_openapi_users_add_cond_resp_user::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_users_add_cond_resp_user::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AdminlevelIsSet)
    {
        val[utility::conversions::to_string_t(U("adminlevel"))] = ModelBase::toJson(m_Adminlevel);
    }
    if(m_DefaultaccountIsSet)
    {
        val[utility::conversions::to_string_t(U("defaultaccount"))] = ModelBase::toJson(m_Defaultaccount);
    }
    if(m_DefaultwckeyIsSet)
    {
        val[utility::conversions::to_string_t(U("defaultwckey"))] = ModelBase::toJson(m_Defaultwckey);
    }

    return val;
}

bool V0_0_41_openapi_users_add_cond_resp_user::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("adminlevel"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("adminlevel")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAdminlevel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdminlevel);
            setAdminlevel(refVal_setAdminlevel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("defaultaccount"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("defaultaccount")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDefaultaccount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefaultaccount);
            setDefaultaccount(refVal_setDefaultaccount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("defaultwckey"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("defaultwckey")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDefaultwckey;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefaultwckey);
            setDefaultwckey(refVal_setDefaultwckey);
        }
    }
    return ok;
}

void V0_0_41_openapi_users_add_cond_resp_user::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AdminlevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("adminlevel")), m_Adminlevel));
    }
    if(m_DefaultaccountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("defaultaccount")), m_Defaultaccount));
    }
    if(m_DefaultwckeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("defaultwckey")), m_Defaultwckey));
    }
}

bool V0_0_41_openapi_users_add_cond_resp_user::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("adminlevel"))))
    {
        std::vector<utility::string_t> refVal_setAdminlevel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("adminlevel"))), refVal_setAdminlevel );
        setAdminlevel(refVal_setAdminlevel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("defaultaccount"))))
    {
        utility::string_t refVal_setDefaultaccount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("defaultaccount"))), refVal_setDefaultaccount );
        setDefaultaccount(refVal_setDefaultaccount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("defaultwckey"))))
    {
        utility::string_t refVal_setDefaultwckey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("defaultwckey"))), refVal_setDefaultwckey );
        setDefaultwckey(refVal_setDefaultwckey);
    }
    return ok;
}

std::vector<utility::string_t>& V0_0_41_openapi_users_add_cond_resp_user::getAdminlevel()
{
    return m_Adminlevel;
}

void V0_0_41_openapi_users_add_cond_resp_user::setAdminlevel(const std::vector<utility::string_t>& value)
{
    m_Adminlevel = value;
    m_AdminlevelIsSet = true;
}

bool V0_0_41_openapi_users_add_cond_resp_user::adminlevelIsSet() const
{
    return m_AdminlevelIsSet;
}

void V0_0_41_openapi_users_add_cond_resp_user::unsetAdminlevel()
{
    m_AdminlevelIsSet = false;
}
utility::string_t V0_0_41_openapi_users_add_cond_resp_user::getDefaultaccount() const
{
    return m_Defaultaccount;
}

void V0_0_41_openapi_users_add_cond_resp_user::setDefaultaccount(const utility::string_t& value)
{
    m_Defaultaccount = value;
    m_DefaultaccountIsSet = true;
}

bool V0_0_41_openapi_users_add_cond_resp_user::defaultaccountIsSet() const
{
    return m_DefaultaccountIsSet;
}

void V0_0_41_openapi_users_add_cond_resp_user::unsetDefaultaccount()
{
    m_DefaultaccountIsSet = false;
}
utility::string_t V0_0_41_openapi_users_add_cond_resp_user::getDefaultwckey() const
{
    return m_Defaultwckey;
}

void V0_0_41_openapi_users_add_cond_resp_user::setDefaultwckey(const utility::string_t& value)
{
    m_Defaultwckey = value;
    m_DefaultwckeyIsSet = true;
}

bool V0_0_41_openapi_users_add_cond_resp_user::defaultwckeyIsSet() const
{
    return m_DefaultwckeyIsSet;
}

void V0_0_41_openapi_users_add_cond_resp_user::unsetDefaultwckey()
{
    m_DefaultwckeyIsSet = false;
}
}
}
}
}


