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



#include "slurmrestapi/model/V0_0_39_assoc_max_jobs.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_39_assoc_max_jobs::V0_0_39_assoc_max_jobs()
{
    m_PerIsSet = false;
    m_ActiveIsSet = false;
    m_AccruingIsSet = false;
    m_TotalIsSet = false;
}

V0_0_39_assoc_max_jobs::~V0_0_39_assoc_max_jobs()
{
}

void V0_0_39_assoc_max_jobs::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_assoc_max_jobs::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PerIsSet)
    {
        val[utility::conversions::to_string_t(U("per"))] = ModelBase::toJson(m_Per);
    }
    if(m_ActiveIsSet)
    {
        val[utility::conversions::to_string_t(U("active"))] = ModelBase::toJson(m_Active);
    }
    if(m_AccruingIsSet)
    {
        val[utility::conversions::to_string_t(U("accruing"))] = ModelBase::toJson(m_Accruing);
    }
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t(U("total"))] = ModelBase::toJson(m_Total);
    }

    return val;
}

bool V0_0_39_assoc_max_jobs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("per"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("per")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_assoc_max_jobs_per> refVal_setPer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPer);
            setPer(refVal_setPer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("active"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("active")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_uint32_no_val> refVal_setActive;
            ok &= ModelBase::fromJson(fieldValue, refVal_setActive);
            setActive(refVal_setActive);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accruing"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accruing")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_uint32_no_val> refVal_setAccruing;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccruing);
            setAccruing(refVal_setAccruing);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("total"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_uint32_no_val> refVal_setTotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotal);
            setTotal(refVal_setTotal);
        }
    }
    return ok;
}

void V0_0_39_assoc_max_jobs::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ActiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("active")), m_Active));
    }
    if(m_AccruingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accruing")), m_Accruing));
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("total")), m_Total));
    }
}

bool V0_0_39_assoc_max_jobs::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("per"))))
    {
        std::shared_ptr<V0_0_39_assoc_max_jobs_per> refVal_setPer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("per"))), refVal_setPer );
        setPer(refVal_setPer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("active"))))
    {
        std::shared_ptr<V0_0_39_uint32_no_val> refVal_setActive;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("active"))), refVal_setActive );
        setActive(refVal_setActive);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accruing"))))
    {
        std::shared_ptr<V0_0_39_uint32_no_val> refVal_setAccruing;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accruing"))), refVal_setAccruing );
        setAccruing(refVal_setAccruing);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("total"))))
    {
        std::shared_ptr<V0_0_39_uint32_no_val> refVal_setTotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total"))), refVal_setTotal );
        setTotal(refVal_setTotal);
    }
    return ok;
}

std::shared_ptr<V0_0_39_assoc_max_jobs_per> V0_0_39_assoc_max_jobs::getPer() const
{
    return m_Per;
}

void V0_0_39_assoc_max_jobs::setPer(const std::shared_ptr<V0_0_39_assoc_max_jobs_per>& value)
{
    m_Per = value;
    m_PerIsSet = true;
}

bool V0_0_39_assoc_max_jobs::perIsSet() const
{
    return m_PerIsSet;
}

void V0_0_39_assoc_max_jobs::unsetPer()
{
    m_PerIsSet = false;
}
std::shared_ptr<V0_0_39_uint32_no_val> V0_0_39_assoc_max_jobs::getActive() const
{
    return m_Active;
}

void V0_0_39_assoc_max_jobs::setActive(const std::shared_ptr<V0_0_39_uint32_no_val>& value)
{
    m_Active = value;
    m_ActiveIsSet = true;
}

bool V0_0_39_assoc_max_jobs::activeIsSet() const
{
    return m_ActiveIsSet;
}

void V0_0_39_assoc_max_jobs::unsetActive()
{
    m_ActiveIsSet = false;
}
std::shared_ptr<V0_0_39_uint32_no_val> V0_0_39_assoc_max_jobs::getAccruing() const
{
    return m_Accruing;
}

void V0_0_39_assoc_max_jobs::setAccruing(const std::shared_ptr<V0_0_39_uint32_no_val>& value)
{
    m_Accruing = value;
    m_AccruingIsSet = true;
}

bool V0_0_39_assoc_max_jobs::accruingIsSet() const
{
    return m_AccruingIsSet;
}

void V0_0_39_assoc_max_jobs::unsetAccruing()
{
    m_AccruingIsSet = false;
}
std::shared_ptr<V0_0_39_uint32_no_val> V0_0_39_assoc_max_jobs::getTotal() const
{
    return m_Total;
}

void V0_0_39_assoc_max_jobs::setTotal(const std::shared_ptr<V0_0_39_uint32_no_val>& value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool V0_0_39_assoc_max_jobs::totalIsSet() const
{
    return m_TotalIsSet;
}

void V0_0_39_assoc_max_jobs::unsetTotal()
{
    m_TotalIsSet = false;
}
}
}
}
}


