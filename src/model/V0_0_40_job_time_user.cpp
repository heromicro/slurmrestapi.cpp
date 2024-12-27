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



#include "slurmrestapi/model/V0_0_40_job_time_user.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_40_job_time_user::V0_0_40_job_time_user()
{
    m_Seconds = 0L;
    m_SecondsIsSet = false;
    m_Microseconds = 0L;
    m_MicrosecondsIsSet = false;
}

V0_0_40_job_time_user::~V0_0_40_job_time_user()
{
}

void V0_0_40_job_time_user::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_job_time_user::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SecondsIsSet)
    {
        val[utility::conversions::to_string_t(U("seconds"))] = ModelBase::toJson(m_Seconds);
    }
    if(m_MicrosecondsIsSet)
    {
        val[utility::conversions::to_string_t(U("microseconds"))] = ModelBase::toJson(m_Microseconds);
    }

    return val;
}

bool V0_0_40_job_time_user::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("seconds"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("seconds")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setSeconds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSeconds);
            setSeconds(refVal_setSeconds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("microseconds"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("microseconds")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setMicroseconds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMicroseconds);
            setMicroseconds(refVal_setMicroseconds);
        }
    }
    return ok;
}

void V0_0_40_job_time_user::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SecondsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("seconds")), m_Seconds));
    }
    if(m_MicrosecondsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("microseconds")), m_Microseconds));
    }
}

bool V0_0_40_job_time_user::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("seconds"))))
    {
        int64_t refVal_setSeconds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("seconds"))), refVal_setSeconds );
        setSeconds(refVal_setSeconds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("microseconds"))))
    {
        int64_t refVal_setMicroseconds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("microseconds"))), refVal_setMicroseconds );
        setMicroseconds(refVal_setMicroseconds);
    }
    return ok;
}

int64_t V0_0_40_job_time_user::getSeconds() const
{
    return m_Seconds;
}

void V0_0_40_job_time_user::setSeconds(int64_t value)
{
    m_Seconds = value;
    m_SecondsIsSet = true;
}

bool V0_0_40_job_time_user::secondsIsSet() const
{
    return m_SecondsIsSet;
}

void V0_0_40_job_time_user::unsetSeconds()
{
    m_SecondsIsSet = false;
}
int64_t V0_0_40_job_time_user::getMicroseconds() const
{
    return m_Microseconds;
}

void V0_0_40_job_time_user::setMicroseconds(int64_t value)
{
    m_Microseconds = value;
    m_MicrosecondsIsSet = true;
}

bool V0_0_40_job_time_user::microsecondsIsSet() const
{
    return m_MicrosecondsIsSet;
}

void V0_0_40_job_time_user::unsetMicroseconds()
{
    m_MicrosecondsIsSet = false;
}
}
}
}
}


