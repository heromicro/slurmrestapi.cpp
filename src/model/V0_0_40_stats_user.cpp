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



#include "slurmrestapi/model/V0_0_40_stats_user.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_stats_user::V0_0_40_stats_user()
{
    m_User = utility::conversions::to_string_t("");
    m_UserIsSet = false;
    m_Count = 0;
    m_CountIsSet = false;
    m_TimeIsSet = false;
}

V0_0_40_stats_user::~V0_0_40_stats_user()
{
}

void V0_0_40_stats_user::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_stats_user::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UserIsSet)
    {
        val[utility::conversions::to_string_t(U("user"))] = ModelBase::toJson(m_User);
    }
    if(m_CountIsSet)
    {
        val[utility::conversions::to_string_t(U("count"))] = ModelBase::toJson(m_Count);
    }
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t(U("time"))] = ModelBase::toJson(m_Time);
    }

    return val;
}

bool V0_0_40_stats_user::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("user"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("user")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUser);
            setUser(refVal_setUser);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("count"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("count")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCount);
            setCount(refVal_setCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("time")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_stats_rpc_time> refVal_setTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTime);
            setTime(refVal_setTime);
        }
    }
    return ok;
}

void V0_0_40_stats_user::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_UserIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("user")), m_User));
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("count")), m_Count));
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("time")), m_Time));
    }
}

bool V0_0_40_stats_user::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("user"))))
    {
        utility::string_t refVal_setUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("user"))), refVal_setUser );
        setUser(refVal_setUser);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("count"))))
    {
        int32_t refVal_setCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("count"))), refVal_setCount );
        setCount(refVal_setCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("time"))))
    {
        std::shared_ptr<V0_0_40_stats_rpc_time> refVal_setTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("time"))), refVal_setTime );
        setTime(refVal_setTime);
    }
    return ok;
}

utility::string_t V0_0_40_stats_user::getUser() const
{
    return m_User;
}

void V0_0_40_stats_user::setUser(const utility::string_t& value)
{
    m_User = value;
    m_UserIsSet = true;
}

bool V0_0_40_stats_user::userIsSet() const
{
    return m_UserIsSet;
}

void V0_0_40_stats_user::unsetUser()
{
    m_UserIsSet = false;
}
int32_t V0_0_40_stats_user::getCount() const
{
    return m_Count;
}

void V0_0_40_stats_user::setCount(int32_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}

bool V0_0_40_stats_user::countIsSet() const
{
    return m_CountIsSet;
}

void V0_0_40_stats_user::unsetCount()
{
    m_CountIsSet = false;
}
std::shared_ptr<V0_0_40_stats_rpc_time> V0_0_40_stats_user::getTime() const
{
    return m_Time;
}

void V0_0_40_stats_user::setTime(const std::shared_ptr<V0_0_40_stats_rpc_time>& value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool V0_0_40_stats_user::timeIsSet() const
{
    return m_TimeIsSet;
}

void V0_0_40_stats_user::unsetTime()
{
    m_TimeIsSet = false;
}
}
}
}
}


