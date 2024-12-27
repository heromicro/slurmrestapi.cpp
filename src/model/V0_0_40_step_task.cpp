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



#include "slurmrestapi/model/V0_0_40_step_task.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_40_step_task::V0_0_40_step_task()
{
    m_Distribution = utility::conversions::to_string_t("");
    m_DistributionIsSet = false;
}

V0_0_40_step_task::~V0_0_40_step_task()
{
}

void V0_0_40_step_task::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_step_task::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DistributionIsSet)
    {
        val[utility::conversions::to_string_t(U("distribution"))] = ModelBase::toJson(m_Distribution);
    }

    return val;
}

bool V0_0_40_step_task::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("distribution"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("distribution")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDistribution;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDistribution);
            setDistribution(refVal_setDistribution);
        }
    }
    return ok;
}

void V0_0_40_step_task::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DistributionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("distribution")), m_Distribution));
    }
}

bool V0_0_40_step_task::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("distribution"))))
    {
        utility::string_t refVal_setDistribution;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("distribution"))), refVal_setDistribution );
        setDistribution(refVal_setDistribution);
    }
    return ok;
}

utility::string_t V0_0_40_step_task::getDistribution() const
{
    return m_Distribution;
}

void V0_0_40_step_task::setDistribution(const utility::string_t& value)
{
    m_Distribution = value;
    m_DistributionIsSet = true;
}

bool V0_0_40_step_task::distributionIsSet() const
{
    return m_DistributionIsSet;
}

void V0_0_40_step_task::unsetDistribution()
{
    m_DistributionIsSet = false;
}
}
}
}
}


