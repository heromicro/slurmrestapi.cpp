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



#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes()
{
    m_TotalIsSet = false;
    m_PerIsSet = false;
}

V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::~V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes()
{
}

void V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t(U("total"))] = ModelBase::toJson(m_Total);
    }
    if(m_PerIsSet)
    {
        val[utility::conversions::to_string_t(U("per"))] = ModelBase::toJson(m_Per);
    }

    return val;
}

bool V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("total"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> refVal_setTotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotal);
            setTotal(refVal_setTotal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("per"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("per")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per> refVal_setPer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPer);
            setPer(refVal_setPer);
        }
    }
    return ok;
}

void V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("total")), m_Total));
    }
    if(m_PerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("per")), m_Per));
    }
}

bool V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("total"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> refVal_setTotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total"))), refVal_setTotal );
        setTotal(refVal_setTotal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("per"))))
    {
        std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per> refVal_setPer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("per"))), refVal_setPer );
        setPer(refVal_setPer);
    }
    return ok;
}

std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::getTotal()
{
    return m_Total;
}

void V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::setTotal(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::totalIsSet() const
{
    return m_TotalIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::unsetTotal()
{
    m_TotalIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per> V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::getPer() const
{
    return m_Per;
}

void V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::setPer(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per>& value)
{
    m_Per = value;
    m_PerIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::perIsSet() const
{
    return m_PerIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes::unsetPer()
{
    m_PerIsSet = false;
}
}
}
}
}


