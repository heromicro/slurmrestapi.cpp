/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_38_job_time_system.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_38_job_time_system::Dbv0_0_38_job_time_system()
{
    m_Seconds = 0;
    m_SecondsIsSet = false;
    m_Microseconds = 0;
    m_MicrosecondsIsSet = false;
}

Dbv0_0_38_job_time_system::~Dbv0_0_38_job_time_system()
{
}

void Dbv0_0_38_job_time_system::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_38_job_time_system::toJson() const
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

bool Dbv0_0_38_job_time_system::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("seconds"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("seconds")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSeconds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSeconds);
            setSeconds(refVal_setSeconds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("microseconds"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("microseconds")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setMicroseconds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMicroseconds);
            setMicroseconds(refVal_setMicroseconds);
        }
    }
    return ok;
}

void Dbv0_0_38_job_time_system::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool Dbv0_0_38_job_time_system::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("seconds"))))
    {
        int32_t refVal_setSeconds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("seconds"))), refVal_setSeconds );
        setSeconds(refVal_setSeconds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("microseconds"))))
    {
        int32_t refVal_setMicroseconds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("microseconds"))), refVal_setMicroseconds );
        setMicroseconds(refVal_setMicroseconds);
    }
    return ok;
}

int32_t Dbv0_0_38_job_time_system::getSeconds() const
{
    return m_Seconds;
}

void Dbv0_0_38_job_time_system::setSeconds(int32_t value)
{
    m_Seconds = value;
    m_SecondsIsSet = true;
}

bool Dbv0_0_38_job_time_system::secondsIsSet() const
{
    return m_SecondsIsSet;
}

void Dbv0_0_38_job_time_system::unsetSeconds()
{
    m_SecondsIsSet = false;
}
int32_t Dbv0_0_38_job_time_system::getMicroseconds() const
{
    return m_Microseconds;
}

void Dbv0_0_38_job_time_system::setMicroseconds(int32_t value)
{
    m_Microseconds = value;
    m_MicrosecondsIsSet = true;
}

bool Dbv0_0_38_job_time_system::microsecondsIsSet() const
{
    return m_MicrosecondsIsSet;
}

void Dbv0_0_38_job_time_system::unsetMicroseconds()
{
    m_MicrosecondsIsSet = false;
}
}
}
}
}


