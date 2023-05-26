/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_38_job_tres.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_38_job_tres::Dbv0_0_38_job_tres()
{
    m_AllocatedIsSet = false;
    m_RequestedIsSet = false;
}

Dbv0_0_38_job_tres::~Dbv0_0_38_job_tres()
{
}

void Dbv0_0_38_job_tres::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_38_job_tres::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AllocatedIsSet)
    {
        val[utility::conversions::to_string_t(U("allocated"))] = ModelBase::toJson(m_Allocated);
    }
    if(m_RequestedIsSet)
    {
        val[utility::conversions::to_string_t(U("requested"))] = ModelBase::toJson(m_Requested);
    }

    return val;
}

bool Dbv0_0_38_job_tres::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("allocated"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("allocated")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>> refVal_setAllocated;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAllocated);
            setAllocated(refVal_setAllocated);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("requested"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("requested")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>> refVal_setRequested;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRequested);
            setRequested(refVal_setRequested);
        }
    }
    return ok;
}

void Dbv0_0_38_job_tres::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_RequestedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("requested")), m_Requested));
    }
}

bool Dbv0_0_38_job_tres::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("allocated"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>> refVal_setAllocated;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("allocated"))), refVal_setAllocated );
        setAllocated(refVal_setAllocated);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("requested"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>> refVal_setRequested;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("requested"))), refVal_setRequested );
        setRequested(refVal_setRequested);
    }
    return ok;
}

std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>>& Dbv0_0_38_job_tres::getAllocated()
{
    return m_Allocated;
}

void Dbv0_0_38_job_tres::setAllocated(const std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>>& value)
{
    m_Allocated = value;
    m_AllocatedIsSet = true;
}

bool Dbv0_0_38_job_tres::allocatedIsSet() const
{
    return m_AllocatedIsSet;
}

void Dbv0_0_38_job_tres::unsetAllocated()
{
    m_AllocatedIsSet = false;
}
std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>>& Dbv0_0_38_job_tres::getRequested()
{
    return m_Requested;
}

void Dbv0_0_38_job_tres::setRequested(const std::vector<std::shared_ptr<Dbv0_0_38_tres_list_inner>>& value)
{
    m_Requested = value;
    m_RequestedIsSet = true;
}

bool Dbv0_0_38_job_tres::requestedIsSet() const
{
    return m_RequestedIsSet;
}

void Dbv0_0_38_job_tres::unsetRequested()
{
    m_RequestedIsSet = false;
}
}
}
}
}

