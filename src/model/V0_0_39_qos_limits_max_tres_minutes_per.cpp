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



#include "slurmrestapi/model/V0_0_39_qos_limits_max_tres_minutes_per.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_39_qos_limits_max_tres_minutes_per::V0_0_39_qos_limits_max_tres_minutes_per()
{
    m_QosIsSet = false;
    m_JobIsSet = false;
    m_AccountIsSet = false;
    m_UserIsSet = false;
}

V0_0_39_qos_limits_max_tres_minutes_per::~V0_0_39_qos_limits_max_tres_minutes_per()
{
}

void V0_0_39_qos_limits_max_tres_minutes_per::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_qos_limits_max_tres_minutes_per::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_QosIsSet)
    {
        val[utility::conversions::to_string_t(U("qos"))] = ModelBase::toJson(m_Qos);
    }
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

bool V0_0_39_qos_limits_max_tres_minutes_per::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("qos"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("qos")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_39_tres>> refVal_setQos;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQos);
            setQos(refVal_setQos);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("job"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("job")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_39_tres>> refVal_setJob;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJob);
            setJob(refVal_setJob);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("account"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("account")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_39_tres>> refVal_setAccount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccount);
            setAccount(refVal_setAccount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("user"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("user")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_39_tres>> refVal_setUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUser);
            setUser(refVal_setUser);
        }
    }
    return ok;
}

void V0_0_39_qos_limits_max_tres_minutes_per::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_QosIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("qos")), m_Qos));
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

bool V0_0_39_qos_limits_max_tres_minutes_per::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("qos"))))
    {
        std::vector<std::shared_ptr<V0_0_39_tres>> refVal_setQos;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("qos"))), refVal_setQos );
        setQos(refVal_setQos);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("job"))))
    {
        std::vector<std::shared_ptr<V0_0_39_tres>> refVal_setJob;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("job"))), refVal_setJob );
        setJob(refVal_setJob);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("account"))))
    {
        std::vector<std::shared_ptr<V0_0_39_tres>> refVal_setAccount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("account"))), refVal_setAccount );
        setAccount(refVal_setAccount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("user"))))
    {
        std::vector<std::shared_ptr<V0_0_39_tres>> refVal_setUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("user"))), refVal_setUser );
        setUser(refVal_setUser);
    }
    return ok;
}

std::vector<std::shared_ptr<V0_0_39_tres>>& V0_0_39_qos_limits_max_tres_minutes_per::getQos()
{
    return m_Qos;
}

void V0_0_39_qos_limits_max_tres_minutes_per::setQos(const std::vector<std::shared_ptr<V0_0_39_tres>>& value)
{
    m_Qos = value;
    m_QosIsSet = true;
}

bool V0_0_39_qos_limits_max_tres_minutes_per::qosIsSet() const
{
    return m_QosIsSet;
}

void V0_0_39_qos_limits_max_tres_minutes_per::unsetQos()
{
    m_QosIsSet = false;
}
std::vector<std::shared_ptr<V0_0_39_tres>>& V0_0_39_qos_limits_max_tres_minutes_per::getJob()
{
    return m_Job;
}

void V0_0_39_qos_limits_max_tres_minutes_per::setJob(const std::vector<std::shared_ptr<V0_0_39_tres>>& value)
{
    m_Job = value;
    m_JobIsSet = true;
}

bool V0_0_39_qos_limits_max_tres_minutes_per::jobIsSet() const
{
    return m_JobIsSet;
}

void V0_0_39_qos_limits_max_tres_minutes_per::unsetJob()
{
    m_JobIsSet = false;
}
std::vector<std::shared_ptr<V0_0_39_tres>>& V0_0_39_qos_limits_max_tres_minutes_per::getAccount()
{
    return m_Account;
}

void V0_0_39_qos_limits_max_tres_minutes_per::setAccount(const std::vector<std::shared_ptr<V0_0_39_tres>>& value)
{
    m_Account = value;
    m_AccountIsSet = true;
}

bool V0_0_39_qos_limits_max_tres_minutes_per::accountIsSet() const
{
    return m_AccountIsSet;
}

void V0_0_39_qos_limits_max_tres_minutes_per::unsetAccount()
{
    m_AccountIsSet = false;
}
std::vector<std::shared_ptr<V0_0_39_tres>>& V0_0_39_qos_limits_max_tres_minutes_per::getUser()
{
    return m_User;
}

void V0_0_39_qos_limits_max_tres_minutes_per::setUser(const std::vector<std::shared_ptr<V0_0_39_tres>>& value)
{
    m_User = value;
    m_UserIsSet = true;
}

bool V0_0_39_qos_limits_max_tres_minutes_per::userIsSet() const
{
    return m_UserIsSet;
}

void V0_0_39_qos_limits_max_tres_minutes_per::unsetUser()
{
    m_UserIsSet = false;
}
}
}
}
}


