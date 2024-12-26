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



#include "slurmrestapi/model/V0_0_41_openapi_job_submit_response_result.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_job_submit_response_result::V0_0_41_openapi_job_submit_response_result()
{
    m_Job_id = 0;
    m_Job_idIsSet = false;
    m_Step_id = utility::conversions::to_string_t("");
    m_Step_idIsSet = false;
    m_Error_code = 0;
    m_Error_codeIsSet = false;
    m_Error = utility::conversions::to_string_t("");
    m_ErrorIsSet = false;
    m_Job_submit_user_msg = utility::conversions::to_string_t("");
    m_Job_submit_user_msgIsSet = false;
}

V0_0_41_openapi_job_submit_response_result::~V0_0_41_openapi_job_submit_response_result()
{
}

void V0_0_41_openapi_job_submit_response_result::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_job_submit_response_result::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Job_idIsSet)
    {
        val[utility::conversions::to_string_t(U("job_id"))] = ModelBase::toJson(m_Job_id);
    }
    if(m_Step_idIsSet)
    {
        val[utility::conversions::to_string_t(U("step_id"))] = ModelBase::toJson(m_Step_id);
    }
    if(m_Error_codeIsSet)
    {
        val[utility::conversions::to_string_t(U("error_code"))] = ModelBase::toJson(m_Error_code);
    }
    if(m_ErrorIsSet)
    {
        val[utility::conversions::to_string_t(U("error"))] = ModelBase::toJson(m_Error);
    }
    if(m_Job_submit_user_msgIsSet)
    {
        val[utility::conversions::to_string_t(U("job_submit_user_msg"))] = ModelBase::toJson(m_Job_submit_user_msg);
    }

    return val;
}

bool V0_0_41_openapi_job_submit_response_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("job_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("job_id")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setJobId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJobId);
            setJobId(refVal_setJobId);
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
    if(val.has_field(utility::conversions::to_string_t(U("error_code"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("error_code")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setErrorCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrorCode);
            setErrorCode(refVal_setErrorCode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("error"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("error")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setError;
            ok &= ModelBase::fromJson(fieldValue, refVal_setError);
            setError(refVal_setError);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("job_submit_user_msg"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("job_submit_user_msg")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setJobSubmitUserMsg;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJobSubmitUserMsg);
            setJobSubmitUserMsg(refVal_setJobSubmitUserMsg);
        }
    }
    return ok;
}

void V0_0_41_openapi_job_submit_response_result::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Job_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("job_id")), m_Job_id));
    }
    if(m_Step_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("step_id")), m_Step_id));
    }
    if(m_Error_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("error_code")), m_Error_code));
    }
    if(m_ErrorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("error")), m_Error));
    }
    if(m_Job_submit_user_msgIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("job_submit_user_msg")), m_Job_submit_user_msg));
    }
}

bool V0_0_41_openapi_job_submit_response_result::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("job_id"))))
    {
        int32_t refVal_setJobId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("job_id"))), refVal_setJobId );
        setJobId(refVal_setJobId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("step_id"))))
    {
        utility::string_t refVal_setStepId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("step_id"))), refVal_setStepId );
        setStepId(refVal_setStepId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("error_code"))))
    {
        int32_t refVal_setErrorCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("error_code"))), refVal_setErrorCode );
        setErrorCode(refVal_setErrorCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("error"))))
    {
        utility::string_t refVal_setError;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("error"))), refVal_setError );
        setError(refVal_setError);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("job_submit_user_msg"))))
    {
        utility::string_t refVal_setJobSubmitUserMsg;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("job_submit_user_msg"))), refVal_setJobSubmitUserMsg );
        setJobSubmitUserMsg(refVal_setJobSubmitUserMsg);
    }
    return ok;
}

int32_t V0_0_41_openapi_job_submit_response_result::getJobId() const
{
    return m_Job_id;
}

void V0_0_41_openapi_job_submit_response_result::setJobId(int32_t value)
{
    m_Job_id = value;
    m_Job_idIsSet = true;
}

bool V0_0_41_openapi_job_submit_response_result::jobIdIsSet() const
{
    return m_Job_idIsSet;
}

void V0_0_41_openapi_job_submit_response_result::unsetJob_id()
{
    m_Job_idIsSet = false;
}
utility::string_t V0_0_41_openapi_job_submit_response_result::getStepId() const
{
    return m_Step_id;
}

void V0_0_41_openapi_job_submit_response_result::setStepId(const utility::string_t& value)
{
    m_Step_id = value;
    m_Step_idIsSet = true;
}

bool V0_0_41_openapi_job_submit_response_result::stepIdIsSet() const
{
    return m_Step_idIsSet;
}

void V0_0_41_openapi_job_submit_response_result::unsetStep_id()
{
    m_Step_idIsSet = false;
}
int32_t V0_0_41_openapi_job_submit_response_result::getErrorCode() const
{
    return m_Error_code;
}

void V0_0_41_openapi_job_submit_response_result::setErrorCode(int32_t value)
{
    m_Error_code = value;
    m_Error_codeIsSet = true;
}

bool V0_0_41_openapi_job_submit_response_result::errorCodeIsSet() const
{
    return m_Error_codeIsSet;
}

void V0_0_41_openapi_job_submit_response_result::unsetError_code()
{
    m_Error_codeIsSet = false;
}
utility::string_t V0_0_41_openapi_job_submit_response_result::getError() const
{
    return m_Error;
}

void V0_0_41_openapi_job_submit_response_result::setError(const utility::string_t& value)
{
    m_Error = value;
    m_ErrorIsSet = true;
}

bool V0_0_41_openapi_job_submit_response_result::errorIsSet() const
{
    return m_ErrorIsSet;
}

void V0_0_41_openapi_job_submit_response_result::unsetError()
{
    m_ErrorIsSet = false;
}
utility::string_t V0_0_41_openapi_job_submit_response_result::getJobSubmitUserMsg() const
{
    return m_Job_submit_user_msg;
}

void V0_0_41_openapi_job_submit_response_result::setJobSubmitUserMsg(const utility::string_t& value)
{
    m_Job_submit_user_msg = value;
    m_Job_submit_user_msgIsSet = true;
}

bool V0_0_41_openapi_job_submit_response_result::jobSubmitUserMsgIsSet() const
{
    return m_Job_submit_user_msgIsSet;
}

void V0_0_41_openapi_job_submit_response_result::unsetJob_submit_user_msg()
{
    m_Job_submit_user_msgIsSet = false;
}
}
}
}
}


