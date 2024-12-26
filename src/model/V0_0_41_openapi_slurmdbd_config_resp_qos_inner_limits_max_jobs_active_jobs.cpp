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



#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs()
{
    m_PerIsSet = false;
}

V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::~V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs()
{
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PerIsSet)
    {
        val[utility::conversions::to_string_t(U("per"))] = ModelBase::toJson(m_Per);
    }

    return val;
}

bool V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("per"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("per")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per> refVal_setPer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPer);
            setPer(refVal_setPer);
        }
    }
    return ok;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("per")), m_Per));
    }
}

bool V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("per"))))
    {
        std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per> refVal_setPer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("per"))), refVal_setPer );
        setPer(refVal_setPer);
    }
    return ok;
}

std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per> V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::getPer() const
{
    return m_Per;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::setPer(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per>& value)
{
    m_Per = value;
    m_PerIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::perIsSet() const
{
    return m_PerIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs::unsetPer()
{
    m_PerIsSet = false;
}
}
}
}
}


