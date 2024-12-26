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



#include "slurmrestapi/model/V0_0_40_kill_jobs_resp_job_federation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_kill_jobs_resp_job_federation::V0_0_40_kill_jobs_resp_job_federation()
{
    m_Sibling = utility::conversions::to_string_t("");
    m_SiblingIsSet = false;
}

V0_0_40_kill_jobs_resp_job_federation::~V0_0_40_kill_jobs_resp_job_federation()
{
}

void V0_0_40_kill_jobs_resp_job_federation::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_kill_jobs_resp_job_federation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SiblingIsSet)
    {
        val[utility::conversions::to_string_t(U("sibling"))] = ModelBase::toJson(m_Sibling);
    }

    return val;
}

bool V0_0_40_kill_jobs_resp_job_federation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("sibling"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sibling")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSibling;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSibling);
            setSibling(refVal_setSibling);
        }
    }
    return ok;
}

void V0_0_40_kill_jobs_resp_job_federation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SiblingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sibling")), m_Sibling));
    }
}

bool V0_0_40_kill_jobs_resp_job_federation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("sibling"))))
    {
        utility::string_t refVal_setSibling;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sibling"))), refVal_setSibling );
        setSibling(refVal_setSibling);
    }
    return ok;
}

utility::string_t V0_0_40_kill_jobs_resp_job_federation::getSibling() const
{
    return m_Sibling;
}

void V0_0_40_kill_jobs_resp_job_federation::setSibling(const utility::string_t& value)
{
    m_Sibling = value;
    m_SiblingIsSet = true;
}

bool V0_0_40_kill_jobs_resp_job_federation::siblingIsSet() const
{
    return m_SiblingIsSet;
}

void V0_0_40_kill_jobs_resp_job_federation::unsetSibling()
{
    m_SiblingIsSet = false;
}
}
}
}
}


