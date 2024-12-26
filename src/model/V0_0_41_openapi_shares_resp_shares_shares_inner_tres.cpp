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



#include "slurmrestapi/model/V0_0_41_openapi_shares_resp_shares_shares_inner_tres.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_shares_resp_shares_shares_inner_tres::V0_0_41_openapi_shares_resp_shares_shares_inner_tres()
{
    m_Run_secondsIsSet = false;
    m_Group_minutesIsSet = false;
    m_UsageIsSet = false;
}

V0_0_41_openapi_shares_resp_shares_shares_inner_tres::~V0_0_41_openapi_shares_resp_shares_shares_inner_tres()
{
}

void V0_0_41_openapi_shares_resp_shares_shares_inner_tres::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_shares_resp_shares_shares_inner_tres::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Run_secondsIsSet)
    {
        val[utility::conversions::to_string_t(U("run_seconds"))] = ModelBase::toJson(m_Run_seconds);
    }
    if(m_Group_minutesIsSet)
    {
        val[utility::conversions::to_string_t(U("group_minutes"))] = ModelBase::toJson(m_Group_minutes);
    }
    if(m_UsageIsSet)
    {
        val[utility::conversions::to_string_t(U("usage"))] = ModelBase::toJson(m_Usage);
    }

    return val;
}

bool V0_0_41_openapi_shares_resp_shares_shares_inner_tres::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("run_seconds"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("run_seconds")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner>> refVal_setRunSeconds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRunSeconds);
            setRunSeconds(refVal_setRunSeconds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("group_minutes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("group_minutes")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner>> refVal_setGroupMinutes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGroupMinutes);
            setGroupMinutes(refVal_setGroupMinutes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("usage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("usage")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_usage_inner>> refVal_setUsage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUsage);
            setUsage(refVal_setUsage);
        }
    }
    return ok;
}

void V0_0_41_openapi_shares_resp_shares_shares_inner_tres::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Run_secondsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("run_seconds")), m_Run_seconds));
    }
    if(m_Group_minutesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("group_minutes")), m_Group_minutes));
    }
    if(m_UsageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("usage")), m_Usage));
    }
}

bool V0_0_41_openapi_shares_resp_shares_shares_inner_tres::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("run_seconds"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner>> refVal_setRunSeconds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("run_seconds"))), refVal_setRunSeconds );
        setRunSeconds(refVal_setRunSeconds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("group_minutes"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner>> refVal_setGroupMinutes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("group_minutes"))), refVal_setGroupMinutes );
        setGroupMinutes(refVal_setGroupMinutes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("usage"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_usage_inner>> refVal_setUsage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("usage"))), refVal_setUsage );
        setUsage(refVal_setUsage);
    }
    return ok;
}

std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner>>& V0_0_41_openapi_shares_resp_shares_shares_inner_tres::getRunSeconds()
{
    return m_Run_seconds;
}

void V0_0_41_openapi_shares_resp_shares_shares_inner_tres::setRunSeconds(const std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner>>& value)
{
    m_Run_seconds = value;
    m_Run_secondsIsSet = true;
}

bool V0_0_41_openapi_shares_resp_shares_shares_inner_tres::runSecondsIsSet() const
{
    return m_Run_secondsIsSet;
}

void V0_0_41_openapi_shares_resp_shares_shares_inner_tres::unsetRun_seconds()
{
    m_Run_secondsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner>>& V0_0_41_openapi_shares_resp_shares_shares_inner_tres::getGroupMinutes()
{
    return m_Group_minutes;
}

void V0_0_41_openapi_shares_resp_shares_shares_inner_tres::setGroupMinutes(const std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner>>& value)
{
    m_Group_minutes = value;
    m_Group_minutesIsSet = true;
}

bool V0_0_41_openapi_shares_resp_shares_shares_inner_tres::groupMinutesIsSet() const
{
    return m_Group_minutesIsSet;
}

void V0_0_41_openapi_shares_resp_shares_shares_inner_tres::unsetGroup_minutes()
{
    m_Group_minutesIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_usage_inner>>& V0_0_41_openapi_shares_resp_shares_shares_inner_tres::getUsage()
{
    return m_Usage;
}

void V0_0_41_openapi_shares_resp_shares_shares_inner_tres::setUsage(const std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_usage_inner>>& value)
{
    m_Usage = value;
    m_UsageIsSet = true;
}

bool V0_0_41_openapi_shares_resp_shares_shares_inner_tres::usageIsSet() const
{
    return m_UsageIsSet;
}

void V0_0_41_openapi_shares_resp_shares_shares_inner_tres::unsetUsage()
{
    m_UsageIsSet = false;
}
}
}
}
}


