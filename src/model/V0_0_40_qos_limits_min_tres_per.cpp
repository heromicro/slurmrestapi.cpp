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



#include "slurmrestapi/model/V0_0_40_qos_limits_min_tres_per.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_qos_limits_min_tres_per::V0_0_40_qos_limits_min_tres_per()
{
    m_JobIsSet = false;
}

V0_0_40_qos_limits_min_tres_per::~V0_0_40_qos_limits_min_tres_per()
{
}

void V0_0_40_qos_limits_min_tres_per::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_qos_limits_min_tres_per::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_JobIsSet)
    {
        val[utility::conversions::to_string_t(U("job"))] = ModelBase::toJson(m_Job);
    }

    return val;
}

bool V0_0_40_qos_limits_min_tres_per::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("job"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("job")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setJob;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJob);
            setJob(refVal_setJob);
        }
    }
    return ok;
}

void V0_0_40_qos_limits_min_tres_per::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool V0_0_40_qos_limits_min_tres_per::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("job"))))
    {
        std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setJob;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("job"))), refVal_setJob );
        setJob(refVal_setJob);
    }
    return ok;
}

std::vector<std::shared_ptr<V0_0_40_tres>>& V0_0_40_qos_limits_min_tres_per::getJob()
{
    return m_Job;
}

void V0_0_40_qos_limits_min_tres_per::setJob(const std::vector<std::shared_ptr<V0_0_40_tres>>& value)
{
    m_Job = value;
    m_JobIsSet = true;
}

bool V0_0_40_qos_limits_min_tres_per::jobIsSet() const
{
    return m_JobIsSet;
}

void V0_0_40_qos_limits_min_tres_per::unsetJob()
{
    m_JobIsSet = false;
}
}
}
}
}


