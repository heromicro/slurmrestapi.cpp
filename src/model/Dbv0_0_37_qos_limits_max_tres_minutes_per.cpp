/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_37_qos_limits_max_tres_minutes_per.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_37_qos_limits_max_tres_minutes_per::Dbv0_0_37_qos_limits_max_tres_minutes_per()
{
    m_JobIsSet = false;
    m_AccountIsSet = false;
    m_UserIsSet = false;
}

Dbv0_0_37_qos_limits_max_tres_minutes_per::~Dbv0_0_37_qos_limits_max_tres_minutes_per()
{
}

void Dbv0_0_37_qos_limits_max_tres_minutes_per::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_37_qos_limits_max_tres_minutes_per::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_JobIsSet)
    {
        val[utility::conversions::to_string_t(U("job"))] = ModelBase::toJson(m_Job);
    }
    if(m_AccountIsSet)
    {
        val[utility::conversions::to_string_t(U("account"))] = ModelBase::toJson(m_Account);
    }
    if(m_UserIsSet)
    {
        val[utility::conversions::to_string_t(U("user"))] = ModelBase::toJson(m_User);
    }

    return val;
}

bool Dbv0_0_37_qos_limits_max_tres_minutes_per::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("job"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("job")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>> refVal_setJob;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJob);
            setJob(refVal_setJob);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("account"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("account")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>> refVal_setAccount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccount);
            setAccount(refVal_setAccount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("user"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("user")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>> refVal_setUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUser);
            setUser(refVal_setUser);
        }
    }
    return ok;
}

void Dbv0_0_37_qos_limits_max_tres_minutes_per::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_JobIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("job")), m_Job));
    }
    if(m_AccountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("account")), m_Account));
    }
    if(m_UserIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("user")), m_User));
    }
}

bool Dbv0_0_37_qos_limits_max_tres_minutes_per::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("job"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>> refVal_setJob;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("job"))), refVal_setJob );
        setJob(refVal_setJob);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("account"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>> refVal_setAccount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("account"))), refVal_setAccount );
        setAccount(refVal_setAccount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("user"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>> refVal_setUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("user"))), refVal_setUser );
        setUser(refVal_setUser);
    }
    return ok;
}

std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>>& Dbv0_0_37_qos_limits_max_tres_minutes_per::getJob()
{
    return m_Job;
}

void Dbv0_0_37_qos_limits_max_tres_minutes_per::setJob(const std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>>& value)
{
    m_Job = value;
    m_JobIsSet = true;
}

bool Dbv0_0_37_qos_limits_max_tres_minutes_per::jobIsSet() const
{
    return m_JobIsSet;
}

void Dbv0_0_37_qos_limits_max_tres_minutes_per::unsetJob()
{
    m_JobIsSet = false;
}
std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>>& Dbv0_0_37_qos_limits_max_tres_minutes_per::getAccount()
{
    return m_Account;
}

void Dbv0_0_37_qos_limits_max_tres_minutes_per::setAccount(const std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>>& value)
{
    m_Account = value;
    m_AccountIsSet = true;
}

bool Dbv0_0_37_qos_limits_max_tres_minutes_per::accountIsSet() const
{
    return m_AccountIsSet;
}

void Dbv0_0_37_qos_limits_max_tres_minutes_per::unsetAccount()
{
    m_AccountIsSet = false;
}
std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>>& Dbv0_0_37_qos_limits_max_tres_minutes_per::getUser()
{
    return m_User;
}

void Dbv0_0_37_qos_limits_max_tres_minutes_per::setUser(const std::vector<std::shared_ptr<Dbv0_0_37_tres_list_inner>>& value)
{
    m_User = value;
    m_UserIsSet = true;
}

bool Dbv0_0_37_qos_limits_max_tres_minutes_per::userIsSet() const
{
    return m_UserIsSet;
}

void Dbv0_0_37_qos_limits_max_tres_minutes_per::unsetUser()
{
    m_UserIsSet = false;
}
}
}
}
}


