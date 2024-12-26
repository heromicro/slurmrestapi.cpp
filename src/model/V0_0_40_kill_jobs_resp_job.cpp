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



#include "slurmrestapi/model/V0_0_40_kill_jobs_resp_job.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_kill_jobs_resp_job::V0_0_40_kill_jobs_resp_job()
{
    m_ErrorIsSet = false;
    m_Step_id = utility::conversions::to_string_t("");
    m_Step_idIsSet = false;
    m_Job_idIsSet = false;
    m_FederationIsSet = false;
}

V0_0_40_kill_jobs_resp_job::~V0_0_40_kill_jobs_resp_job()
{
}

void V0_0_40_kill_jobs_resp_job::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_kill_jobs_resp_job::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ErrorIsSet)
    {
        val[utility::conversions::to_string_t(U("error"))] = ModelBase::toJson(m_Error);
    }
    if(m_Step_idIsSet)
    {
        val[utility::conversions::to_string_t(U("step_id"))] = ModelBase::toJson(m_Step_id);
    }
    if(m_Job_idIsSet)
    {
        val[utility::conversions::to_string_t(U("job_id"))] = ModelBase::toJson(m_Job_id);
    }
    if(m_FederationIsSet)
    {
        val[utility::conversions::to_string_t(U("federation"))] = ModelBase::toJson(m_Federation);
    }

    return val;
}

bool V0_0_40_kill_jobs_resp_job::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("error"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("error")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_kill_jobs_resp_job_error> refVal_setError;
            ok &= ModelBase::fromJson(fieldValue, refVal_setError);
            setError(refVal_setError);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("step_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("step_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setStepId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStepId);
            setStepId(refVal_setStepId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("job_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("job_id")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setJobId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJobId);
            setJobId(refVal_setJobId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("federation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("federation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_kill_jobs_resp_job_federation> refVal_setFederation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFederation);
            setFederation(refVal_setFederation);
        }
    }
    return ok;
}

void V0_0_40_kill_jobs_resp_job::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ErrorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("error")), m_Error));
    }
    if(m_Step_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("step_id")), m_Step_id));
    }
    if(m_Job_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("job_id")), m_Job_id));
    }
    if(m_FederationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("federation")), m_Federation));
    }
}

bool V0_0_40_kill_jobs_resp_job::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("error"))))
    {
        std::shared_ptr<V0_0_40_kill_jobs_resp_job_error> refVal_setError;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("error"))), refVal_setError );
        setError(refVal_setError);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("step_id"))))
    {
        utility::string_t refVal_setStepId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("step_id"))), refVal_setStepId );
        setStepId(refVal_setStepId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("job_id"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setJobId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("job_id"))), refVal_setJobId );
        setJobId(refVal_setJobId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("federation"))))
    {
        std::shared_ptr<V0_0_40_kill_jobs_resp_job_federation> refVal_setFederation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("federation"))), refVal_setFederation );
        setFederation(refVal_setFederation);
    }
    return ok;
}

std::shared_ptr<V0_0_40_kill_jobs_resp_job_error> V0_0_40_kill_jobs_resp_job::getError() const
{
    return m_Error;
}

void V0_0_40_kill_jobs_resp_job::setError(const std::shared_ptr<V0_0_40_kill_jobs_resp_job_error>& value)
{
    m_Error = value;
    m_ErrorIsSet = true;
}

bool V0_0_40_kill_jobs_resp_job::errorIsSet() const
{
    return m_ErrorIsSet;
}

void V0_0_40_kill_jobs_resp_job::unsetError()
{
    m_ErrorIsSet = false;
}
utility::string_t V0_0_40_kill_jobs_resp_job::getStepId() const
{
    return m_Step_id;
}

void V0_0_40_kill_jobs_resp_job::setStepId(const utility::string_t& value)
{
    m_Step_id = value;
    m_Step_idIsSet = true;
}

bool V0_0_40_kill_jobs_resp_job::stepIdIsSet() const
{
    return m_Step_idIsSet;
}

void V0_0_40_kill_jobs_resp_job::unsetStep_id()
{
    m_Step_idIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_kill_jobs_resp_job::getJobId() const
{
    return m_Job_id;
}

void V0_0_40_kill_jobs_resp_job::setJobId(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Job_id = value;
    m_Job_idIsSet = true;
}

bool V0_0_40_kill_jobs_resp_job::jobIdIsSet() const
{
    return m_Job_idIsSet;
}

void V0_0_40_kill_jobs_resp_job::unsetJob_id()
{
    m_Job_idIsSet = false;
}
std::shared_ptr<V0_0_40_kill_jobs_resp_job_federation> V0_0_40_kill_jobs_resp_job::getFederation() const
{
    return m_Federation;
}

void V0_0_40_kill_jobs_resp_job::setFederation(const std::shared_ptr<V0_0_40_kill_jobs_resp_job_federation>& value)
{
    m_Federation = value;
    m_FederationIsSet = true;
}

bool V0_0_40_kill_jobs_resp_job::federationIsSet() const
{
    return m_FederationIsSet;
}

void V0_0_40_kill_jobs_resp_job::unsetFederation()
{
    m_FederationIsSet = false;
}
}
}
}
}


