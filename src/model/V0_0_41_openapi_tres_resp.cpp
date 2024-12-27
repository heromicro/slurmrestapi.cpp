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



#include "slurmrestapi/model/V0_0_41_openapi_tres_resp.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_41_openapi_tres_resp::V0_0_41_openapi_tres_resp()
{
    m_TRESIsSet = false;
    m_MetaIsSet = false;
    m_ErrorsIsSet = false;
    m_WarningsIsSet = false;
}

V0_0_41_openapi_tres_resp::~V0_0_41_openapi_tres_resp()
{
}

void V0_0_41_openapi_tres_resp::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_tres_resp::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TRESIsSet)
    {
        val[utility::conversions::to_string_t(U("TRES"))] = ModelBase::toJson(m_TRES);
    }
    if(m_MetaIsSet)
    {
        val[utility::conversions::to_string_t(U("meta"))] = ModelBase::toJson(m_Meta);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_WarningsIsSet)
    {
        val[utility::conversions::to_string_t(U("warnings"))] = ModelBase::toJson(m_Warnings);
    }

    return val;
}

bool V0_0_41_openapi_tres_resp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("TRES"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("TRES")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> refVal_setTRES;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTRES);
            setTRES(refVal_setTRES);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("meta"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("meta")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_shares_resp_meta> refVal_setMeta;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMeta);
            setMeta(refVal_setMeta);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_errors_inner>> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("warnings"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("warnings")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_warnings_inner>> refVal_setWarnings;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWarnings);
            setWarnings(refVal_setWarnings);
        }
    }
    return ok;
}

void V0_0_41_openapi_tres_resp::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TRESIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("TRES")), m_TRES));
    }
    if(m_MetaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("meta")), m_Meta));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
    if(m_WarningsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("warnings")), m_Warnings));
    }
}

bool V0_0_41_openapi_tres_resp::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("TRES"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> refVal_setTRES;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("TRES"))), refVal_setTRES );
        setTRES(refVal_setTRES);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("meta"))))
    {
        std::shared_ptr<V0_0_41_openapi_shares_resp_meta> refVal_setMeta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("meta"))), refVal_setMeta );
        setMeta(refVal_setMeta);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_errors_inner>> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("warnings"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_warnings_inner>> refVal_setWarnings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("warnings"))), refVal_setWarnings );
        setWarnings(refVal_setWarnings);
    }
    return ok;
}

std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& V0_0_41_openapi_tres_resp::getTRES()
{
    return m_TRES;
}

void V0_0_41_openapi_tres_resp::setTRES(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& value)
{
    m_TRES = value;
    m_TRESIsSet = true;
}

bool V0_0_41_openapi_tres_resp::tRESIsSet() const
{
    return m_TRESIsSet;
}

void V0_0_41_openapi_tres_resp::unsetTRES()
{
    m_TRESIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_shares_resp_meta> V0_0_41_openapi_tres_resp::getMeta() const
{
    return m_Meta;
}

void V0_0_41_openapi_tres_resp::setMeta(const std::shared_ptr<V0_0_41_openapi_shares_resp_meta>& value)
{
    m_Meta = value;
    m_MetaIsSet = true;
}

bool V0_0_41_openapi_tres_resp::metaIsSet() const
{
    return m_MetaIsSet;
}

void V0_0_41_openapi_tres_resp::unsetMeta()
{
    m_MetaIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_errors_inner>>& V0_0_41_openapi_tres_resp::getErrors()
{
    return m_Errors;
}

void V0_0_41_openapi_tres_resp::setErrors(const std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_errors_inner>>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool V0_0_41_openapi_tres_resp::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void V0_0_41_openapi_tres_resp::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_warnings_inner>>& V0_0_41_openapi_tres_resp::getWarnings()
{
    return m_Warnings;
}

void V0_0_41_openapi_tres_resp::setWarnings(const std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_warnings_inner>>& value)
{
    m_Warnings = value;
    m_WarningsIsSet = true;
}

bool V0_0_41_openapi_tres_resp::warningsIsSet() const
{
    return m_WarningsIsSet;
}

void V0_0_41_openapi_tres_resp::unsetWarnings()
{
    m_WarningsIsSet = false;
}
}
}
}
}


