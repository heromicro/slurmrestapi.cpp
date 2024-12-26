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



#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code()
{
    m_StatusIsSet = false;
    m_Return_codeIsSet = false;
    m_SignalIsSet = false;
}

V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::~V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code()
{
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_Return_codeIsSet)
    {
        val[utility::conversions::to_string_t(U("return_code"))] = ModelBase::toJson(m_Return_code);
    }
    if(m_SignalIsSet)
    {
        val[utility::conversions::to_string_t(U("signal"))] = ModelBase::toJson(m_Signal);
    }

    return val;
}

bool V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("return_code"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("return_code")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_return_code> refVal_setReturnCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReturnCode);
            setReturnCode(refVal_setReturnCode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("signal"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("signal")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_signal> refVal_setSignal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSignal);
            setSignal(refVal_setSignal);
        }
    }
    return ok;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_Return_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("return_code")), m_Return_code));
    }
    if(m_SignalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("signal")), m_Signal));
    }
}

bool V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::vector<utility::string_t> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("return_code"))))
    {
        std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_return_code> refVal_setReturnCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("return_code"))), refVal_setReturnCode );
        setReturnCode(refVal_setReturnCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("signal"))))
    {
        std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_signal> refVal_setSignal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("signal"))), refVal_setSignal );
        setSignal(refVal_setSignal);
    }
    return ok;
}

std::vector<utility::string_t>& V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::getStatus()
{
    return m_Status;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::setStatus(const std::vector<utility::string_t>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::statusIsSet() const
{
    return m_StatusIsSet;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::unsetStatus()
{
    m_StatusIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_return_code> V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::getReturnCode() const
{
    return m_Return_code;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::setReturnCode(const std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_return_code>& value)
{
    m_Return_code = value;
    m_Return_codeIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::returnCodeIsSet() const
{
    return m_Return_codeIsSet;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::unsetReturn_code()
{
    m_Return_codeIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_signal> V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::getSignal() const
{
    return m_Signal;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::setSignal(const std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_signal>& value)
{
    m_Signal = value;
    m_SignalIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::signalIsSet() const
{
    return m_SignalIsSet;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code::unsetSignal()
{
    m_SignalIsSet = false;
}
}
}
}
}


