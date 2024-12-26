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



#include "slurmrestapi/model/V0_0_41_openapi_partition_resp_partitions_inner_timeouts.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_partition_resp_partitions_inner_timeouts::V0_0_41_openapi_partition_resp_partitions_inner_timeouts()
{
    m_ResumeIsSet = false;
    m_SuspendIsSet = false;
}

V0_0_41_openapi_partition_resp_partitions_inner_timeouts::~V0_0_41_openapi_partition_resp_partitions_inner_timeouts()
{
}

void V0_0_41_openapi_partition_resp_partitions_inner_timeouts::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_partition_resp_partitions_inner_timeouts::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ResumeIsSet)
    {
        val[utility::conversions::to_string_t(U("resume"))] = ModelBase::toJson(m_Resume);
    }
    if(m_SuspendIsSet)
    {
        val[utility::conversions::to_string_t(U("suspend"))] = ModelBase::toJson(m_Suspend);
    }

    return val;
}

bool V0_0_41_openapi_partition_resp_partitions_inner_timeouts::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("resume"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("resume")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts_resume> refVal_setResume;
            ok &= ModelBase::fromJson(fieldValue, refVal_setResume);
            setResume(refVal_setResume);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("suspend"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("suspend")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts_suspend> refVal_setSuspend;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSuspend);
            setSuspend(refVal_setSuspend);
        }
    }
    return ok;
}

void V0_0_41_openapi_partition_resp_partitions_inner_timeouts::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ResumeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("resume")), m_Resume));
    }
    if(m_SuspendIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("suspend")), m_Suspend));
    }
}

bool V0_0_41_openapi_partition_resp_partitions_inner_timeouts::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("resume"))))
    {
        std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts_resume> refVal_setResume;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("resume"))), refVal_setResume );
        setResume(refVal_setResume);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("suspend"))))
    {
        std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts_suspend> refVal_setSuspend;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("suspend"))), refVal_setSuspend );
        setSuspend(refVal_setSuspend);
    }
    return ok;
}

std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts_resume> V0_0_41_openapi_partition_resp_partitions_inner_timeouts::getResume() const
{
    return m_Resume;
}

void V0_0_41_openapi_partition_resp_partitions_inner_timeouts::setResume(const std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts_resume>& value)
{
    m_Resume = value;
    m_ResumeIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner_timeouts::resumeIsSet() const
{
    return m_ResumeIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner_timeouts::unsetResume()
{
    m_ResumeIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts_suspend> V0_0_41_openapi_partition_resp_partitions_inner_timeouts::getSuspend() const
{
    return m_Suspend;
}

void V0_0_41_openapi_partition_resp_partitions_inner_timeouts::setSuspend(const std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts_suspend>& value)
{
    m_Suspend = value;
    m_SuspendIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner_timeouts::suspendIsSet() const
{
    return m_SuspendIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner_timeouts::unsetSuspend()
{
    m_SuspendIsSet = false;
}
}
}
}
}


