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



#include "slurmrestapi/model/V0_0_39_assoc_min.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_39_assoc_min::V0_0_39_assoc_min()
{
    m_Priority_thresholdIsSet = false;
}

V0_0_39_assoc_min::~V0_0_39_assoc_min()
{
}

void V0_0_39_assoc_min::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_assoc_min::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Priority_thresholdIsSet)
    {
        val[utility::conversions::to_string_t(U("priority_threshold"))] = ModelBase::toJson(m_Priority_threshold);
    }

    return val;
}

bool V0_0_39_assoc_min::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("priority_threshold"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("priority_threshold")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_uint32_no_val> refVal_setPriorityThreshold;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPriorityThreshold);
            setPriorityThreshold(refVal_setPriorityThreshold);
        }
    }
    return ok;
}

void V0_0_39_assoc_min::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Priority_thresholdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("priority_threshold")), m_Priority_threshold));
    }
}

bool V0_0_39_assoc_min::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("priority_threshold"))))
    {
        std::shared_ptr<V0_0_39_uint32_no_val> refVal_setPriorityThreshold;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("priority_threshold"))), refVal_setPriorityThreshold );
        setPriorityThreshold(refVal_setPriorityThreshold);
    }
    return ok;
}

std::shared_ptr<V0_0_39_uint32_no_val> V0_0_39_assoc_min::getPriorityThreshold() const
{
    return m_Priority_threshold;
}

void V0_0_39_assoc_min::setPriorityThreshold(const std::shared_ptr<V0_0_39_uint32_no_val>& value)
{
    m_Priority_threshold = value;
    m_Priority_thresholdIsSet = true;
}

bool V0_0_39_assoc_min::priorityThresholdIsSet() const
{
    return m_Priority_thresholdIsSet;
}

void V0_0_39_assoc_min::unsetPriority_threshold()
{
    m_Priority_thresholdIsSet = false;
}
}
}
}
}


