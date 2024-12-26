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



#include "slurmrestapi/model/V0_0_39_accounting.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_39_accounting::V0_0_39_accounting()
{
    m_AllocatedIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Start = 0L;
    m_StartIsSet = false;
    m_TRESIsSet = false;
}

V0_0_39_accounting::~V0_0_39_accounting()
{
}

void V0_0_39_accounting::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_accounting::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AllocatedIsSet)
    {
        val[utility::conversions::to_string_t(U("allocated"))] = ModelBase::toJson(m_Allocated);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_StartIsSet)
    {
        val[utility::conversions::to_string_t(U("start"))] = ModelBase::toJson(m_Start);
    }
    if(m_TRESIsSet)
    {
        val[utility::conversions::to_string_t(U("TRES"))] = ModelBase::toJson(m_TRES);
    }

    return val;
}

bool V0_0_39_accounting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("allocated"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("allocated")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_accounting_allocated> refVal_setAllocated;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAllocated);
            setAllocated(refVal_setAllocated);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("start"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("start")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setStart;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStart);
            setStart(refVal_setStart);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("TRES"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("TRES")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_tres> refVal_setTRES;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTRES);
            setTRES(refVal_setTRES);
        }
    }
    return ok;
}

void V0_0_39_accounting::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AllocatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("allocated")), m_Allocated));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_StartIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("start")), m_Start));
    }
    if(m_TRESIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("TRES")), m_TRES));
    }
}

bool V0_0_39_accounting::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("allocated"))))
    {
        std::shared_ptr<V0_0_39_accounting_allocated> refVal_setAllocated;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("allocated"))), refVal_setAllocated );
        setAllocated(refVal_setAllocated);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        int32_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("start"))))
    {
        int64_t refVal_setStart;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("start"))), refVal_setStart );
        setStart(refVal_setStart);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("TRES"))))
    {
        std::shared_ptr<V0_0_39_tres> refVal_setTRES;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("TRES"))), refVal_setTRES );
        setTRES(refVal_setTRES);
    }
    return ok;
}

std::shared_ptr<V0_0_39_accounting_allocated> V0_0_39_accounting::getAllocated() const
{
    return m_Allocated;
}

void V0_0_39_accounting::setAllocated(const std::shared_ptr<V0_0_39_accounting_allocated>& value)
{
    m_Allocated = value;
    m_AllocatedIsSet = true;
}

bool V0_0_39_accounting::allocatedIsSet() const
{
    return m_AllocatedIsSet;
}

void V0_0_39_accounting::unsetAllocated()
{
    m_AllocatedIsSet = false;
}
int32_t V0_0_39_accounting::getId() const
{
    return m_Id;
}

void V0_0_39_accounting::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool V0_0_39_accounting::idIsSet() const
{
    return m_IdIsSet;
}

void V0_0_39_accounting::unsetId()
{
    m_IdIsSet = false;
}
int64_t V0_0_39_accounting::getStart() const
{
    return m_Start;
}

void V0_0_39_accounting::setStart(int64_t value)
{
    m_Start = value;
    m_StartIsSet = true;
}

bool V0_0_39_accounting::startIsSet() const
{
    return m_StartIsSet;
}

void V0_0_39_accounting::unsetStart()
{
    m_StartIsSet = false;
}
std::shared_ptr<V0_0_39_tres> V0_0_39_accounting::getTRES() const
{
    return m_TRES;
}

void V0_0_39_accounting::setTRES(const std::shared_ptr<V0_0_39_tres>& value)
{
    m_TRES = value;
    m_TRESIsSet = true;
}

bool V0_0_39_accounting::tRESIsSet() const
{
    return m_TRESIsSet;
}

void V0_0_39_accounting::unsetTRES()
{
    m_TRESIsSet = false;
}
}
}
}
}


