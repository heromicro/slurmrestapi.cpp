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



#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration()
{
    m_Last = 0L;
    m_LastIsSet = false;
    m_Max = 0L;
    m_MaxIsSet = false;
    m_Time = 0L;
    m_TimeIsSet = false;
}

V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::~V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration()
{
}

void V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_LastIsSet)
    {
        val[utility::conversions::to_string_t(U("last"))] = ModelBase::toJson(m_Last);
    }
    if(m_MaxIsSet)
    {
        val[utility::conversions::to_string_t(U("max"))] = ModelBase::toJson(m_Max);
    }
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t(U("time"))] = ModelBase::toJson(m_Time);
    }

    return val;
}

bool V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("last"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("last")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setLast;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLast);
            setLast(refVal_setLast);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("max"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("max")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setMax;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMax);
            setMax(refVal_setMax);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("time")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTime);
            setTime(refVal_setTime);
        }
    }
    return ok;
}

void V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_LastIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("last")), m_Last));
    }
    if(m_MaxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("max")), m_Max));
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("time")), m_Time));
    }
}

bool V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("last"))))
    {
        int64_t refVal_setLast;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("last"))), refVal_setLast );
        setLast(refVal_setLast);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("max"))))
    {
        int64_t refVal_setMax;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("max"))), refVal_setMax );
        setMax(refVal_setMax);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("time"))))
    {
        int64_t refVal_setTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("time"))), refVal_setTime );
        setTime(refVal_setTime);
    }
    return ok;
}

int64_t V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::getLast() const
{
    return m_Last;
}

void V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::setLast(int64_t value)
{
    m_Last = value;
    m_LastIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::lastIsSet() const
{
    return m_LastIsSet;
}

void V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::unsetLast()
{
    m_LastIsSet = false;
}
int64_t V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::getMax() const
{
    return m_Max;
}

void V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::setMax(int64_t value)
{
    m_Max = value;
    m_MaxIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::maxIsSet() const
{
    return m_MaxIsSet;
}

void V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::unsetMax()
{
    m_MaxIsSet = false;
}
int64_t V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::getTime() const
{
    return m_Time;
}

void V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::setTime(int64_t value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::timeIsSet() const
{
    return m_TimeIsSet;
}

void V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::unsetTime()
{
    m_TimeIsSet = false;
}
}
}
}
}


